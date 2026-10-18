// PythiaPython.cpp is a part of the PYTHIA event generator.
// Copyright (C) 2026 Philip Ilten and Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Definitions for loading purely Pythonic files into the pythia8 module.

#include <dirent.h>
#include <dlfcn.h>
#include "extra/PythiaPython.h"
#include "Pythia8/PythiaStdlib.h"

namespace Pythia8 {

//==========================================================================

// Load purely Pythonic modules.

void loadExtraPython(pybind11::module scope) {

  // Get the location of the library containing this function.
  Dl_info info;
  string lib;
  if (dladdr((void*)loadExtraPython, &info) != 0) {
    lib = info.dli_fname;
    lib = lib.substr(0, lib.rfind("/"));
  }
  vector<string> paths = {
    lib + "/python", lib + "/../../../share/Pythia8/python"};
  
  // Find the Python files.
  vector<string> pys;
  for (const string& path : paths) {
    DIR *dir = opendir(path.c_str());
    if (dir == nullptr) continue;
    struct dirent *ent;
    while ((ent = readdir(dir)) != nullptr) {
      string py = ent->d_name;
      if (py.size() <= 3 || py[0] == '.') continue;
      if (py.compare(py.size() - 3, 3, ".py") != 0) continue;
      pys.push_back(path + "/" + py);
    }
    closedir(dir);
    break;
  }

  // Sort for a deterministic loading order.
  sort(pys.begin(), pys.end());

  // Execute the pure Pythonic files.
  for (const string& py : pys) {
    ifstream is(py);
    if (!is.good()) continue;
    stringstream ss;
    ss << is.rdbuf();
    pybind11::exec(ss.str(), scope.attr("__dict__"));
  }

}

//==========================================================================

} // end namespace Pythia8
