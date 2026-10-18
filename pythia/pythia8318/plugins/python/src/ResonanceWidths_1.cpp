#include <Pythia8/Basics.h>
#include <Pythia8/BeamSetup.h>
#include <Pythia8/BeamShape.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/LesHouches.h>
#include <Pythia8/Logger.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/SusyLesHouches.h>
#include <Pythia8/Weights.h>
#include <complex>
#include <functional>
#include <ios>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <set>
#include <sstream>
#include <sstream> // __str__
#include <string>
#include <utility>
#include <vector>

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

// Pythia8::ResonanceHchgchgRight file:Pythia8/ResonanceWidths.h line:682
struct PyCallBack_Pythia8_ResonanceHchgchgRight : public Pythia8::ResonanceHchgchgRight {
	using Pythia8::ResonanceHchgchgRight::ResonanceHchgchgRight;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ResonanceWidths::init(a0);
	}
	void initConstants() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "initConstants");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ResonanceWidths::initConstants();
	}
	bool initBSM() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "initBSM");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ResonanceWidths::initBSM();
	}
	bool allowCalc() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "allowCalc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ResonanceWidths::allowCalc();
	}
	void calcPreFac(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "calcPreFac");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ResonanceWidths::calcPreFac(a0);
	}
	void calcWidth(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgRight *>(this), "calcWidth");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ResonanceWidths::calcWidth(a0);
	}
};

void bind_Pythia8_ResonanceWidths_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::ResonanceHchgchgRight file:Pythia8/ResonanceWidths.h line:682
		pybind11::class_<Pythia8::ResonanceHchgchgRight, std::shared_ptr<Pythia8::ResonanceHchgchgRight>, PyCallBack_Pythia8_ResonanceHchgchgRight, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceHchgchgRight", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceHchgchgRight const &o){ return new PyCallBack_Pythia8_ResonanceHchgchgRight(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceHchgchgRight const &o){ return new Pythia8::ResonanceHchgchgRight(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceHchgchgRight & (Pythia8::ResonanceHchgchgRight::*)(const class Pythia8::ResonanceHchgchgRight &)) &Pythia8::ResonanceHchgchgRight::operator=, "C++: Pythia8::ResonanceHchgchgRight::operator=(const class Pythia8::ResonanceHchgchgRight &) --> class Pythia8::ResonanceHchgchgRight &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::LHblock file:Pythia8/SusyLesHouches.h line:26
		pybind11::class_<Pythia8::LHblock<std::string>, std::shared_ptr<Pythia8::LHblock<std::string>>> cl(M("Pythia8"), "LHblock_std_string_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHblock<std::string>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHblock<std::string> const &o){ return new Pythia8::LHblock<std::string>(o); } ) );
		cl.def_readwrite("entry", &Pythia8::LHblock<std::string>::entry);
		cl.def("exists", (bool (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::exists, "C++: Pythia8::LHblock<std::string>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::clear, "C++: Pythia8::LHblock<std::string>::clear() --> void");
		cl.def("set", (int (Pythia8::LHblock<std::string>::*)(int, std::string)) &Pythia8::LHblock<std::string>::set, "C++: Pythia8::LHblock<std::string>::set(int, std::string) --> int", pybind11::arg("iIn"), pybind11::arg("valIn"));
		cl.def("set", (void (Pythia8::LHblock<std::string>::*)(std::string)) &Pythia8::LHblock<std::string>::set, "C++: Pythia8::LHblock<std::string>::set(std::string) --> void", pybind11::arg("valIn"));
		cl.def("exists", (bool (Pythia8::LHblock<std::string>::*)(int)) &Pythia8::LHblock<std::string>::exists, "C++: Pythia8::LHblock<std::string>::exists(int) --> bool", pybind11::arg("iIn"));
		cl.def("__call__", (std::string (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::operator(), "C++: Pythia8::LHblock<std::string>::operator()() --> std::string");
		cl.def("__call__", (std::string (Pythia8::LHblock<std::string>::*)(int)) &Pythia8::LHblock<std::string>::operator(), "C++: Pythia8::LHblock<std::string>::operator()(int) --> std::string", pybind11::arg("iIn"));
		cl.def("size", (int (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::size, "C++: Pythia8::LHblock<std::string>::size() --> int");
		cl.def("first", (int (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::first, "C++: Pythia8::LHblock<std::string>::first() --> int");
		cl.def("next", (int (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::next, "C++: Pythia8::LHblock<std::string>::next() --> int");
		cl.def("list", (void (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::list, "C++: Pythia8::LHblock<std::string>::list() --> void");
		cl.def("setq", (void (Pythia8::LHblock<std::string>::*)(double)) &Pythia8::LHblock<std::string>::setq, "C++: Pythia8::LHblock<std::string>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHblock<std::string>::*)()) &Pythia8::LHblock<std::string>::q, "C++: Pythia8::LHblock<std::string>::q() --> double");
		cl.def("assign", (class Pythia8::LHblock<std::string > & (Pythia8::LHblock<std::string>::*)(const class Pythia8::LHblock<std::string > &)) &Pythia8::LHblock<std::string>::operator=, "C++: Pythia8::LHblock<std::string>::operator=(const class Pythia8::LHblock<std::string > &) --> class Pythia8::LHblock<std::string > &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::LHblock file:Pythia8/SusyLesHouches.h line:26
		pybind11::class_<Pythia8::LHblock<int>, std::shared_ptr<Pythia8::LHblock<int>>> cl(M("Pythia8"), "LHblock_int_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHblock<int>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHblock<int> const &o){ return new Pythia8::LHblock<int>(o); } ) );
		cl.def_readwrite("entry", &Pythia8::LHblock<int>::entry);
		cl.def("exists", (bool (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::exists, "C++: Pythia8::LHblock<int>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::clear, "C++: Pythia8::LHblock<int>::clear() --> void");
		cl.def("set", (int (Pythia8::LHblock<int>::*)(int, int)) &Pythia8::LHblock<int>::set, "C++: Pythia8::LHblock<int>::set(int, int) --> int", pybind11::arg("iIn"), pybind11::arg("valIn"));
		cl.def("set", (void (Pythia8::LHblock<int>::*)(int)) &Pythia8::LHblock<int>::set, "C++: Pythia8::LHblock<int>::set(int) --> void", pybind11::arg("valIn"));
		cl.def("exists", (bool (Pythia8::LHblock<int>::*)(int)) &Pythia8::LHblock<int>::exists, "C++: Pythia8::LHblock<int>::exists(int) --> bool", pybind11::arg("iIn"));
		cl.def("__call__", (int (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::operator(), "C++: Pythia8::LHblock<int>::operator()() --> int");
		cl.def("__call__", (int (Pythia8::LHblock<int>::*)(int)) &Pythia8::LHblock<int>::operator(), "C++: Pythia8::LHblock<int>::operator()(int) --> int", pybind11::arg("iIn"));
		cl.def("size", (int (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::size, "C++: Pythia8::LHblock<int>::size() --> int");
		cl.def("first", (int (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::first, "C++: Pythia8::LHblock<int>::first() --> int");
		cl.def("next", (int (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::next, "C++: Pythia8::LHblock<int>::next() --> int");
		cl.def("list", (void (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::list, "C++: Pythia8::LHblock<int>::list() --> void");
		cl.def("setq", (void (Pythia8::LHblock<int>::*)(double)) &Pythia8::LHblock<int>::setq, "C++: Pythia8::LHblock<int>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHblock<int>::*)()) &Pythia8::LHblock<int>::q, "C++: Pythia8::LHblock<int>::q() --> double");
		cl.def("assign", (class Pythia8::LHblock<int> & (Pythia8::LHblock<int>::*)(const class Pythia8::LHblock<int> &)) &Pythia8::LHblock<int>::operator=, "C++: Pythia8::LHblock<int>::operator=(const class Pythia8::LHblock<int> &) --> class Pythia8::LHblock<int> &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::LHblock file:Pythia8/SusyLesHouches.h line:26
		pybind11::class_<Pythia8::LHblock<double>, std::shared_ptr<Pythia8::LHblock<double>>> cl(M("Pythia8"), "LHblock_double_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHblock<double>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHblock<double> const &o){ return new Pythia8::LHblock<double>(o); } ) );
		cl.def_readwrite("entry", &Pythia8::LHblock<double>::entry);
		cl.def("exists", (bool (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::exists, "C++: Pythia8::LHblock<double>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::clear, "C++: Pythia8::LHblock<double>::clear() --> void");
		cl.def("set", (int (Pythia8::LHblock<double>::*)(int, double)) &Pythia8::LHblock<double>::set, "C++: Pythia8::LHblock<double>::set(int, double) --> int", pybind11::arg("iIn"), pybind11::arg("valIn"));
		cl.def("set", (void (Pythia8::LHblock<double>::*)(double)) &Pythia8::LHblock<double>::set, "C++: Pythia8::LHblock<double>::set(double) --> void", pybind11::arg("valIn"));
		cl.def("exists", (bool (Pythia8::LHblock<double>::*)(int)) &Pythia8::LHblock<double>::exists, "C++: Pythia8::LHblock<double>::exists(int) --> bool", pybind11::arg("iIn"));
		cl.def("__call__", (double (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::operator(), "C++: Pythia8::LHblock<double>::operator()() --> double");
		cl.def("__call__", (double (Pythia8::LHblock<double>::*)(int)) &Pythia8::LHblock<double>::operator(), "C++: Pythia8::LHblock<double>::operator()(int) --> double", pybind11::arg("iIn"));
		cl.def("size", (int (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::size, "C++: Pythia8::LHblock<double>::size() --> int");
		cl.def("first", (int (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::first, "C++: Pythia8::LHblock<double>::first() --> int");
		cl.def("next", (int (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::next, "C++: Pythia8::LHblock<double>::next() --> int");
		cl.def("list", (void (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::list, "C++: Pythia8::LHblock<double>::list() --> void");
		cl.def("setq", (void (Pythia8::LHblock<double>::*)(double)) &Pythia8::LHblock<double>::setq, "C++: Pythia8::LHblock<double>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHblock<double>::*)()) &Pythia8::LHblock<double>::q, "C++: Pythia8::LHblock<double>::q() --> double");
		cl.def("assign", (class Pythia8::LHblock<double> & (Pythia8::LHblock<double>::*)(const class Pythia8::LHblock<double> &)) &Pythia8::LHblock<double>::operator=, "C++: Pythia8::LHblock<double>::operator=(const class Pythia8::LHblock<double> &) --> class Pythia8::LHblock<double> &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::LHgenericBlock file:Pythia8/SusyLesHouches.h line:111
		pybind11::class_<Pythia8::LHgenericBlock, std::shared_ptr<Pythia8::LHgenericBlock>, Pythia8::LHblock<std::string>> cl(M("Pythia8"), "LHgenericBlock", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHgenericBlock(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHgenericBlock const &o){ return new Pythia8::LHgenericBlock(o); } ) );
		cl.def("set", (int (Pythia8::LHgenericBlock::*)(std::string)) &Pythia8::LHgenericBlock::set, "C++: Pythia8::LHgenericBlock::set(std::string) --> int", pybind11::arg("lineIn"));
		cl.def("assign", (class Pythia8::LHgenericBlock & (Pythia8::LHgenericBlock::*)(const class Pythia8::LHgenericBlock &)) &Pythia8::LHgenericBlock::operator=, "C++: Pythia8::LHgenericBlock::operator=(const class Pythia8::LHgenericBlock &) --> class Pythia8::LHgenericBlock &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::LHmatrixBlock file:Pythia8/SusyLesHouches.h line:129
		pybind11::class_<Pythia8::LHmatrixBlock<4>, std::shared_ptr<Pythia8::LHmatrixBlock<4>>> cl(M("Pythia8"), "LHmatrixBlock_4_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHmatrixBlock<4>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHmatrixBlock<4> const &o){ return new Pythia8::LHmatrixBlock<4>(o); } ) );
		cl.def("assign", (class Pythia8::LHmatrixBlock<4> & (Pythia8::LHmatrixBlock<4>::*)(const class Pythia8::LHmatrixBlock<4> &)) &Pythia8::LHmatrixBlock<4>::operator=, "C++: Pythia8::LHmatrixBlock<4>::operator=(const class Pythia8::LHmatrixBlock<4> &) --> class Pythia8::LHmatrixBlock<4> &", pybind11::return_value_policy::reference, pybind11::arg("m"));
		cl.def("exists", (bool (Pythia8::LHmatrixBlock<4>::*)()) &Pythia8::LHmatrixBlock<4>::exists, "C++: Pythia8::LHmatrixBlock<4>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHmatrixBlock<4>::*)()) &Pythia8::LHmatrixBlock<4>::clear, "C++: Pythia8::LHmatrixBlock<4>::clear() --> void");
		cl.def("set", (int (Pythia8::LHmatrixBlock<4>::*)(int, int, double)) &Pythia8::LHmatrixBlock<4>::set, "C++: Pythia8::LHmatrixBlock<4>::set(int, int, double) --> int", pybind11::arg("iIn"), pybind11::arg("jIn"), pybind11::arg("valIn"));
		cl.def("__call__", (double (Pythia8::LHmatrixBlock<4>::*)(int, int) const) &Pythia8::LHmatrixBlock<4>::operator(), "C++: Pythia8::LHmatrixBlock<4>::operator()(int, int) const --> double", pybind11::arg("iIn"), pybind11::arg("jIn"));
		cl.def("setq", (void (Pythia8::LHmatrixBlock<4>::*)(double)) &Pythia8::LHmatrixBlock<4>::setq, "C++: Pythia8::LHmatrixBlock<4>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHmatrixBlock<4>::*)()) &Pythia8::LHmatrixBlock<4>::q, "C++: Pythia8::LHmatrixBlock<4>::q() --> double");
		cl.def("list", (void (Pythia8::LHmatrixBlock<4>::*)()) &Pythia8::LHmatrixBlock<4>::list, "C++: Pythia8::LHmatrixBlock<4>::list() --> void");
	}
	{ // Pythia8::LHmatrixBlock file:Pythia8/SusyLesHouches.h line:129
		pybind11::class_<Pythia8::LHmatrixBlock<2>, std::shared_ptr<Pythia8::LHmatrixBlock<2>>> cl(M("Pythia8"), "LHmatrixBlock_2_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHmatrixBlock<2>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHmatrixBlock<2> const &o){ return new Pythia8::LHmatrixBlock<2>(o); } ) );
		cl.def("assign", (class Pythia8::LHmatrixBlock<2> & (Pythia8::LHmatrixBlock<2>::*)(const class Pythia8::LHmatrixBlock<2> &)) &Pythia8::LHmatrixBlock<2>::operator=, "C++: Pythia8::LHmatrixBlock<2>::operator=(const class Pythia8::LHmatrixBlock<2> &) --> class Pythia8::LHmatrixBlock<2> &", pybind11::return_value_policy::reference, pybind11::arg("m"));
		cl.def("exists", (bool (Pythia8::LHmatrixBlock<2>::*)()) &Pythia8::LHmatrixBlock<2>::exists, "C++: Pythia8::LHmatrixBlock<2>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHmatrixBlock<2>::*)()) &Pythia8::LHmatrixBlock<2>::clear, "C++: Pythia8::LHmatrixBlock<2>::clear() --> void");
		cl.def("set", (int (Pythia8::LHmatrixBlock<2>::*)(int, int, double)) &Pythia8::LHmatrixBlock<2>::set, "C++: Pythia8::LHmatrixBlock<2>::set(int, int, double) --> int", pybind11::arg("iIn"), pybind11::arg("jIn"), pybind11::arg("valIn"));
		cl.def("__call__", (double (Pythia8::LHmatrixBlock<2>::*)(int, int) const) &Pythia8::LHmatrixBlock<2>::operator(), "C++: Pythia8::LHmatrixBlock<2>::operator()(int, int) const --> double", pybind11::arg("iIn"), pybind11::arg("jIn"));
		cl.def("setq", (void (Pythia8::LHmatrixBlock<2>::*)(double)) &Pythia8::LHmatrixBlock<2>::setq, "C++: Pythia8::LHmatrixBlock<2>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHmatrixBlock<2>::*)()) &Pythia8::LHmatrixBlock<2>::q, "C++: Pythia8::LHmatrixBlock<2>::q() --> double");
		cl.def("list", (void (Pythia8::LHmatrixBlock<2>::*)()) &Pythia8::LHmatrixBlock<2>::list, "C++: Pythia8::LHmatrixBlock<2>::list() --> void");
	}
	{ // Pythia8::LHmatrixBlock file:Pythia8/SusyLesHouches.h line:129
		pybind11::class_<Pythia8::LHmatrixBlock<3>, std::shared_ptr<Pythia8::LHmatrixBlock<3>>> cl(M("Pythia8"), "LHmatrixBlock_3_t", "");
		cl.def( pybind11::init( [](){ return new Pythia8::LHmatrixBlock<3>(); } ) );
		cl.def( pybind11::init( [](Pythia8::LHmatrixBlock<3> const &o){ return new Pythia8::LHmatrixBlock<3>(o); } ) );
		cl.def("assign", (class Pythia8::LHmatrixBlock<3> & (Pythia8::LHmatrixBlock<3>::*)(const class Pythia8::LHmatrixBlock<3> &)) &Pythia8::LHmatrixBlock<3>::operator=, "C++: Pythia8::LHmatrixBlock<3>::operator=(const class Pythia8::LHmatrixBlock<3> &) --> class Pythia8::LHmatrixBlock<3> &", pybind11::return_value_policy::reference, pybind11::arg("m"));
		cl.def("exists", (bool (Pythia8::LHmatrixBlock<3>::*)()) &Pythia8::LHmatrixBlock<3>::exists, "C++: Pythia8::LHmatrixBlock<3>::exists() --> bool");
		cl.def("clear", (void (Pythia8::LHmatrixBlock<3>::*)()) &Pythia8::LHmatrixBlock<3>::clear, "C++: Pythia8::LHmatrixBlock<3>::clear() --> void");
		cl.def("set", (int (Pythia8::LHmatrixBlock<3>::*)(int, int, double)) &Pythia8::LHmatrixBlock<3>::set, "C++: Pythia8::LHmatrixBlock<3>::set(int, int, double) --> int", pybind11::arg("iIn"), pybind11::arg("jIn"), pybind11::arg("valIn"));
		cl.def("__call__", (double (Pythia8::LHmatrixBlock<3>::*)(int, int) const) &Pythia8::LHmatrixBlock<3>::operator(), "C++: Pythia8::LHmatrixBlock<3>::operator()(int, int) const --> double", pybind11::arg("iIn"), pybind11::arg("jIn"));
		cl.def("setq", (void (Pythia8::LHmatrixBlock<3>::*)(double)) &Pythia8::LHmatrixBlock<3>::setq, "C++: Pythia8::LHmatrixBlock<3>::setq(double) --> void", pybind11::arg("qIn"));
		cl.def("q", (double (Pythia8::LHmatrixBlock<3>::*)()) &Pythia8::LHmatrixBlock<3>::q, "C++: Pythia8::LHmatrixBlock<3>::q() --> double");
		cl.def("list", (void (Pythia8::LHmatrixBlock<3>::*)()) &Pythia8::LHmatrixBlock<3>::list, "C++: Pythia8::LHmatrixBlock<3>::list() --> void");
	}
}
