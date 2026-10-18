#include <Pythia8/BeamParticle.h>
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <Pythia8/SplittingsOnia.h>
#include <pybind11/complex.h>
#include <pybind11/functional.h>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>, false)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*, false)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_Pythia8_BeamParticle(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::xfModPrepData file:Pythia8/BeamParticle.h line:120
		pybind11::class_<Pythia8::xfModPrepData, std::shared_ptr<Pythia8::xfModPrepData>> cl(M("Pythia8::xfModPrepDa"), "", "");
		cl.def_readwrite("xValTot", &Pythia8::xfModPrepData::xValTot);
		cl.def_readwrite("xValLeft", &Pythia8::xfModPrepData::xValLeft);
		cl.def_readwrite("xLeft", &Pythia8::xfModPrepData::xLeft);
		cl.def_readwrite("xCompAdded", &Pythia8::xfModPrepData::xCompAdded);
		cl.def_readwrite("rescaleGS", &Pythia8::xfModPrepData::rescaleGS);
	}
}
