#include <Pythia8/Basics.h>
#include <Pythia8/BeamSetup.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/Logger.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/Weights.h>
#include <functional>
#include <ios>
#include <istream>
#include <iterator>
#include <map>
#include <memory>
#include <ostream>
#include <sstream>
#include <sstream> // __str__
#include <streambuf>
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

// Pythia8::WeightsBase file:Pythia8/Weights.h line:37
struct PyCallBack_Pythia8_WeightsBase : public Pythia8::WeightsBase {
	using Pythia8::WeightsBase::WeightsBase;

	void init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::init();
	}
	void init(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::init(a0);
	}
	void clear() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "clear");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::clear();
	}
	void bookVectors(class std::vector<double> a0, class std::vector<std::string > a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "bookVectors");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::bookVectors(a0, a1);
	}
	void collectWeightValues(class std::vector<double> & a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "collectWeightValues");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::collectWeightValues(a0, a1);
	}
	void collectWeightNames(class std::vector<std::string > & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "collectWeightNames");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::collectWeightNames(a0);
	}
	double getWeightsValue(int a0) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "getWeightsValue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return WeightsBase::getWeightsValue(a0);
	}
	void reweightValueByIndex(int a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "reweightValueByIndex");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::reweightValueByIndex(a0, a1);
	}
	void reweightValueByName(std::string a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsBase *>(this), "reweightValueByName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::reweightValueByName(a0, a1);
	}
};

// Pythia8::WeightsShower file:Pythia8/Weights.h line:146
struct PyCallBack_Pythia8_WeightsShower : public Pythia8::WeightsShower {
	using Pythia8::WeightsShower::WeightsShower;

	void init(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsShower::init(a0);
	}
	void initWeightGroups(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "initWeightGroups");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsShower::initWeightGroups(a0);
	}
	int nWeightGroups() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "nWeightGroups");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return WeightsShower::nWeightGroups();
	}
	std::string getGroupName(int a0) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "getGroupName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<std::string>::value) {
				static pybind11::detail::override_caster_t<std::string> caster;
				return pybind11::detail::cast_ref<std::string>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<std::string>(std::move(o));
		}
		return WeightsShower::getGroupName(a0);
	}
	double getGroupWeight(int a0) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "getGroupWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return WeightsShower::getGroupWeight(a0);
	}
	void init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::init();
	}
	void clear() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "clear");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::clear();
	}
	void bookVectors(class std::vector<double> a0, class std::vector<std::string > a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "bookVectors");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::bookVectors(a0, a1);
	}
	void collectWeightValues(class std::vector<double> & a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "collectWeightValues");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::collectWeightValues(a0, a1);
	}
	void collectWeightNames(class std::vector<std::string > & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "collectWeightNames");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::collectWeightNames(a0);
	}
	double getWeightsValue(int a0) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "getWeightsValue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return WeightsBase::getWeightsValue(a0);
	}
	void reweightValueByIndex(int a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "reweightValueByIndex");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::reweightValueByIndex(a0, a1);
	}
	void reweightValueByName(std::string a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WeightsShower *>(this), "reweightValueByName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return WeightsBase::reweightValueByName(a0, a1);
	}
};

void bind_Pythia8_LHEF3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::Reader file:Pythia8/LHEF3.h line:832
		pybind11::class_<Pythia8::Reader, std::shared_ptr<Pythia8::Reader>> cl(M("Pythia8"), "Reader", "");
		cl.def( pybind11::init<std::string>(), pybind11::arg("filenameIn") );

		cl.def_readwrite("filename", &Pythia8::Reader::filename);
		cl.def_readwrite("currentLine", &Pythia8::Reader::currentLine);
		cl.def_readwrite("isGood", &Pythia8::Reader::isGood);
		cl.def_readwrite("readError", &Pythia8::Reader::readError);
		cl.def_readwrite("version", &Pythia8::Reader::version);
		cl.def_readwrite("outsideBlock", &Pythia8::Reader::outsideBlock);
		cl.def_readwrite("headerBlock", &Pythia8::Reader::headerBlock);
		cl.def_readwrite("headerComments", &Pythia8::Reader::headerComments);
		cl.def_readwrite("heprup", &Pythia8::Reader::heprup);
		cl.def_readwrite("initComments", &Pythia8::Reader::initComments);
		cl.def_readwrite("hepeup", &Pythia8::Reader::hepeup);
		cl.def_readwrite("eventComments", &Pythia8::Reader::eventComments);
		cl.def_readwrite("weights_detailed_vec", &Pythia8::Reader::weights_detailed_vec);
		cl.def_readwrite("weightnames_detailed_vec", &Pythia8::Reader::weightnames_detailed_vec);
		cl.def("setup", (bool (Pythia8::Reader::*)(std::string)) &Pythia8::Reader::setup, "C++: Pythia8::Reader::setup(std::string) --> bool", pybind11::arg("filenameIn"));
		cl.def("readEvent", [](Pythia8::Reader &o) -> bool { return o.readEvent(); }, "");
		cl.def("readEvent", (bool (Pythia8::Reader::*)(class Pythia8::HEPEUP *)) &Pythia8::Reader::readEvent, "C++: Pythia8::Reader::readEvent(class Pythia8::HEPEUP *) --> bool", pybind11::arg("peup"));
		cl.def("clearEvent", (void (Pythia8::Reader::*)()) &Pythia8::Reader::clearEvent, "C++: Pythia8::Reader::clearEvent() --> void");
		cl.def("getLine", (bool (Pythia8::Reader::*)()) &Pythia8::Reader::getLine, "C++: Pythia8::Reader::getLine() --> bool");
		cl.def("weights_detailed_vector", (class std::vector<double> (Pythia8::Reader::*)()) &Pythia8::Reader::weights_detailed_vector, "C++: Pythia8::Reader::weights_detailed_vector() --> class std::vector<double>");
		cl.def("weightnames_detailed_vector", (class std::vector<std::string > (Pythia8::Reader::*)()) &Pythia8::Reader::weightnames_detailed_vector, "C++: Pythia8::Reader::weightnames_detailed_vector() --> class std::vector<std::string >");
	}
	{ // Pythia8::Writer file:Pythia8/LHEF3.h line:1023
		pybind11::class_<Pythia8::Writer, std::shared_ptr<Pythia8::Writer>> cl(M("Pythia8"), "Writer", "");
		cl.def( pybind11::init<std::string>(), pybind11::arg("filename") );

		cl.def_readonly("intstream", &Pythia8::Writer::intstream);
		cl.def_readonly("headerStream", &Pythia8::Writer::headerStream);
		cl.def_readwrite("heprup", &Pythia8::Writer::heprup);
		cl.def_readonly("initStream", &Pythia8::Writer::initStream);
		cl.def_readwrite("hepeup", &Pythia8::Writer::hepeup);
		cl.def_readonly("eventStream", &Pythia8::Writer::eventStream);
		cl.def_readwrite("version", &Pythia8::Writer::version);
		cl.def("list_end_tag", (void (Pythia8::Writer::*)()) &Pythia8::Writer::list_end_tag, "C++: Pythia8::Writer::list_end_tag() --> void");
		cl.def("init", (void (Pythia8::Writer::*)()) &Pythia8::Writer::init, "C++: Pythia8::Writer::init() --> void");
		cl.def("writeEvent", [](Pythia8::Writer &o) -> bool { return o.writeEvent(); }, "");
		cl.def("writeEvent", [](Pythia8::Writer &o, class Pythia8::HEPEUP * a0) -> bool { return o.writeEvent(a0); }, "", pybind11::arg("peup"));
		cl.def("writeEvent", (bool (Pythia8::Writer::*)(class Pythia8::HEPEUP *, int)) &Pythia8::Writer::writeEvent, "C++: Pythia8::Writer::writeEvent(class Pythia8::HEPEUP *, int) --> bool", pybind11::arg("peup"), pybind11::arg("pDigits"));
		cl.def("getEventString", [](Pythia8::Writer &o) -> std::string { return o.getEventString(); }, "");
		cl.def("getEventString", (std::string (Pythia8::Writer::*)(class Pythia8::HEPEUP *)) &Pythia8::Writer::getEventString, "C++: Pythia8::Writer::getEventString(class Pythia8::HEPEUP *) --> std::string", pybind11::arg("peup"));
		cl.def("hashline", [](Pythia8::Writer &o, std::string const & a0) -> std::string { return o.hashline(a0); }, "", pybind11::arg("s"));
		cl.def("hashline", (std::string (Pythia8::Writer::*)(std::string, bool)) &Pythia8::Writer::hashline, "C++: Pythia8::Writer::hashline(std::string, bool) --> std::string", pybind11::arg("s"), pybind11::arg("comment"));
	}
	{ // Pythia8::Logger file:Pythia8/Logger.h line:23
		pybind11::class_<Pythia8::Logger, std::shared_ptr<Pythia8::Logger>> cl(M("Pythia8"), "Logger", "");
		cl.def( pybind11::init( [](){ return new Pythia8::Logger(); } ) );
		cl.def("init", (void (Pythia8::Logger::*)(class Pythia8::Settings &)) &Pythia8::Logger::init, "C++: Pythia8::Logger::init(class Pythia8::Settings &) --> void", pybind11::arg("settings"));
		cl.def("reportMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1) -> bool { return o.reportMsg(a0, a1); }, "", pybind11::arg("loc"), pybind11::arg("message"));
		cl.def("reportMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1, std::string const & a2) -> bool { return o.reportMsg(a0, a1, a2); }, "", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"));
		cl.def("reportMsg", (bool (Pythia8::Logger::*)(std::string, std::string, std::string, bool)) &Pythia8::Logger::reportMsg, "C++: Pythia8::Logger::reportMsg(std::string, std::string, std::string, bool) --> bool", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"), pybind11::arg("showAlways"));
		cl.def("infoMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1) -> bool { return o.infoMsg(a0, a1); }, "", pybind11::arg("loc"), pybind11::arg("message"));
		cl.def("infoMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1, std::string const & a2) -> bool { return o.infoMsg(a0, a1, a2); }, "", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"));
		cl.def("infoMsg", (bool (Pythia8::Logger::*)(std::string, std::string, std::string, bool)) &Pythia8::Logger::infoMsg, "C++: Pythia8::Logger::infoMsg(std::string, std::string, std::string, bool) --> bool", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"), pybind11::arg("showAlways"));
		cl.def("warningMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1) -> bool { return o.warningMsg(a0, a1); }, "", pybind11::arg("loc"), pybind11::arg("message"));
		cl.def("warningMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1, std::string const & a2) -> bool { return o.warningMsg(a0, a1, a2); }, "", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"));
		cl.def("warningMsg", (bool (Pythia8::Logger::*)(std::string, std::string, std::string, bool)) &Pythia8::Logger::warningMsg, "C++: Pythia8::Logger::warningMsg(std::string, std::string, std::string, bool) --> bool", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"), pybind11::arg("showAlways"));
		cl.def("errorMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1) -> bool { return o.errorMsg(a0, a1); }, "", pybind11::arg("loc"), pybind11::arg("message"));
		cl.def("errorMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1, std::string const & a2) -> bool { return o.errorMsg(a0, a1, a2); }, "", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"));
		cl.def("errorMsg", (bool (Pythia8::Logger::*)(std::string, std::string, std::string, bool)) &Pythia8::Logger::errorMsg, "C++: Pythia8::Logger::errorMsg(std::string, std::string, std::string, bool) --> bool", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"), pybind11::arg("showAlways"));
		cl.def("abortMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1) -> bool { return o.abortMsg(a0, a1); }, "", pybind11::arg("loc"), pybind11::arg("message"));
		cl.def("abortMsg", [](Pythia8::Logger &o, std::string const & a0, std::string const & a1, std::string const & a2) -> bool { return o.abortMsg(a0, a1, a2); }, "", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"));
		cl.def("abortMsg", (bool (Pythia8::Logger::*)(std::string, std::string, std::string, bool)) &Pythia8::Logger::abortMsg, "C++: Pythia8::Logger::abortMsg(std::string, std::string, std::string, bool) --> bool", pybind11::arg("loc"), pybind11::arg("message"), pybind11::arg("extraInfo"), pybind11::arg("showAlways"));
		cl.def("isQuiet", (bool (Pythia8::Logger::*)() const) &Pythia8::Logger::isQuiet, "C++: Pythia8::Logger::isQuiet() const --> bool");
		cl.def("mayPrintInit", (bool (Pythia8::Logger::*)() const) &Pythia8::Logger::mayPrintInit, "C++: Pythia8::Logger::mayPrintInit() const --> bool");
		cl.def("mayPrintNext", (bool (Pythia8::Logger::*)() const) &Pythia8::Logger::mayPrintNext, "C++: Pythia8::Logger::mayPrintNext() const --> bool");
		cl.def("mayPrintErrors", (bool (Pythia8::Logger::*)() const) &Pythia8::Logger::mayPrintErrors, "C++: Pythia8::Logger::mayPrintErrors() const --> bool");
		cl.def("setVerbosity", (void (Pythia8::Logger::*)(int)) &Pythia8::Logger::setVerbosity, "C++: Pythia8::Logger::setVerbosity(int) --> void", pybind11::arg("verbosityIn"));
		cl.def("getVerbosity", (int (Pythia8::Logger::*)() const) &Pythia8::Logger::getVerbosity, "C++: Pythia8::Logger::getVerbosity() const --> int");
		cl.def("doReport", (bool (Pythia8::Logger::*)()) &Pythia8::Logger::doReport, "C++: Pythia8::Logger::doReport() --> bool");
		cl.def("errorCombine", [](Pythia8::Logger &o, const class Pythia8::Logger & a0) -> void { return o.errorCombine(a0); }, "", pybind11::arg("other"));
		cl.def("errorCombine", (void (Pythia8::Logger::*)(const class Pythia8::Logger &, std::string)) &Pythia8::Logger::errorCombine, "C++: Pythia8::Logger::errorCombine(const class Pythia8::Logger &, std::string) --> void", pybind11::arg("other"), pybind11::arg("prefix"));
		cl.def("errorReset", (void (Pythia8::Logger::*)()) &Pythia8::Logger::errorReset, "C++: Pythia8::Logger::errorReset() --> void");
		cl.def("errorTotalNumber", (int (Pythia8::Logger::*)() const) &Pythia8::Logger::errorTotalNumber, "C++: Pythia8::Logger::errorTotalNumber() const --> int");
		cl.def("errorStatistics", (void (Pythia8::Logger::*)() const) &Pythia8::Logger::errorStatistics, "C++: Pythia8::Logger::errorStatistics() const --> void");
	}
	{ // Pythia8::WeightsBase file:Pythia8/Weights.h line:37
		pybind11::class_<Pythia8::WeightsBase, std::shared_ptr<Pythia8::WeightsBase>, PyCallBack_Pythia8_WeightsBase> cl(M("Pythia8"), "WeightsBase", "");
		cl.def( pybind11::init( [](PyCallBack_Pythia8_WeightsBase const &o){ return new PyCallBack_Pythia8_WeightsBase(o); } ) );
		cl.def( pybind11::init( [](Pythia8::WeightsBase const &o){ return new Pythia8::WeightsBase(o); } ) );
		cl.def( pybind11::init( [](){ return new Pythia8::WeightsBase(); }, [](){ return new PyCallBack_Pythia8_WeightsBase(); } ) );
		cl.def_readwrite("weightValues", &Pythia8::WeightsBase::weightValues);
		cl.def_readwrite("weightNames", &Pythia8::WeightsBase::weightNames);
		cl.def("init", (void (Pythia8::WeightsBase::*)()) &Pythia8::WeightsBase::init, "C++: Pythia8::WeightsBase::init() --> void");
		cl.def("init", (void (Pythia8::WeightsBase::*)(bool)) &Pythia8::WeightsBase::init, "C++: Pythia8::WeightsBase::init(bool) --> void", pybind11::arg(""));
		cl.def("clear", (void (Pythia8::WeightsBase::*)()) &Pythia8::WeightsBase::clear, "C++: Pythia8::WeightsBase::clear() --> void");
		cl.def("bookVectors", (void (Pythia8::WeightsBase::*)(class std::vector<double>, class std::vector<std::string >)) &Pythia8::WeightsBase::bookVectors, "C++: Pythia8::WeightsBase::bookVectors(class std::vector<double>, class std::vector<std::string >) --> void", pybind11::arg("weights"), pybind11::arg("names"));
		cl.def("collectWeightValues", [](Pythia8::WeightsBase &o, class std::vector<double> & a0) -> void { return o.collectWeightValues(a0); }, "", pybind11::arg("outputWeights"));
		cl.def("collectWeightValues", (void (Pythia8::WeightsBase::*)(class std::vector<double> &, double)) &Pythia8::WeightsBase::collectWeightValues, "C++: Pythia8::WeightsBase::collectWeightValues(class std::vector<double> &, double) --> void", pybind11::arg("outputWeights"), pybind11::arg("norm"));
		cl.def("collectWeightNames", (void (Pythia8::WeightsBase::*)(class std::vector<std::string > &)) &Pythia8::WeightsBase::collectWeightNames, "C++: Pythia8::WeightsBase::collectWeightNames(class std::vector<std::string > &) --> void", pybind11::arg("outputNames"));
		cl.def("getWeightsName", (std::string (Pythia8::WeightsBase::*)(int) const) &Pythia8::WeightsBase::getWeightsName, "C++: Pythia8::WeightsBase::getWeightsName(int) const --> std::string", pybind11::arg("iPos"));
		cl.def("getWeightsValue", (double (Pythia8::WeightsBase::*)(int) const) &Pythia8::WeightsBase::getWeightsValue, "C++: Pythia8::WeightsBase::getWeightsValue(int) const --> double", pybind11::arg("iPos"));
		cl.def("getWeightsSize", (int (Pythia8::WeightsBase::*)() const) &Pythia8::WeightsBase::getWeightsSize, "C++: Pythia8::WeightsBase::getWeightsSize() const --> int");
		cl.def("bookWeight", [](Pythia8::WeightsBase &o, std::string const & a0) -> void { return o.bookWeight(a0); }, "", pybind11::arg("name"));
		cl.def("bookWeight", (void (Pythia8::WeightsBase::*)(std::string, double)) &Pythia8::WeightsBase::bookWeight, "C++: Pythia8::WeightsBase::bookWeight(std::string, double) --> void", pybind11::arg("name"), pybind11::arg("defaultValue"));
		cl.def("setValueByIndex", (void (Pythia8::WeightsBase::*)(int, double)) &Pythia8::WeightsBase::setValueByIndex, "C++: Pythia8::WeightsBase::setValueByIndex(int, double) --> void", pybind11::arg("iPos"), pybind11::arg("val"));
		cl.def("setValueByName", (void (Pythia8::WeightsBase::*)(std::string, double)) &Pythia8::WeightsBase::setValueByName, "C++: Pythia8::WeightsBase::setValueByName(std::string, double) --> void", pybind11::arg("name"), pybind11::arg("val"));
		cl.def("reweightValueByIndex", (void (Pythia8::WeightsBase::*)(int, double)) &Pythia8::WeightsBase::reweightValueByIndex, "C++: Pythia8::WeightsBase::reweightValueByIndex(int, double) --> void", pybind11::arg("iPos"), pybind11::arg("val"));
		cl.def("reweightValueByName", (void (Pythia8::WeightsBase::*)(std::string, double)) &Pythia8::WeightsBase::reweightValueByName, "C++: Pythia8::WeightsBase::reweightValueByName(std::string, double) --> void", pybind11::arg("name"), pybind11::arg("val"));
		cl.def("findIndexOfName", (int (Pythia8::WeightsBase::*)(std::string)) &Pythia8::WeightsBase::findIndexOfName, "C++: Pythia8::WeightsBase::findIndexOfName(std::string) --> int", pybind11::arg("name"));
		cl.def("setPtrs", (void (Pythia8::WeightsBase::*)(class Pythia8::Info *)) &Pythia8::WeightsBase::setPtrs, "C++: Pythia8::WeightsBase::setPtrs(class Pythia8::Info *) --> void", pybind11::arg("infoPtrIn"));
		cl.def("parse", (void (Pythia8::WeightsBase::*)(std::string, class std::map<std::string, class std::map<std::string, double> > &)) &Pythia8::WeightsBase::parse, "C++: Pythia8::WeightsBase::parse(std::string, class std::map<std::string, class std::map<std::string, double> > &) --> void", pybind11::arg("wvecKey"), pybind11::arg("dct"));
		cl.def("assign", (class Pythia8::WeightsBase & (Pythia8::WeightsBase::*)(const class Pythia8::WeightsBase &)) &Pythia8::WeightsBase::operator=, "C++: Pythia8::WeightsBase::operator=(const class Pythia8::WeightsBase &) --> class Pythia8::WeightsBase &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::WeightsShower file:Pythia8/Weights.h line:146
		pybind11::class_<Pythia8::WeightsShower, std::shared_ptr<Pythia8::WeightsShower>, PyCallBack_Pythia8_WeightsShower, Pythia8::WeightsBase> cl(M("Pythia8"), "WeightsShower", "");
		cl.def( pybind11::init( [](PyCallBack_Pythia8_WeightsShower const &o){ return new PyCallBack_Pythia8_WeightsShower(o); } ) );
		cl.def( pybind11::init( [](Pythia8::WeightsShower const &o){ return new Pythia8::WeightsShower(o); } ) );
		cl.def( pybind11::init( [](){ return new Pythia8::WeightsShower(); }, [](){ return new PyCallBack_Pythia8_WeightsShower(); } ) );
		cl.def("init", (void (Pythia8::WeightsShower::*)(bool)) &Pythia8::WeightsShower::init, "C++: Pythia8::WeightsShower::init(bool) --> void", pybind11::arg(""));
		cl.def("initWeightGroups", [](Pythia8::WeightsShower &o) -> void { return o.initWeightGroups(); }, "");
		cl.def("initWeightGroups", (void (Pythia8::WeightsShower::*)(bool)) &Pythia8::WeightsShower::initWeightGroups, "C++: Pythia8::WeightsShower::initWeightGroups(bool) --> void", pybind11::arg(""));
		cl.def("nWeightGroups", (int (Pythia8::WeightsShower::*)() const) &Pythia8::WeightsShower::nWeightGroups, "C++: Pythia8::WeightsShower::nWeightGroups() const --> int");
		cl.def("getGroupName", (std::string (Pythia8::WeightsShower::*)(int) const) &Pythia8::WeightsShower::getGroupName, "C++: Pythia8::WeightsShower::getGroupName(int) const --> std::string", pybind11::arg(""));
		cl.def("getGroupWeight", (double (Pythia8::WeightsShower::*)(int) const) &Pythia8::WeightsShower::getGroupWeight, "C++: Pythia8::WeightsShower::getGroupWeight(int) const --> double", pybind11::arg(""));
		cl.def("assign", (class Pythia8::WeightsShower & (Pythia8::WeightsShower::*)(const class Pythia8::WeightsShower &)) &Pythia8::WeightsShower::operator=, "C++: Pythia8::WeightsShower::operator=(const class Pythia8::WeightsShower &) --> class Pythia8::WeightsShower &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}
