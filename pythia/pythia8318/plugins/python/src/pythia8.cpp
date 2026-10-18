#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>

#include <pybind11/pybind11.h>
#include <extra/PythiaPython.h>

using ModuleGetter = std::function< pybind11::module & (std::string const &) >;

void bind_Pythia8_PythiaStdlib(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Basics(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Basics_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Basics_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Streams(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_LHEF3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Weights(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Weights_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Settings(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_StandardModel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ParticleData(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ParticleData_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Event(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Event_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Analysis(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Analysis_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_MathTools(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_FragmentationFlavZpT(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PartonDistributions(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PartonDistributions_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PartonDistributions_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_BeamParticle(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_BeamParticle_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_BeamShape(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_FragmentationSystems(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_FragmentationModel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HiddenValleyFragmentation(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaTotal(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaTotal_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaLowEnergy(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_LesHouches(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_LesHouches_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ResonanceWidths(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ResonanceWidths_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SusyLesHouches(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SusyCouplings(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaProcess(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaProcess_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_UserHooks(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_MergingHooks(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_TimeShower(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HelicityBasics(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HelicityMatrixElements(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HelicityMatrixElements_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HelicityMatrixElements_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HadronLevel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ColourReconnection(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_MultipartonInteractions(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HardDiffraction(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PhaseSpace(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PhaseSpace_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SigmaOnia(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ProcessContainer(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_BeamSetup(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SimpleWeakShowerMEs(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Merging(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Ropewalk(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SimpleSpaceShower(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_SimpleTimeShower(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_ThermalFragmentation(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_VinciaCommon(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_Pythia(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_PythiaParallel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HINucleusModel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HISubCollisionModel(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8_HIInfo(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8Plugins_aMCatNLOHooks(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8Plugins_JetMatchingHooks(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8Plugins_KinematicVariations(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8Plugins_LHAHelaconia(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Pythia8Plugins_ProgressLog(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pythia8, root_module) {
	root_module.doc() = "* Documentation through the built-in help function in Python provides\n  the relevant mappings between the Python interface and the C++\n  code. For documentation on the purpose of the code, see the user\n  HTML manual and Doxygen.\n* Templated C++ types are returned as native Python types,\n  e.g. vectors are returned as lists, etc. Similarly, native Python\n  types can be passed as arguments and are converted to their\n  equivalent C++ templates.\n* No difference is made between passing by reference or pointer;\n  methods in C++ which take a pointer as an argument in Python simply\n  take the object, e.g. foo(Vec4*) and foo(Vec4&) are the same in the\n  Python interface.\n* All operators defined in C++, e.g. Vec4*double are available. Note\n  that reverse operators are not, e.g. double*Vec4.\n* Classes with defined [] operators are iterable, using standard\n  Python iteration, e.g. for prt in pythia.event.\n* Classes with a << operator can be printed via the built-in print\n  function in Python. Note this means that a string representation via\n  str is also available for these classes in Python.\n* Derived classes in Python can be passed back to PYTHIA, and should\n  be available for all classes. See main10.py for a direct Python\n  translation of the C++ main10.cc example which uses a derived class\n  from the UserHooks class to veto events.\n* The constant Pythia::info member is available as\n  Pythia::infoPython. Note, this creates a new instance of the Info\n  class, and so needs to be called each time the information might be\n  updated.\n";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find("");
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;
        Pythia8::loadExtraPython(root_module);

	static std::vector<std::string> const reserved_python_words {"nonlocal", "global", };

	auto mangle_namespace_name(
		[](std::string const &ns) -> std::string {
			if ( std::find(reserved_python_words.begin(), reserved_python_words.end(), ns) == reserved_python_words.end() ) return ns;
			return ns+'_';
		}
	);

	std::vector< std::pair<std::string, std::string> > sub_modules {
	};
	for(auto &p : sub_modules ) modules[ p.first.empty() ? p.second :  p.first+"::"+p.second ] = modules[p.first].def_submodule( mangle_namespace_name(p.second).c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_Pythia8_PythiaStdlib(M);
	bind_Pythia8_Basics(M);
	bind_Pythia8_Basics_1(M);
	bind_Pythia8_Basics_2(M);
	bind_Pythia8_Streams(M);
	bind_Pythia8_LHEF3(M);
	bind_Pythia8_Weights(M);
	bind_Pythia8_Weights_1(M);
	bind_Pythia8_Settings(M);
	bind_Pythia8_StandardModel(M);
	bind_Pythia8_ParticleData(M);
	bind_Pythia8_ParticleData_1(M);
	bind_Pythia8_Event(M);
	bind_Pythia8_Event_1(M);
	bind_Pythia8_Analysis(M);
	bind_Pythia8_Analysis_1(M);
	bind_Pythia8_MathTools(M);
	bind_Pythia8_FragmentationFlavZpT(M);
	bind_Pythia8_PartonDistributions(M);
	bind_Pythia8_PartonDistributions_1(M);
	bind_Pythia8_PartonDistributions_2(M);
	bind_Pythia8_BeamParticle(M);
	bind_Pythia8_BeamParticle_1(M);
	bind_Pythia8_BeamShape(M);
	bind_Pythia8_FragmentationSystems(M);
	bind_Pythia8_FragmentationModel(M);
	bind_Pythia8_HiddenValleyFragmentation(M);
	bind_Pythia8_SigmaTotal(M);
	bind_Pythia8_SigmaTotal_1(M);
	bind_Pythia8_SigmaLowEnergy(M);
	bind_Pythia8_LesHouches(M);
	bind_Pythia8_LesHouches_1(M);
	bind_Pythia8_ResonanceWidths(M);
	bind_Pythia8_ResonanceWidths_1(M);
	bind_Pythia8_SusyLesHouches(M);
	bind_Pythia8_SusyCouplings(M);
	bind_Pythia8_SigmaProcess(M);
	bind_Pythia8_SigmaProcess_1(M);
	bind_Pythia8_UserHooks(M);
	bind_Pythia8_MergingHooks(M);
	bind_Pythia8_TimeShower(M);
	bind_Pythia8_HelicityBasics(M);
	bind_Pythia8_HelicityMatrixElements(M);
	bind_Pythia8_HelicityMatrixElements_1(M);
	bind_Pythia8_HelicityMatrixElements_2(M);
	bind_Pythia8_HadronLevel(M);
	bind_Pythia8_ColourReconnection(M);
	bind_Pythia8_MultipartonInteractions(M);
	bind_Pythia8_HardDiffraction(M);
	bind_Pythia8_PhaseSpace(M);
	bind_Pythia8_PhaseSpace_1(M);
	bind_Pythia8_SigmaOnia(M);
	bind_Pythia8_ProcessContainer(M);
	bind_Pythia8_BeamSetup(M);
	bind_Pythia8_SimpleWeakShowerMEs(M);
	bind_Pythia8_Merging(M);
	bind_Pythia8_Ropewalk(M);
	bind_Pythia8_SimpleSpaceShower(M);
	bind_Pythia8_SimpleTimeShower(M);
	bind_Pythia8_ThermalFragmentation(M);
	bind_Pythia8_VinciaCommon(M);
	bind_Pythia8_Pythia(M);
	bind_Pythia8_PythiaParallel(M);
	bind_Pythia8_HINucleusModel(M);
	bind_Pythia8_HISubCollisionModel(M);
	bind_Pythia8_HIInfo(M);
	bind_Pythia8Plugins_aMCatNLOHooks(M);
	bind_Pythia8Plugins_JetMatchingHooks(M);
	bind_Pythia8Plugins_KinematicVariations(M);
	bind_Pythia8Plugins_LHAHelaconia(M);
	bind_Pythia8Plugins_ProgressLog(M);

}
