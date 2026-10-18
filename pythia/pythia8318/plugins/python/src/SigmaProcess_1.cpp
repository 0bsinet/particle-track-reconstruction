#include <Pythia8/Basics.h>
#include <Pythia8/BeamParticle.h>
#include <Pythia8/BeamSetup.h>
#include <Pythia8/BeamShape.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/FragmentationModel.h>
#include <Pythia8/FragmentationSystems.h>
#include <Pythia8/GammaKinematics.h>
#include <Pythia8/HIInfo.h>
#include <Pythia8/HadronLevel.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/HeavyIons.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/LesHouches.h>
#include <Pythia8/Logger.h>
#include <Pythia8/Merging.h>
#include <Pythia8/MergingHooks.h>
#include <Pythia8/NucleonExcitations.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/ParticleDecays.h>
#include <Pythia8/PartonDistributions.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/PartonVertex.h>
#include <Pythia8/PhaseSpace.h>
#include <Pythia8/PhysicsBase.h>
#include <Pythia8/Pythia.h>
#include <Pythia8/RHadrons.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/SLHAinterface.h>
#include <Pythia8/Settings.h>
#include <Pythia8/ShowerModel.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaProcess.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/StringFragmentation.h>
#include <Pythia8/StringInteractions.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/TimeShower.h>
#include <Pythia8/UserHooks.h>
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

// Pythia8::UserHooks file:Pythia8/UserHooks.h line:32
struct PyCallBack_Pythia8_UserHooks : public Pythia8::UserHooks {
	using Pythia8::UserHooks::UserHooks;

	bool initAfterBeams() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "initAfterBeams");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::initAfterBeams();
	}
	bool canModifySigma() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canModifySigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canModifySigma();
	}
	double multiplySigmaBy(const class Pythia8::SigmaProcess * a0, const class Pythia8::PhaseSpace * a1, bool a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "multiplySigmaBy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::multiplySigmaBy(a0, a1, a2);
	}
	bool canBiasSelection() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canBiasSelection");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canBiasSelection();
	}
	double biasSelectionBy(const class Pythia8::SigmaProcess * a0, const class Pythia8::PhaseSpace * a1, bool a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "biasSelectionBy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::biasSelectionBy(a0, a1, a2);
	}
	double biasedSelectionWeight() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "biasedSelectionWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::biasedSelectionWeight();
	}
	bool canVetoProcessLevel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoProcessLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoProcessLevel();
	}
	bool doVetoProcessLevel(class Pythia8::Event & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoProcessLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoProcessLevel(a0);
	}
	bool canSetLowEnergySigma(int a0, int a1) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canSetLowEnergySigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetLowEnergySigma(a0, a1);
	}
	double doSetLowEnergySigma(int a0, int a1, double a2, double a3, double a4) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doSetLowEnergySigma");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::doSetLowEnergySigma(a0, a1, a2, a3, a4);
	}
	bool canVetoResonanceDecays() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoResonanceDecays");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoResonanceDecays();
	}
	bool doVetoResonanceDecays(class Pythia8::Event & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoResonanceDecays");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoResonanceDecays(a0);
	}
	bool canVetoPT() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPT();
	}
	double scaleVetoPT() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "scaleVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::scaleVetoPT();
	}
	bool doVetoPT(int a0, const class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoPT");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPT(a0, a1);
	}
	bool canVetoStep() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoStep();
	}
	int numberVetoStep() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "numberVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return UserHooks::numberVetoStep();
	}
	bool doVetoStep(int a0, int a1, int a2, const class Pythia8::Event & a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoStep(a0, a1, a2, a3);
	}
	bool canVetoMPIStep() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoMPIStep();
	}
	int numberVetoMPIStep() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "numberVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return UserHooks::numberVetoMPIStep();
	}
	bool doVetoMPIStep(int a0, const class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoMPIStep");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoMPIStep(a0, a1);
	}
	bool canVetoPartonLevelEarly() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoPartonLevelEarly");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPartonLevelEarly();
	}
	bool doVetoPartonLevelEarly(const class Pythia8::Event & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoPartonLevelEarly");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPartonLevelEarly(a0);
	}
	bool retryPartonLevel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "retryPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::retryPartonLevel();
	}
	bool canVetoPartonLevel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoPartonLevel();
	}
	bool doVetoPartonLevel(const class Pythia8::Event & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoPartonLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoPartonLevel(a0);
	}
	bool canSetResonanceScale() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canSetResonanceScale");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetResonanceScale();
	}
	double scaleResonance(int a0, const class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "scaleResonance");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::scaleResonance(a0, a1);
	}
	bool canVetoISREmission() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoISREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoISREmission();
	}
	bool doVetoISREmission(int a0, const class Pythia8::Event & a1, int a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoISREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoISREmission(a0, a1, a2);
	}
	bool canVetoFSREmission() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoFSREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoFSREmission();
	}
	bool doVetoFSREmission(int a0, const class Pythia8::Event & a1, int a2, bool a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoFSREmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFSREmission(a0, a1, a2, a3);
	}
	bool canVetoMPIEmission() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoMPIEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoMPIEmission();
	}
	bool doVetoMPIEmission(int a0, const class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoMPIEmission");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoMPIEmission(a0, a1);
	}
	bool canReconnectResonanceSystems() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canReconnectResonanceSystems");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canReconnectResonanceSystems();
	}
	bool doReconnectResonanceSystems(int a0, class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doReconnectResonanceSystems");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doReconnectResonanceSystems(a0, a1);
	}
	bool canChangeFragPar() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canChangeFragPar");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canChangeFragPar();
	}
	void setStringEnds(const class Pythia8::StringEnd * a0, const class Pythia8::StringEnd * a1, class std::vector<int> a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "setStringEnds");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return UserHooks::setStringEnds(a0, a1, a2);
	}
	bool doChangeFragPar(class Pythia8::StringFlav * a0, class Pythia8::StringZ * a1, class Pythia8::StringPT * a2, int a3, double a4, class std::vector<int> a5, const class Pythia8::StringEnd * a6) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doChangeFragPar");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5, a6);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doChangeFragPar(a0, a1, a2, a3, a4, a5, a6);
	}
	bool canVetoFragmentation() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoFragmentation");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoFragmentation();
	}
	bool doVetoFragmentation(class Pythia8::Particle a0, const class Pythia8::StringEnd * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoFragmentation");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFragmentation(a0, a1);
	}
	bool doVetoFragmentation(class Pythia8::Particle a0, class Pythia8::Particle a1, const class Pythia8::StringEnd * a2, const class Pythia8::StringEnd * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoFragmentation");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFragmentation(a0, a1, a2, a3);
	}
	bool doVetoFinalTwo(class Pythia8::Particle a0, class Pythia8::Particle a1, const class Pythia8::StringEnd * a2, const class Pythia8::StringEnd * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoFinalTwo");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoFinalTwo(a0, a1, a2, a3);
	}
	bool canVetoAfterHadronization() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canVetoAfterHadronization");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canVetoAfterHadronization();
	}
	bool doVetoAfterHadronization(const class Pythia8::Event & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doVetoAfterHadronization");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::doVetoAfterHadronization(a0);
	}
	bool canSetImpactParameter() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canSetImpactParameter");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetImpactParameter();
	}
	double doSetImpactParameter() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doSetImpactParameter");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::doSetImpactParameter();
	}
	bool canSetEnhanceB() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "canSetEnhanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::canSetEnhanceB();
	}
	double doSetEnhanceB() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "doSetEnhanceB");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return UserHooks::doSetEnhanceB();
	}
	bool onEndHadronLevel(class Pythia8::HadronLevel & a0, class Pythia8::Event & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onEndHadronLevel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return UserHooks::onEndHadronLevel(a0, a1);
	}
	void onInitInfoPtr() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return UserHooks::onInitInfoPtr();
	}
	void onBeginEvent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onBeginEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onBeginEvent();
	}
	void onEndEvent(enum Pythia8::PhysicsBase::Status a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onEndEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onEndEvent(a0);
	}
	void onStat() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onStat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onStat();
	}
	void onStat(class std::vector<class Pythia8::PhysicsBase *> a0, class Pythia8::Pythia * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::UserHooks *>(this), "onStat");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onStat(a0, a1);
	}
};

void bind_Pythia8_SigmaProcess_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::TopThreshold file:Pythia8/SigmaProcess.h line:645
		pybind11::class_<Pythia8::TopThreshold, std::shared_ptr<Pythia8::TopThreshold>> cl(M("Pythia8"), "TopThreshold", "");
		cl.def( pybind11::init( [](){ return new Pythia8::TopThreshold(); } ) );
		cl.def( pybind11::init( [](Pythia8::TopThreshold const &o){ return new Pythia8::TopThreshold(o); } ) );
		cl.def("setup", (void (Pythia8::TopThreshold::*)(int, double, double, double, double, double, int, double, int, class Pythia8::Info *)) &Pythia8::TopThreshold::setup, "C++: Pythia8::TopThreshold::setup(int, double, double, double, double, double, int, double, int, class Pythia8::Info *) --> void", pybind11::arg("topModelIn"), pybind11::arg("mtIn"), pybind11::arg("gammatIn"), pybind11::arg("gammatGreenIn"), pybind11::arg("thrRegionIn"), pybind11::arg("singletFracIn"), pybind11::arg("alphasOrder"), pybind11::arg("alphasValue"), pybind11::arg("nTermsIn"), pybind11::arg("infoPtrIn"));
		cl.def("multiplySigmaBy", (double (Pythia8::TopThreshold::*)(double, double, double)) &Pythia8::TopThreshold::multiplySigmaBy, "C++: Pythia8::TopThreshold::multiplySigmaBy(double, double, double) --> double", pybind11::arg("mHat"), pybind11::arg("m3"), pybind11::arg("m4"));
		cl.def("imGreenSin", (double (Pythia8::TopThreshold::*)(double, double)) &Pythia8::TopThreshold::imGreenSin, "C++: Pythia8::TopThreshold::imGreenSin(double, double) --> double", pybind11::arg("eNow"), pybind11::arg("mtNow"));
		cl.def("imGreenOct", (double (Pythia8::TopThreshold::*)(double, double)) &Pythia8::TopThreshold::imGreenOct, "C++: Pythia8::TopThreshold::imGreenOct(double, double) --> double", pybind11::arg("eNow"), pybind11::arg("mtNow"));
		cl.def("weightTopDecay", (double (Pythia8::TopThreshold::*)(class Pythia8::Event &)) &Pythia8::TopThreshold::weightTopDecay, "C++: Pythia8::TopThreshold::weightTopDecay(class Pythia8::Event &) --> double", pybind11::arg("process"));
		cl.def("matrixElementP2bbveevmumu", (double (Pythia8::TopThreshold::*)(const class Pythia8::Event &, int, int, int, int, int, int)) &Pythia8::TopThreshold::matrixElementP2bbveevmumu, "C++: Pythia8::TopThreshold::matrixElementP2bbveevmumu(const class Pythia8::Event &, int, int, int, int, int, int) --> double", pybind11::arg("work"), pybind11::arg("ib"), pybind11::arg("ibb"), pybind11::arg("ive"), pybind11::arg("ie"), pybind11::arg("ivm"), pybind11::arg("im"));
	}
	{ // Pythia8::UserHooks file:Pythia8/UserHooks.h line:32
		pybind11::class_<Pythia8::UserHooks, std::shared_ptr<Pythia8::UserHooks>, PyCallBack_Pythia8_UserHooks, Pythia8::PhysicsBase> cl(M("Pythia8"), "UserHooks", "");
		cl.def( pybind11::init( [](){ return new Pythia8::UserHooks(); }, [](){ return new PyCallBack_Pythia8_UserHooks(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_UserHooks const &o){ return new PyCallBack_Pythia8_UserHooks(o); } ) );
		cl.def( pybind11::init( [](Pythia8::UserHooks const &o){ return new Pythia8::UserHooks(o); } ) );
		cl.def_readwrite("workEvent", &Pythia8::UserHooks::workEvent);
		cl.def_readwrite("selBias", &Pythia8::UserHooks::selBias);
		cl.def_readwrite("enhancedEventWeight", &Pythia8::UserHooks::enhancedEventWeight);
		cl.def_readwrite("pTEnhanced", &Pythia8::UserHooks::pTEnhanced);
		cl.def_readwrite("wtEnhanced", &Pythia8::UserHooks::wtEnhanced);
		cl.def("initAfterBeams", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::initAfterBeams, "C++: Pythia8::UserHooks::initAfterBeams() --> bool");
		cl.def("canModifySigma", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canModifySigma, "C++: Pythia8::UserHooks::canModifySigma() --> bool");
		cl.def("multiplySigmaBy", (double (Pythia8::UserHooks::*)(const class Pythia8::SigmaProcess *, const class Pythia8::PhaseSpace *, bool)) &Pythia8::UserHooks::multiplySigmaBy, "C++: Pythia8::UserHooks::multiplySigmaBy(const class Pythia8::SigmaProcess *, const class Pythia8::PhaseSpace *, bool) --> double", pybind11::arg("sigmaProcessPtr"), pybind11::arg("phaseSpacePtr"), pybind11::arg("inEvent"));
		cl.def("canBiasSelection", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canBiasSelection, "C++: Pythia8::UserHooks::canBiasSelection() --> bool");
		cl.def("biasSelectionBy", (double (Pythia8::UserHooks::*)(const class Pythia8::SigmaProcess *, const class Pythia8::PhaseSpace *, bool)) &Pythia8::UserHooks::biasSelectionBy, "C++: Pythia8::UserHooks::biasSelectionBy(const class Pythia8::SigmaProcess *, const class Pythia8::PhaseSpace *, bool) --> double", pybind11::arg("sigmaProcessPtr"), pybind11::arg("phaseSpacePtr"), pybind11::arg("inEvent"));
		cl.def("biasedSelectionWeight", (double (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::biasedSelectionWeight, "C++: Pythia8::UserHooks::biasedSelectionWeight() --> double");
		cl.def("canVetoProcessLevel", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoProcessLevel, "C++: Pythia8::UserHooks::canVetoProcessLevel() --> bool");
		cl.def("doVetoProcessLevel", (bool (Pythia8::UserHooks::*)(class Pythia8::Event &)) &Pythia8::UserHooks::doVetoProcessLevel, "C++: Pythia8::UserHooks::doVetoProcessLevel(class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("canSetLowEnergySigma", (bool (Pythia8::UserHooks::*)(int, int) const) &Pythia8::UserHooks::canSetLowEnergySigma, "C++: Pythia8::UserHooks::canSetLowEnergySigma(int, int) const --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("doSetLowEnergySigma", (double (Pythia8::UserHooks::*)(int, int, double, double, double) const) &Pythia8::UserHooks::doSetLowEnergySigma, "C++: Pythia8::UserHooks::doSetLowEnergySigma(int, int, double, double, double) const --> double", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoResonanceDecays", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoResonanceDecays, "C++: Pythia8::UserHooks::canVetoResonanceDecays() --> bool");
		cl.def("doVetoResonanceDecays", (bool (Pythia8::UserHooks::*)(class Pythia8::Event &)) &Pythia8::UserHooks::doVetoResonanceDecays, "C++: Pythia8::UserHooks::doVetoResonanceDecays(class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("canVetoPT", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoPT, "C++: Pythia8::UserHooks::canVetoPT() --> bool");
		cl.def("scaleVetoPT", (double (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::scaleVetoPT, "C++: Pythia8::UserHooks::scaleVetoPT() --> double");
		cl.def("doVetoPT", (bool (Pythia8::UserHooks::*)(int, const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoPT, "C++: Pythia8::UserHooks::doVetoPT(int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoStep", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoStep, "C++: Pythia8::UserHooks::canVetoStep() --> bool");
		cl.def("numberVetoStep", (int (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::numberVetoStep, "C++: Pythia8::UserHooks::numberVetoStep() --> int");
		cl.def("doVetoStep", (bool (Pythia8::UserHooks::*)(int, int, int, const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoStep, "C++: Pythia8::UserHooks::doVetoStep(int, int, int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoMPIStep", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoMPIStep, "C++: Pythia8::UserHooks::canVetoMPIStep() --> bool");
		cl.def("numberVetoMPIStep", (int (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::numberVetoMPIStep, "C++: Pythia8::UserHooks::numberVetoMPIStep() --> int");
		cl.def("doVetoMPIStep", (bool (Pythia8::UserHooks::*)(int, const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoMPIStep, "C++: Pythia8::UserHooks::doVetoMPIStep(int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoPartonLevelEarly", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoPartonLevelEarly, "C++: Pythia8::UserHooks::canVetoPartonLevelEarly() --> bool");
		cl.def("doVetoPartonLevelEarly", (bool (Pythia8::UserHooks::*)(const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoPartonLevelEarly, "C++: Pythia8::UserHooks::doVetoPartonLevelEarly(const class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("retryPartonLevel", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::retryPartonLevel, "C++: Pythia8::UserHooks::retryPartonLevel() --> bool");
		cl.def("canVetoPartonLevel", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoPartonLevel, "C++: Pythia8::UserHooks::canVetoPartonLevel() --> bool");
		cl.def("doVetoPartonLevel", (bool (Pythia8::UserHooks::*)(const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoPartonLevel, "C++: Pythia8::UserHooks::doVetoPartonLevel(const class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("canSetResonanceScale", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canSetResonanceScale, "C++: Pythia8::UserHooks::canSetResonanceScale() --> bool");
		cl.def("scaleResonance", (double (Pythia8::UserHooks::*)(int, const class Pythia8::Event &)) &Pythia8::UserHooks::scaleResonance, "C++: Pythia8::UserHooks::scaleResonance(int, const class Pythia8::Event &) --> double", pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoISREmission", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoISREmission, "C++: Pythia8::UserHooks::canVetoISREmission() --> bool");
		cl.def("doVetoISREmission", (bool (Pythia8::UserHooks::*)(int, const class Pythia8::Event &, int)) &Pythia8::UserHooks::doVetoISREmission, "C++: Pythia8::UserHooks::doVetoISREmission(int, const class Pythia8::Event &, int) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoFSREmission", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoFSREmission, "C++: Pythia8::UserHooks::canVetoFSREmission() --> bool");
		cl.def("doVetoFSREmission", [](Pythia8::UserHooks &o, int const & a0, const class Pythia8::Event & a1, int const & a2) -> bool { return o.doVetoFSREmission(a0, a1, a2); }, "", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("doVetoFSREmission", (bool (Pythia8::UserHooks::*)(int, const class Pythia8::Event &, int, bool)) &Pythia8::UserHooks::doVetoFSREmission, "C++: Pythia8::UserHooks::doVetoFSREmission(int, const class Pythia8::Event &, int, bool) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoMPIEmission", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoMPIEmission, "C++: Pythia8::UserHooks::canVetoMPIEmission() --> bool");
		cl.def("doVetoMPIEmission", (bool (Pythia8::UserHooks::*)(int, const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoMPIEmission, "C++: Pythia8::UserHooks::doVetoMPIEmission(int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("canReconnectResonanceSystems", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canReconnectResonanceSystems, "C++: Pythia8::UserHooks::canReconnectResonanceSystems() --> bool");
		cl.def("doReconnectResonanceSystems", (bool (Pythia8::UserHooks::*)(int, class Pythia8::Event &)) &Pythia8::UserHooks::doReconnectResonanceSystems, "C++: Pythia8::UserHooks::doReconnectResonanceSystems(int, class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("canChangeFragPar", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canChangeFragPar, "C++: Pythia8::UserHooks::canChangeFragPar() --> bool");
		cl.def("setStringEnds", (void (Pythia8::UserHooks::*)(const class Pythia8::StringEnd *, const class Pythia8::StringEnd *, class std::vector<int>)) &Pythia8::UserHooks::setStringEnds, "C++: Pythia8::UserHooks::setStringEnds(const class Pythia8::StringEnd *, const class Pythia8::StringEnd *, class std::vector<int>) --> void", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("doChangeFragPar", (bool (Pythia8::UserHooks::*)(class Pythia8::StringFlav *, class Pythia8::StringZ *, class Pythia8::StringPT *, int, double, class std::vector<int>, const class Pythia8::StringEnd *)) &Pythia8::UserHooks::doChangeFragPar, "C++: Pythia8::UserHooks::doChangeFragPar(class Pythia8::StringFlav *, class Pythia8::StringZ *, class Pythia8::StringPT *, int, double, class std::vector<int>, const class Pythia8::StringEnd *) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoFragmentation", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoFragmentation, "C++: Pythia8::UserHooks::canVetoFragmentation() --> bool");
		cl.def("doVetoFragmentation", (bool (Pythia8::UserHooks::*)(class Pythia8::Particle, const class Pythia8::StringEnd *)) &Pythia8::UserHooks::doVetoFragmentation, "C++: Pythia8::UserHooks::doVetoFragmentation(class Pythia8::Particle, const class Pythia8::StringEnd *) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("doVetoFragmentation", (bool (Pythia8::UserHooks::*)(class Pythia8::Particle, class Pythia8::Particle, const class Pythia8::StringEnd *, const class Pythia8::StringEnd *)) &Pythia8::UserHooks::doVetoFragmentation, "C++: Pythia8::UserHooks::doVetoFragmentation(class Pythia8::Particle, class Pythia8::Particle, const class Pythia8::StringEnd *, const class Pythia8::StringEnd *) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("doVetoFinalTwo", (bool (Pythia8::UserHooks::*)(class Pythia8::Particle, class Pythia8::Particle, const class Pythia8::StringEnd *, const class Pythia8::StringEnd *)) &Pythia8::UserHooks::doVetoFinalTwo, "C++: Pythia8::UserHooks::doVetoFinalTwo(class Pythia8::Particle, class Pythia8::Particle, const class Pythia8::StringEnd *, const class Pythia8::StringEnd *) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("canVetoAfterHadronization", (bool (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::canVetoAfterHadronization, "C++: Pythia8::UserHooks::canVetoAfterHadronization() --> bool");
		cl.def("doVetoAfterHadronization", (bool (Pythia8::UserHooks::*)(const class Pythia8::Event &)) &Pythia8::UserHooks::doVetoAfterHadronization, "C++: Pythia8::UserHooks::doVetoAfterHadronization(const class Pythia8::Event &) --> bool", pybind11::arg(""));
		cl.def("canSetImpactParameter", (bool (Pythia8::UserHooks::*)() const) &Pythia8::UserHooks::canSetImpactParameter, "C++: Pythia8::UserHooks::canSetImpactParameter() const --> bool");
		cl.def("doSetImpactParameter", (double (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::doSetImpactParameter, "C++: Pythia8::UserHooks::doSetImpactParameter() --> double");
		cl.def("canSetEnhanceB", (bool (Pythia8::UserHooks::*)() const) &Pythia8::UserHooks::canSetEnhanceB, "C++: Pythia8::UserHooks::canSetEnhanceB() const --> bool");
		cl.def("doSetEnhanceB", (double (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::doSetEnhanceB, "C++: Pythia8::UserHooks::doSetEnhanceB() --> double");
		cl.def("onEndHadronLevel", (bool (Pythia8::UserHooks::*)(class Pythia8::HadronLevel &, class Pythia8::Event &)) &Pythia8::UserHooks::onEndHadronLevel, "C++: Pythia8::UserHooks::onEndHadronLevel(class Pythia8::HadronLevel &, class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""));
		cl.def("onInitInfoPtr", (void (Pythia8::UserHooks::*)()) &Pythia8::UserHooks::onInitInfoPtr, "C++: Pythia8::UserHooks::onInitInfoPtr() --> void");
		cl.def("omitResonanceDecays", [](Pythia8::UserHooks &o, const class Pythia8::Event & a0) -> void { return o.omitResonanceDecays(a0); }, "", pybind11::arg("process"));
		cl.def("omitResonanceDecays", (void (Pythia8::UserHooks::*)(const class Pythia8::Event &, bool)) &Pythia8::UserHooks::omitResonanceDecays, "C++: Pythia8::UserHooks::omitResonanceDecays(const class Pythia8::Event &, bool) --> void", pybind11::arg("process"), pybind11::arg("finalOnly"));
		cl.def("subEvent", [](Pythia8::UserHooks &o, const class Pythia8::Event & a0) -> void { return o.subEvent(a0); }, "", pybind11::arg("event"));
		cl.def("subEvent", (void (Pythia8::UserHooks::*)(const class Pythia8::Event &, bool)) &Pythia8::UserHooks::subEvent, "C++: Pythia8::UserHooks::subEvent(const class Pythia8::Event &, bool) --> void", pybind11::arg("event"), pybind11::arg("isHardest"));
		cl.def("assign", (class Pythia8::UserHooks & (Pythia8::UserHooks::*)(const class Pythia8::UserHooks &)) &Pythia8::UserHooks::operator=, "C++: Pythia8::UserHooks::operator=(const class Pythia8::UserHooks &) --> class Pythia8::UserHooks &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}
