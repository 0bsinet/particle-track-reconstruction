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

// Pythia8::ResonanceGeneric file:Pythia8/ResonanceWidths.h line:152
struct PyCallBack_Pythia8_ResonanceGeneric : public Pythia8::ResonanceGeneric {
	using Pythia8::ResonanceGeneric::ResonanceGeneric;

	bool allowCalc() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "allowCalc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ResonanceGeneric::allowCalc();
	}
	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "initBSM");
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
	void calcPreFac(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGeneric *>(this), "calcWidth");
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

// Pythia8::ResonanceGmZ file:Pythia8/ResonanceWidths.h line:168
struct PyCallBack_Pythia8_ResonanceGmZ : public Pythia8::ResonanceGmZ {
	using Pythia8::ResonanceGmZ::ResonanceGmZ;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGmZ *>(this), "calcWidth");
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

// Pythia8::ResonanceW file:Pythia8/ResonanceWidths.h line:197
struct PyCallBack_Pythia8_ResonanceW : public Pythia8::ResonanceW {
	using Pythia8::ResonanceW::ResonanceW;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceW *>(this), "calcWidth");
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

// Pythia8::ResonanceTop file:Pythia8/ResonanceWidths.h line:224
struct PyCallBack_Pythia8_ResonanceTop : public Pythia8::ResonanceTop {
	using Pythia8::ResonanceTop::ResonanceTop;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceTop *>(this), "calcWidth");
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

// Pythia8::ResonanceFour file:Pythia8/ResonanceWidths.h line:252
struct PyCallBack_Pythia8_ResonanceFour : public Pythia8::ResonanceFour {
	using Pythia8::ResonanceFour::ResonanceFour;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceFour *>(this), "calcWidth");
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

// Pythia8::ResonanceH file:Pythia8/ResonanceWidths.h line:280
struct PyCallBack_Pythia8_ResonanceH : public Pythia8::ResonanceH {
	using Pythia8::ResonanceH::ResonanceH;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceH *>(this), "calcWidth");
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

// Pythia8::ResonanceHchg file:Pythia8/ResonanceWidths.h line:333
struct PyCallBack_Pythia8_ResonanceHchg : public Pythia8::ResonanceHchg {
	using Pythia8::ResonanceHchg::ResonanceHchg;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchg *>(this), "calcWidth");
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

// Pythia8::ResonanceZprime file:Pythia8/ResonanceWidths.h line:362
struct PyCallBack_Pythia8_ResonanceZprime : public Pythia8::ResonanceZprime {
	using Pythia8::ResonanceZprime::ResonanceZprime;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZprime *>(this), "calcWidth");
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

// Pythia8::ResonanceWprime file:Pythia8/ResonanceWidths.h line:395
struct PyCallBack_Pythia8_ResonanceWprime : public Pythia8::ResonanceWprime {
	using Pythia8::ResonanceWprime::ResonanceWprime;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWprime *>(this), "calcWidth");
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

// Pythia8::ResonanceRhorizontal file:Pythia8/ResonanceWidths.h line:423
struct PyCallBack_Pythia8_ResonanceRhorizontal : public Pythia8::ResonanceRhorizontal {
	using Pythia8::ResonanceRhorizontal::ResonanceRhorizontal;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceRhorizontal *>(this), "calcWidth");
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

// Pythia8::ResonanceExcited file:Pythia8/ResonanceWidths.h line:450
struct PyCallBack_Pythia8_ResonanceExcited : public Pythia8::ResonanceExcited {
	using Pythia8::ResonanceExcited::ResonanceExcited;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceExcited *>(this), "calcWidth");
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

// Pythia8::ResonanceGraviton file:Pythia8/ResonanceWidths.h line:478
struct PyCallBack_Pythia8_ResonanceGraviton : public Pythia8::ResonanceGraviton {
	using Pythia8::ResonanceGraviton::ResonanceGraviton;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceGraviton *>(this), "calcWidth");
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

// Pythia8::ResonanceKKgluon file:Pythia8/ResonanceWidths.h line:510
struct PyCallBack_Pythia8_ResonanceKKgluon : public Pythia8::ResonanceKKgluon {
	using Pythia8::ResonanceKKgluon::ResonanceKKgluon;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceKKgluon *>(this), "calcWidth");
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

// Pythia8::ResonanceLeptoquark file:Pythia8/ResonanceWidths.h line:546
struct PyCallBack_Pythia8_ResonanceLeptoquark : public Pythia8::ResonanceLeptoquark {
	using Pythia8::ResonanceLeptoquark::ResonanceLeptoquark;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceLeptoquark *>(this), "calcWidth");
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

// Pythia8::ResonanceNuRight file:Pythia8/ResonanceWidths.h line:573
struct PyCallBack_Pythia8_ResonanceNuRight : public Pythia8::ResonanceNuRight {
	using Pythia8::ResonanceNuRight::ResonanceNuRight;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceNuRight *>(this), "calcWidth");
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

// Pythia8::ResonanceZRight file:Pythia8/ResonanceWidths.h line:600
struct PyCallBack_Pythia8_ResonanceZRight : public Pythia8::ResonanceZRight {
	using Pythia8::ResonanceZRight::ResonanceZRight;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceZRight *>(this), "calcWidth");
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

// Pythia8::ResonanceWRight file:Pythia8/ResonanceWidths.h line:627
struct PyCallBack_Pythia8_ResonanceWRight : public Pythia8::ResonanceWRight {
	using Pythia8::ResonanceWRight::ResonanceWRight;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceWRight *>(this), "calcWidth");
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

// Pythia8::ResonanceHchgchgLeft file:Pythia8/ResonanceWidths.h line:654
struct PyCallBack_Pythia8_ResonanceHchgchgLeft : public Pythia8::ResonanceHchgchgLeft {
	using Pythia8::ResonanceHchgchgLeft::ResonanceHchgchgLeft;

	bool init(class Pythia8::Info * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "init");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "initConstants");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "initBSM");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "allowCalc");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "calcPreFac");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ResonanceHchgchgLeft *>(this), "calcWidth");
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

void bind_Pythia8_ResonanceWidths(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::ResonanceGeneric file:Pythia8/ResonanceWidths.h line:152
		pybind11::class_<Pythia8::ResonanceGeneric, std::shared_ptr<Pythia8::ResonanceGeneric>, PyCallBack_Pythia8_ResonanceGeneric, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceGeneric", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceGeneric const &o){ return new PyCallBack_Pythia8_ResonanceGeneric(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceGeneric const &o){ return new Pythia8::ResonanceGeneric(o); } ) );
		cl.def("allowCalc", (bool (Pythia8::ResonanceGeneric::*)()) &Pythia8::ResonanceGeneric::allowCalc, "C++: Pythia8::ResonanceGeneric::allowCalc() --> bool");
		cl.def("assign", (class Pythia8::ResonanceGeneric & (Pythia8::ResonanceGeneric::*)(const class Pythia8::ResonanceGeneric &)) &Pythia8::ResonanceGeneric::operator=, "C++: Pythia8::ResonanceGeneric::operator=(const class Pythia8::ResonanceGeneric &) --> class Pythia8::ResonanceGeneric &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceGmZ file:Pythia8/ResonanceWidths.h line:168
		pybind11::class_<Pythia8::ResonanceGmZ, std::shared_ptr<Pythia8::ResonanceGmZ>, PyCallBack_Pythia8_ResonanceGmZ, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceGmZ", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceGmZ const &o){ return new PyCallBack_Pythia8_ResonanceGmZ(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceGmZ const &o){ return new Pythia8::ResonanceGmZ(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceGmZ & (Pythia8::ResonanceGmZ::*)(const class Pythia8::ResonanceGmZ &)) &Pythia8::ResonanceGmZ::operator=, "C++: Pythia8::ResonanceGmZ::operator=(const class Pythia8::ResonanceGmZ &) --> class Pythia8::ResonanceGmZ &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceW file:Pythia8/ResonanceWidths.h line:197
		pybind11::class_<Pythia8::ResonanceW, std::shared_ptr<Pythia8::ResonanceW>, PyCallBack_Pythia8_ResonanceW, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceW", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceW const &o){ return new PyCallBack_Pythia8_ResonanceW(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceW const &o){ return new Pythia8::ResonanceW(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceW & (Pythia8::ResonanceW::*)(const class Pythia8::ResonanceW &)) &Pythia8::ResonanceW::operator=, "C++: Pythia8::ResonanceW::operator=(const class Pythia8::ResonanceW &) --> class Pythia8::ResonanceW &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceTop file:Pythia8/ResonanceWidths.h line:224
		pybind11::class_<Pythia8::ResonanceTop, std::shared_ptr<Pythia8::ResonanceTop>, PyCallBack_Pythia8_ResonanceTop, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceTop", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceTop const &o){ return new PyCallBack_Pythia8_ResonanceTop(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceTop const &o){ return new Pythia8::ResonanceTop(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceTop & (Pythia8::ResonanceTop::*)(const class Pythia8::ResonanceTop &)) &Pythia8::ResonanceTop::operator=, "C++: Pythia8::ResonanceTop::operator=(const class Pythia8::ResonanceTop &) --> class Pythia8::ResonanceTop &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceFour file:Pythia8/ResonanceWidths.h line:252
		pybind11::class_<Pythia8::ResonanceFour, std::shared_ptr<Pythia8::ResonanceFour>, PyCallBack_Pythia8_ResonanceFour, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceFour", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceFour const &o){ return new PyCallBack_Pythia8_ResonanceFour(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceFour const &o){ return new Pythia8::ResonanceFour(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceFour & (Pythia8::ResonanceFour::*)(const class Pythia8::ResonanceFour &)) &Pythia8::ResonanceFour::operator=, "C++: Pythia8::ResonanceFour::operator=(const class Pythia8::ResonanceFour &) --> class Pythia8::ResonanceFour &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceH file:Pythia8/ResonanceWidths.h line:280
		pybind11::class_<Pythia8::ResonanceH, std::shared_ptr<Pythia8::ResonanceH>, PyCallBack_Pythia8_ResonanceH, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceH", "");
		cl.def( pybind11::init<int, int>(), pybind11::arg("higgsTypeIn"), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceH const &o){ return new PyCallBack_Pythia8_ResonanceH(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceH const &o){ return new Pythia8::ResonanceH(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceH & (Pythia8::ResonanceH::*)(const class Pythia8::ResonanceH &)) &Pythia8::ResonanceH::operator=, "C++: Pythia8::ResonanceH::operator=(const class Pythia8::ResonanceH &) --> class Pythia8::ResonanceH &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceHchg file:Pythia8/ResonanceWidths.h line:333
		pybind11::class_<Pythia8::ResonanceHchg, std::shared_ptr<Pythia8::ResonanceHchg>, PyCallBack_Pythia8_ResonanceHchg, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceHchg", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceHchg const &o){ return new PyCallBack_Pythia8_ResonanceHchg(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceHchg const &o){ return new Pythia8::ResonanceHchg(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceHchg & (Pythia8::ResonanceHchg::*)(const class Pythia8::ResonanceHchg &)) &Pythia8::ResonanceHchg::operator=, "C++: Pythia8::ResonanceHchg::operator=(const class Pythia8::ResonanceHchg &) --> class Pythia8::ResonanceHchg &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceZprime file:Pythia8/ResonanceWidths.h line:362
		pybind11::class_<Pythia8::ResonanceZprime, std::shared_ptr<Pythia8::ResonanceZprime>, PyCallBack_Pythia8_ResonanceZprime, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceZprime", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceZprime const &o){ return new PyCallBack_Pythia8_ResonanceZprime(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceZprime const &o){ return new Pythia8::ResonanceZprime(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceZprime & (Pythia8::ResonanceZprime::*)(const class Pythia8::ResonanceZprime &)) &Pythia8::ResonanceZprime::operator=, "C++: Pythia8::ResonanceZprime::operator=(const class Pythia8::ResonanceZprime &) --> class Pythia8::ResonanceZprime &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceWprime file:Pythia8/ResonanceWidths.h line:395
		pybind11::class_<Pythia8::ResonanceWprime, std::shared_ptr<Pythia8::ResonanceWprime>, PyCallBack_Pythia8_ResonanceWprime, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceWprime", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceWprime const &o){ return new PyCallBack_Pythia8_ResonanceWprime(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceWprime const &o){ return new Pythia8::ResonanceWprime(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceWprime & (Pythia8::ResonanceWprime::*)(const class Pythia8::ResonanceWprime &)) &Pythia8::ResonanceWprime::operator=, "C++: Pythia8::ResonanceWprime::operator=(const class Pythia8::ResonanceWprime &) --> class Pythia8::ResonanceWprime &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceRhorizontal file:Pythia8/ResonanceWidths.h line:423
		pybind11::class_<Pythia8::ResonanceRhorizontal, std::shared_ptr<Pythia8::ResonanceRhorizontal>, PyCallBack_Pythia8_ResonanceRhorizontal, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceRhorizontal", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceRhorizontal const &o){ return new PyCallBack_Pythia8_ResonanceRhorizontal(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceRhorizontal const &o){ return new Pythia8::ResonanceRhorizontal(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceRhorizontal & (Pythia8::ResonanceRhorizontal::*)(const class Pythia8::ResonanceRhorizontal &)) &Pythia8::ResonanceRhorizontal::operator=, "C++: Pythia8::ResonanceRhorizontal::operator=(const class Pythia8::ResonanceRhorizontal &) --> class Pythia8::ResonanceRhorizontal &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceExcited file:Pythia8/ResonanceWidths.h line:450
		pybind11::class_<Pythia8::ResonanceExcited, std::shared_ptr<Pythia8::ResonanceExcited>, PyCallBack_Pythia8_ResonanceExcited, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceExcited", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceExcited const &o){ return new PyCallBack_Pythia8_ResonanceExcited(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceExcited const &o){ return new Pythia8::ResonanceExcited(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceExcited & (Pythia8::ResonanceExcited::*)(const class Pythia8::ResonanceExcited &)) &Pythia8::ResonanceExcited::operator=, "C++: Pythia8::ResonanceExcited::operator=(const class Pythia8::ResonanceExcited &) --> class Pythia8::ResonanceExcited &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceGraviton file:Pythia8/ResonanceWidths.h line:478
		pybind11::class_<Pythia8::ResonanceGraviton, std::shared_ptr<Pythia8::ResonanceGraviton>, PyCallBack_Pythia8_ResonanceGraviton, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceGraviton", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceGraviton const &o){ return new PyCallBack_Pythia8_ResonanceGraviton(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceGraviton const &o){ return new Pythia8::ResonanceGraviton(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceGraviton & (Pythia8::ResonanceGraviton::*)(const class Pythia8::ResonanceGraviton &)) &Pythia8::ResonanceGraviton::operator=, "C++: Pythia8::ResonanceGraviton::operator=(const class Pythia8::ResonanceGraviton &) --> class Pythia8::ResonanceGraviton &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceKKgluon file:Pythia8/ResonanceWidths.h line:510
		pybind11::class_<Pythia8::ResonanceKKgluon, std::shared_ptr<Pythia8::ResonanceKKgluon>, PyCallBack_Pythia8_ResonanceKKgluon, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceKKgluon", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceKKgluon const &o){ return new PyCallBack_Pythia8_ResonanceKKgluon(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceKKgluon const &o){ return new Pythia8::ResonanceKKgluon(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceKKgluon & (Pythia8::ResonanceKKgluon::*)(const class Pythia8::ResonanceKKgluon &)) &Pythia8::ResonanceKKgluon::operator=, "C++: Pythia8::ResonanceKKgluon::operator=(const class Pythia8::ResonanceKKgluon &) --> class Pythia8::ResonanceKKgluon &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceLeptoquark file:Pythia8/ResonanceWidths.h line:546
		pybind11::class_<Pythia8::ResonanceLeptoquark, std::shared_ptr<Pythia8::ResonanceLeptoquark>, PyCallBack_Pythia8_ResonanceLeptoquark, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceLeptoquark", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceLeptoquark const &o){ return new PyCallBack_Pythia8_ResonanceLeptoquark(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceLeptoquark const &o){ return new Pythia8::ResonanceLeptoquark(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceLeptoquark & (Pythia8::ResonanceLeptoquark::*)(const class Pythia8::ResonanceLeptoquark &)) &Pythia8::ResonanceLeptoquark::operator=, "C++: Pythia8::ResonanceLeptoquark::operator=(const class Pythia8::ResonanceLeptoquark &) --> class Pythia8::ResonanceLeptoquark &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceNuRight file:Pythia8/ResonanceWidths.h line:573
		pybind11::class_<Pythia8::ResonanceNuRight, std::shared_ptr<Pythia8::ResonanceNuRight>, PyCallBack_Pythia8_ResonanceNuRight, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceNuRight", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceNuRight const &o){ return new PyCallBack_Pythia8_ResonanceNuRight(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceNuRight const &o){ return new Pythia8::ResonanceNuRight(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceNuRight & (Pythia8::ResonanceNuRight::*)(const class Pythia8::ResonanceNuRight &)) &Pythia8::ResonanceNuRight::operator=, "C++: Pythia8::ResonanceNuRight::operator=(const class Pythia8::ResonanceNuRight &) --> class Pythia8::ResonanceNuRight &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceZRight file:Pythia8/ResonanceWidths.h line:600
		pybind11::class_<Pythia8::ResonanceZRight, std::shared_ptr<Pythia8::ResonanceZRight>, PyCallBack_Pythia8_ResonanceZRight, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceZRight", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceZRight const &o){ return new PyCallBack_Pythia8_ResonanceZRight(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceZRight const &o){ return new Pythia8::ResonanceZRight(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceZRight & (Pythia8::ResonanceZRight::*)(const class Pythia8::ResonanceZRight &)) &Pythia8::ResonanceZRight::operator=, "C++: Pythia8::ResonanceZRight::operator=(const class Pythia8::ResonanceZRight &) --> class Pythia8::ResonanceZRight &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceWRight file:Pythia8/ResonanceWidths.h line:627
		pybind11::class_<Pythia8::ResonanceWRight, std::shared_ptr<Pythia8::ResonanceWRight>, PyCallBack_Pythia8_ResonanceWRight, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceWRight", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceWRight const &o){ return new PyCallBack_Pythia8_ResonanceWRight(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceWRight const &o){ return new Pythia8::ResonanceWRight(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceWRight & (Pythia8::ResonanceWRight::*)(const class Pythia8::ResonanceWRight &)) &Pythia8::ResonanceWRight::operator=, "C++: Pythia8::ResonanceWRight::operator=(const class Pythia8::ResonanceWRight &) --> class Pythia8::ResonanceWRight &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ResonanceHchgchgLeft file:Pythia8/ResonanceWidths.h line:654
		pybind11::class_<Pythia8::ResonanceHchgchgLeft, std::shared_ptr<Pythia8::ResonanceHchgchgLeft>, PyCallBack_Pythia8_ResonanceHchgchgLeft, Pythia8::ResonanceWidths> cl(M("Pythia8"), "ResonanceHchgchgLeft", "");
		cl.def( pybind11::init<int>(), pybind11::arg("idResIn") );

		cl.def( pybind11::init( [](PyCallBack_Pythia8_ResonanceHchgchgLeft const &o){ return new PyCallBack_Pythia8_ResonanceHchgchgLeft(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ResonanceHchgchgLeft const &o){ return new Pythia8::ResonanceHchgchgLeft(o); } ) );
		cl.def("assign", (class Pythia8::ResonanceHchgchgLeft & (Pythia8::ResonanceHchgchgLeft::*)(const class Pythia8::ResonanceHchgchgLeft &)) &Pythia8::ResonanceHchgchgLeft::operator=, "C++: Pythia8::ResonanceHchgchgLeft::operator=(const class Pythia8::ResonanceHchgchgLeft &) --> class Pythia8::ResonanceHchgchgLeft &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}
