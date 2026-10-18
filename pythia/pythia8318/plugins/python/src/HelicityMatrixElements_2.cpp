#include <Pythia8/Basics.h>
#include <Pythia8/BeamSetup.h>
#include <Pythia8/BeamShape.h>
#include <Pythia8/Event.h>
#include <Pythia8/FragmentationFlavZpT.h>
#include <Pythia8/FragmentationModel.h>
#include <Pythia8/FragmentationSystems.h>
#include <Pythia8/HIInfo.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/HeavyIons.h>
#include <Pythia8/HelicityBasics.h>
#include <Pythia8/HelicityMatrixElements.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/LesHouches.h>
#include <Pythia8/Logger.h>
#include <Pythia8/Merging.h>
#include <Pythia8/MergingHooks.h>
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
#include <Pythia8/Settings.h>
#include <Pythia8/ShowerModel.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaProcess.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/StringInteractions.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/TauDecays.h>
#include <Pythia8/TimeShower.h>
#include <Pythia8/UserHooks.h>
#include <Pythia8/Weights.h>
#include <complex>
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

// Pythia8::HMETau2FourPions file:Pythia8/HelicityMatrixElements.h line:587
struct PyCallBack_Pythia8_HMETau2FourPions : public Pythia8::HMETau2FourPions {
	using Pythia8::HMETau2FourPions::HMETau2FourPions;

	void initConstants() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "initConstants");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2FourPions::initConstants();
	}
	void initHadronicCurrent(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "initHadronicCurrent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2FourPions::initHadronicCurrent(a0);
	}
	void initWaves(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "initWaves");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::initWaves(a0);
	}
	class std::complex<double> calculateME(class std::vector<int> a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "calculateME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HMETauDecay::calculateME(a0);
	}
	double decayWeightMax(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "decayWeightMax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HMETauDecay::decayWeightMax(a0);
	}
	void calculateResonanceWeights(class std::vector<double> & a0, class std::vector<double> & a1, class std::vector<class std::complex<double> > & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "calculateResonanceWeights");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::calculateResonanceWeights(a0, a1, a2);
	}
	void initPointers(class Pythia8::ParticleData * a0, class Pythia8::CoupSM * a1, class Pythia8::Settings * a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "initPointers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::initPointers(a0, a1, a2);
	}
	class Pythia8::HelicityMatrixElement * initChannel(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "initChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::HelicityMatrixElement *>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::HelicityMatrixElement *> caster;
				return pybind11::detail::cast_ref<class Pythia8::HelicityMatrixElement *>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::HelicityMatrixElement *>(std::move(o));
		}
		return HelicityMatrixElement::initChannel(a0);
	}
	double decayWeight(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "decayWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HelicityMatrixElement::decayWeight(a0);
	}
	void calculateD(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "calculateD");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::calculateD(a0);
	}
	void calculateRho(unsigned int a0, class std::vector<class Pythia8::HelicityParticle> & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "calculateRho");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::calculateRho(a0, a1);
	}
	class std::complex<double> breitWigner(double a0, double a1, double a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "breitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::breitWigner(a0, a1, a2);
	}
	class std::complex<double> sBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "sBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::sBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> pBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "pBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::pBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> dBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FourPions *>(this), "dBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::dBreitWigner(a0, a1, a2, a3, a4);
	}
};

// Pythia8::HMETau2FivePions file:Pythia8/HelicityMatrixElements.h line:639
struct PyCallBack_Pythia8_HMETau2FivePions : public Pythia8::HMETau2FivePions {
	using Pythia8::HMETau2FivePions::HMETau2FivePions;

	void initConstants() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "initConstants");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2FivePions::initConstants();
	}
	void initHadronicCurrent(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "initHadronicCurrent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2FivePions::initHadronicCurrent(a0);
	}
	void initWaves(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "initWaves");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::initWaves(a0);
	}
	class std::complex<double> calculateME(class std::vector<int> a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "calculateME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HMETauDecay::calculateME(a0);
	}
	double decayWeightMax(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "decayWeightMax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HMETauDecay::decayWeightMax(a0);
	}
	void calculateResonanceWeights(class std::vector<double> & a0, class std::vector<double> & a1, class std::vector<class std::complex<double> > & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "calculateResonanceWeights");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::calculateResonanceWeights(a0, a1, a2);
	}
	void initPointers(class Pythia8::ParticleData * a0, class Pythia8::CoupSM * a1, class Pythia8::Settings * a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "initPointers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::initPointers(a0, a1, a2);
	}
	class Pythia8::HelicityMatrixElement * initChannel(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "initChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::HelicityMatrixElement *>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::HelicityMatrixElement *> caster;
				return pybind11::detail::cast_ref<class Pythia8::HelicityMatrixElement *>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::HelicityMatrixElement *>(std::move(o));
		}
		return HelicityMatrixElement::initChannel(a0);
	}
	double decayWeight(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "decayWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HelicityMatrixElement::decayWeight(a0);
	}
	void calculateD(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "calculateD");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::calculateD(a0);
	}
	void calculateRho(unsigned int a0, class std::vector<class Pythia8::HelicityParticle> & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "calculateRho");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::calculateRho(a0, a1);
	}
	class std::complex<double> breitWigner(double a0, double a1, double a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "breitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::breitWigner(a0, a1, a2);
	}
	class std::complex<double> sBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "sBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::sBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> pBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "pBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::pBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> dBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2FivePions *>(this), "dBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::dBreitWigner(a0, a1, a2, a3, a4);
	}
};

// Pythia8::HMETau2PhaseSpace file:Pythia8/HelicityMatrixElements.h line:668
struct PyCallBack_Pythia8_HMETau2PhaseSpace : public Pythia8::HMETau2PhaseSpace {
	using Pythia8::HMETau2PhaseSpace::HMETau2PhaseSpace;

	void initWaves(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "initWaves");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2PhaseSpace::initWaves(a0);
	}
	class std::complex<double> calculateME(class std::vector<int> a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "calculateME");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HMETau2PhaseSpace::calculateME(a0);
	}
	void calculateD(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "calculateD");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2PhaseSpace::calculateD(a0);
	}
	void calculateRho(unsigned int a0, class std::vector<class Pythia8::HelicityParticle> & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "calculateRho");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETau2PhaseSpace::calculateRho(a0, a1);
	}
	double decayWeight(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "decayWeight");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HMETau2PhaseSpace::decayWeight(a0);
	}
	double decayWeightMax(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "decayWeightMax");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return HMETau2PhaseSpace::decayWeightMax(a0);
	}
	void initHadronicCurrent(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "initHadronicCurrent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::initHadronicCurrent(a0);
	}
	void calculateResonanceWeights(class std::vector<double> & a0, class std::vector<double> & a1, class std::vector<class std::complex<double> > & a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "calculateResonanceWeights");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HMETauDecay::calculateResonanceWeights(a0, a1, a2);
	}
	void initPointers(class Pythia8::ParticleData * a0, class Pythia8::CoupSM * a1, class Pythia8::Settings * a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "initPointers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::initPointers(a0, a1, a2);
	}
	class Pythia8::HelicityMatrixElement * initChannel(class std::vector<class Pythia8::HelicityParticle> & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "initChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::HelicityMatrixElement *>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::HelicityMatrixElement *> caster;
				return pybind11::detail::cast_ref<class Pythia8::HelicityMatrixElement *>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::HelicityMatrixElement *>(std::move(o));
		}
		return HelicityMatrixElement::initChannel(a0);
	}
	class std::complex<double> breitWigner(double a0, double a1, double a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "breitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::breitWigner(a0, a1, a2);
	}
	class std::complex<double> sBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "sBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::sBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> pBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "pBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::pBreitWigner(a0, a1, a2, a3, a4);
	}
	class std::complex<double> dBreitWigner(double a0, double a1, double a2, double a3, double a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "dBreitWigner");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::complex<double>>::value) {
				static pybind11::detail::override_caster_t<class std::complex<double>> caster;
				return pybind11::detail::cast_ref<class std::complex<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::complex<double>>(std::move(o));
		}
		return HelicityMatrixElement::dBreitWigner(a0, a1, a2, a3, a4);
	}
	void initConstants() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HMETau2PhaseSpace *>(this), "initConstants");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return HelicityMatrixElement::initConstants();
	}
};

// Pythia8::TauDecays file:Pythia8/TauDecays.h line:27
struct PyCallBack_Pythia8_TauDecays : public Pythia8::TauDecays {
	using Pythia8::TauDecays::TauDecays;

	void onInitInfoPtr() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::TauDecays *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onInitInfoPtr();
	}
	void onBeginEvent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::TauDecays *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::TauDecays *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::TauDecays *>(this), "onStat");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::TauDecays *>(this), "onStat");
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

// Pythia8::DecayHandler file:Pythia8/ParticleDecays.h line:31
struct PyCallBack_Pythia8_DecayHandler : public Pythia8::DecayHandler {
	using Pythia8::DecayHandler::DecayHandler;

	bool decay(class std::vector<int> & a0, class std::vector<double> & a1, class std::vector<class Pythia8::Vec4> & a2, int a3, const class Pythia8::Event & a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "decay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return DecayHandler::decay(a0, a1, a2, a3, a4);
	}
	bool chainDecay(class std::vector<int> & a0, class std::vector<int> & a1, class std::vector<double> & a2, class std::vector<class Pythia8::Vec4> & a3, int a4, const class Pythia8::Event & a5) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "chainDecay");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4, a5);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return DecayHandler::chainDecay(a0, a1, a2, a3, a4, a5);
	}
	class std::vector<int> handledParticles() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "handledParticles");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<int>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<int>> caster;
				return pybind11::detail::cast_ref<class std::vector<int>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<int>>(std::move(o));
		}
		return DecayHandler::handledParticles();
	}
	void onInitInfoPtr() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onInitInfoPtr();
	}
	void onBeginEvent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "onStat");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::DecayHandler *>(this), "onStat");
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

// Pythia8::ParticleDecays file:Pythia8/ParticleDecays.h line:57
struct PyCallBack_Pythia8_ParticleDecays : public Pythia8::ParticleDecays {
	using Pythia8::ParticleDecays::ParticleDecays;

	void onInitInfoPtr() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ParticleDecays *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParticleDecays::onInitInfoPtr();
	}
	void onBeginEvent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ParticleDecays *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ParticleDecays *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ParticleDecays *>(this), "onStat");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ParticleDecays *>(this), "onStat");
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

// Pythia8::RHadrons file:Pythia8/RHadrons.h line:21
struct PyCallBack_Pythia8_RHadrons : public Pythia8::RHadrons {
	using Pythia8::RHadrons::RHadrons;

	bool init(class Pythia8::StringFlav * a0, class Pythia8::StringPT * a1, class Pythia8::StringZ * a2, class std::shared_ptr<class Pythia8::FragmentationModifierBase> a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return RHadrons::init(a0, a1, a2, a3);
	}
	bool fragment(int a0, class Pythia8::ColConfig & a1, class Pythia8::Event & a2, bool a3, bool a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "fragment");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return RHadrons::fragment(a0, a1, a2, a3, a4);
	}
	void onInitInfoPtr() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "onInitInfoPtr");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return PhysicsBase::onInitInfoPtr();
	}
	void onBeginEvent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "onBeginEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "onEndEvent");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "onStat");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::RHadrons *>(this), "onStat");
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

void bind_Pythia8_HelicityMatrixElements_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::HMETau2FourPions file:Pythia8/HelicityMatrixElements.h line:587
		pybind11::class_<Pythia8::HMETau2FourPions, std::shared_ptr<Pythia8::HMETau2FourPions>, PyCallBack_Pythia8_HMETau2FourPions, Pythia8::HMETauDecay> cl(M("Pythia8"), "HMETau2FourPions", "");
		cl.def( pybind11::init( [](){ return new Pythia8::HMETau2FourPions(); }, [](){ return new PyCallBack_Pythia8_HMETau2FourPions(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HMETau2FourPions const &o){ return new PyCallBack_Pythia8_HMETau2FourPions(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HMETau2FourPions const &o){ return new Pythia8::HMETau2FourPions(o); } ) );
		cl.def("initConstants", (void (Pythia8::HMETau2FourPions::*)()) &Pythia8::HMETau2FourPions::initConstants, "C++: Pythia8::HMETau2FourPions::initConstants() --> void");
		cl.def("initHadronicCurrent", (void (Pythia8::HMETau2FourPions::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2FourPions::initHadronicCurrent, "C++: Pythia8::HMETau2FourPions::initHadronicCurrent(class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg("p"));
		cl.def("assign", (class Pythia8::HMETau2FourPions & (Pythia8::HMETau2FourPions::*)(const class Pythia8::HMETau2FourPions &)) &Pythia8::HMETau2FourPions::operator=, "C++: Pythia8::HMETau2FourPions::operator=(const class Pythia8::HMETau2FourPions &) --> class Pythia8::HMETau2FourPions &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HMETau2FivePions file:Pythia8/HelicityMatrixElements.h line:639
		pybind11::class_<Pythia8::HMETau2FivePions, std::shared_ptr<Pythia8::HMETau2FivePions>, PyCallBack_Pythia8_HMETau2FivePions, Pythia8::HMETauDecay> cl(M("Pythia8"), "HMETau2FivePions", "");
		cl.def( pybind11::init( [](){ return new Pythia8::HMETau2FivePions(); }, [](){ return new PyCallBack_Pythia8_HMETau2FivePions(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HMETau2FivePions const &o){ return new PyCallBack_Pythia8_HMETau2FivePions(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HMETau2FivePions const &o){ return new Pythia8::HMETau2FivePions(o); } ) );
		cl.def("initConstants", (void (Pythia8::HMETau2FivePions::*)()) &Pythia8::HMETau2FivePions::initConstants, "C++: Pythia8::HMETau2FivePions::initConstants() --> void");
		cl.def("initHadronicCurrent", (void (Pythia8::HMETau2FivePions::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2FivePions::initHadronicCurrent, "C++: Pythia8::HMETau2FivePions::initHadronicCurrent(class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg(""));
		cl.def("assign", (class Pythia8::HMETau2FivePions & (Pythia8::HMETau2FivePions::*)(const class Pythia8::HMETau2FivePions &)) &Pythia8::HMETau2FivePions::operator=, "C++: Pythia8::HMETau2FivePions::operator=(const class Pythia8::HMETau2FivePions &) --> class Pythia8::HMETau2FivePions &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HMETau2PhaseSpace file:Pythia8/HelicityMatrixElements.h line:668
		pybind11::class_<Pythia8::HMETau2PhaseSpace, std::shared_ptr<Pythia8::HMETau2PhaseSpace>, PyCallBack_Pythia8_HMETau2PhaseSpace, Pythia8::HMETauDecay> cl(M("Pythia8"), "HMETau2PhaseSpace", "");
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HMETau2PhaseSpace const &o){ return new PyCallBack_Pythia8_HMETau2PhaseSpace(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HMETau2PhaseSpace const &o){ return new Pythia8::HMETau2PhaseSpace(o); } ) );
		cl.def( pybind11::init( [](){ return new Pythia8::HMETau2PhaseSpace(); }, [](){ return new PyCallBack_Pythia8_HMETau2PhaseSpace(); } ) );
		cl.def("initWaves", (void (Pythia8::HMETau2PhaseSpace::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2PhaseSpace::initWaves, "C++: Pythia8::HMETau2PhaseSpace::initWaves(class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg(""));
		cl.def("calculateME", (class std::complex<double> (Pythia8::HMETau2PhaseSpace::*)(class std::vector<int>)) &Pythia8::HMETau2PhaseSpace::calculateME, "C++: Pythia8::HMETau2PhaseSpace::calculateME(class std::vector<int>) --> class std::complex<double>", pybind11::arg(""));
		cl.def("calculateD", (void (Pythia8::HMETau2PhaseSpace::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2PhaseSpace::calculateD, "C++: Pythia8::HMETau2PhaseSpace::calculateD(class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg(""));
		cl.def("calculateRho", (void (Pythia8::HMETau2PhaseSpace::*)(unsigned int, class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2PhaseSpace::calculateRho, "C++: Pythia8::HMETau2PhaseSpace::calculateRho(unsigned int, class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg(""), pybind11::arg(""));
		cl.def("decayWeight", (double (Pythia8::HMETau2PhaseSpace::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2PhaseSpace::decayWeight, "C++: Pythia8::HMETau2PhaseSpace::decayWeight(class std::vector<class Pythia8::HelicityParticle> &) --> double", pybind11::arg(""));
		cl.def("decayWeightMax", (double (Pythia8::HMETau2PhaseSpace::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::HMETau2PhaseSpace::decayWeightMax, "C++: Pythia8::HMETau2PhaseSpace::decayWeightMax(class std::vector<class Pythia8::HelicityParticle> &) --> double", pybind11::arg(""));
		cl.def("assign", (class Pythia8::HMETau2PhaseSpace & (Pythia8::HMETau2PhaseSpace::*)(const class Pythia8::HMETau2PhaseSpace &)) &Pythia8::HMETau2PhaseSpace::operator=, "C++: Pythia8::HMETau2PhaseSpace::operator=(const class Pythia8::HMETau2PhaseSpace &) --> class Pythia8::HMETau2PhaseSpace &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::TauDecays file:Pythia8/TauDecays.h line:27
		pybind11::class_<Pythia8::TauDecays, std::shared_ptr<Pythia8::TauDecays>, PyCallBack_Pythia8_TauDecays, Pythia8::PhysicsBase> cl(M("Pythia8"), "TauDecays", "");
		cl.def( pybind11::init( [](){ return new Pythia8::TauDecays(); }, [](){ return new PyCallBack_Pythia8_TauDecays(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_TauDecays const &o){ return new PyCallBack_Pythia8_TauDecays(o); } ) );
		cl.def( pybind11::init( [](Pythia8::TauDecays const &o){ return new Pythia8::TauDecays(o); } ) );
		cl.def("init", (void (Pythia8::TauDecays::*)()) &Pythia8::TauDecays::init, "C++: Pythia8::TauDecays::init() --> void");
		cl.def("decay", (bool (Pythia8::TauDecays::*)(int, class Pythia8::Event &)) &Pythia8::TauDecays::decay, "C++: Pythia8::TauDecays::decay(int, class Pythia8::Event &) --> bool", pybind11::arg("iDec"), pybind11::arg("event"));
		cl.def("internalMechanism", (bool (Pythia8::TauDecays::*)(class Pythia8::Event &)) &Pythia8::TauDecays::internalMechanism, "C++: Pythia8::TauDecays::internalMechanism(class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("externalMechanism", (bool (Pythia8::TauDecays::*)(class Pythia8::Event &)) &Pythia8::TauDecays::externalMechanism, "C++: Pythia8::TauDecays::externalMechanism(class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("createChildren", (class std::vector<class Pythia8::HelicityParticle> (Pythia8::TauDecays::*)(class Pythia8::HelicityParticle)) &Pythia8::TauDecays::createChildren, "C++: Pythia8::TauDecays::createChildren(class Pythia8::HelicityParticle) --> class std::vector<class Pythia8::HelicityParticle>", pybind11::arg("parent"));
		cl.def("isotropicDecay", (void (Pythia8::TauDecays::*)(class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::TauDecays::isotropicDecay, "C++: Pythia8::TauDecays::isotropicDecay(class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg("p"));
		cl.def("writeDecay", (void (Pythia8::TauDecays::*)(class Pythia8::Event &, class std::vector<class Pythia8::HelicityParticle> &)) &Pythia8::TauDecays::writeDecay, "C++: Pythia8::TauDecays::writeDecay(class Pythia8::Event &, class std::vector<class Pythia8::HelicityParticle> &) --> void", pybind11::arg("event"), pybind11::arg("p"));
		cl.def("assign", (class Pythia8::TauDecays & (Pythia8::TauDecays::*)(const class Pythia8::TauDecays &)) &Pythia8::TauDecays::operator=, "C++: Pythia8::TauDecays::operator=(const class Pythia8::TauDecays &) --> class Pythia8::TauDecays &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::DecayHandler file:Pythia8/ParticleDecays.h line:31
		pybind11::class_<Pythia8::DecayHandler, std::shared_ptr<Pythia8::DecayHandler>, PyCallBack_Pythia8_DecayHandler, Pythia8::PhysicsBase> cl(M("Pythia8"), "DecayHandler", "");
		cl.def( pybind11::init( [](){ return new Pythia8::DecayHandler(); }, [](){ return new PyCallBack_Pythia8_DecayHandler(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_DecayHandler const &o){ return new PyCallBack_Pythia8_DecayHandler(o); } ) );
		cl.def( pybind11::init( [](Pythia8::DecayHandler const &o){ return new Pythia8::DecayHandler(o); } ) );
		cl.def("decay", (bool (Pythia8::DecayHandler::*)(class std::vector<int> &, class std::vector<double> &, class std::vector<class Pythia8::Vec4> &, int, const class Pythia8::Event &)) &Pythia8::DecayHandler::decay, "C++: Pythia8::DecayHandler::decay(class std::vector<int> &, class std::vector<double> &, class std::vector<class Pythia8::Vec4> &, int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("chainDecay", (bool (Pythia8::DecayHandler::*)(class std::vector<int> &, class std::vector<int> &, class std::vector<double> &, class std::vector<class Pythia8::Vec4> &, int, const class Pythia8::Event &)) &Pythia8::DecayHandler::chainDecay, "C++: Pythia8::DecayHandler::chainDecay(class std::vector<int> &, class std::vector<int> &, class std::vector<double> &, class std::vector<class Pythia8::Vec4> &, int, const class Pythia8::Event &) --> bool", pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""), pybind11::arg(""));
		cl.def("handledParticles", (class std::vector<int> (Pythia8::DecayHandler::*)()) &Pythia8::DecayHandler::handledParticles, "C++: Pythia8::DecayHandler::handledParticles() --> class std::vector<int>");
		cl.def("assign", (class Pythia8::DecayHandler & (Pythia8::DecayHandler::*)(const class Pythia8::DecayHandler &)) &Pythia8::DecayHandler::operator=, "C++: Pythia8::DecayHandler::operator=(const class Pythia8::DecayHandler &) --> class Pythia8::DecayHandler &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ParticleDecays file:Pythia8/ParticleDecays.h line:57
		pybind11::class_<Pythia8::ParticleDecays, std::shared_ptr<Pythia8::ParticleDecays>, PyCallBack_Pythia8_ParticleDecays, Pythia8::PhysicsBase> cl(M("Pythia8"), "ParticleDecays", "");
		cl.def( pybind11::init( [](){ return new Pythia8::ParticleDecays(); }, [](){ return new PyCallBack_Pythia8_ParticleDecays(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_ParticleDecays const &o){ return new PyCallBack_Pythia8_ParticleDecays(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ParticleDecays const &o){ return new Pythia8::ParticleDecays(o); } ) );
		cl.def("init", (void (Pythia8::ParticleDecays::*)(class std::shared_ptr<class Pythia8::TimeShower>, class Pythia8::StringFlav *, class std::shared_ptr<class Pythia8::DecayHandler>, class std::vector<int>)) &Pythia8::ParticleDecays::init, "C++: Pythia8::ParticleDecays::init(class std::shared_ptr<class Pythia8::TimeShower>, class Pythia8::StringFlav *, class std::shared_ptr<class Pythia8::DecayHandler>, class std::vector<int>) --> void", pybind11::arg("timesDecPtrIn"), pybind11::arg("flavSelPtrIn"), pybind11::arg("decayHandlePtrIn"), pybind11::arg("handledParticles"));
		cl.def("decay", [](Pythia8::ParticleDecays &o, int const & a0, class Pythia8::Event & a1) -> bool { return o.decay(a0, a1); }, "", pybind11::arg("iDec"), pybind11::arg("event"));
		cl.def("decay", (bool (Pythia8::ParticleDecays::*)(int, class Pythia8::Event &, bool)) &Pythia8::ParticleDecays::decay, "C++: Pythia8::ParticleDecays::decay(int, class Pythia8::Event &, bool) --> bool", pybind11::arg("iDec"), pybind11::arg("event"), pybind11::arg("allowPartons"));
		cl.def("decayAll", [](Pythia8::ParticleDecays &o, class Pythia8::Event & a0) -> bool { return o.decayAll(a0); }, "", pybind11::arg("event"));
		cl.def("decayAll", (bool (Pythia8::ParticleDecays::*)(class Pythia8::Event &, double)) &Pythia8::ParticleDecays::decayAll, "C++: Pythia8::ParticleDecays::decayAll(class Pythia8::Event &, double) --> bool", pybind11::arg("event"), pybind11::arg("minWidth"));
		cl.def("moreToDo", (bool (Pythia8::ParticleDecays::*)() const) &Pythia8::ParticleDecays::moreToDo, "C++: Pythia8::ParticleDecays::moreToDo() const --> bool");
		cl.def("onInitInfoPtr", (void (Pythia8::ParticleDecays::*)()) &Pythia8::ParticleDecays::onInitInfoPtr, "C++: Pythia8::ParticleDecays::onInitInfoPtr() --> void");
		cl.def("assign", (class Pythia8::ParticleDecays & (Pythia8::ParticleDecays::*)(const class Pythia8::ParticleDecays &)) &Pythia8::ParticleDecays::operator=, "C++: Pythia8::ParticleDecays::operator=(const class Pythia8::ParticleDecays &) --> class Pythia8::ParticleDecays &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::RHadrons file:Pythia8/RHadrons.h line:21
		pybind11::class_<Pythia8::RHadrons, std::shared_ptr<Pythia8::RHadrons>, PyCallBack_Pythia8_RHadrons, Pythia8::FragmentationModel> cl(M("Pythia8"), "RHadrons", "");
		cl.def( pybind11::init( [](){ return new Pythia8::RHadrons(); }, [](){ return new PyCallBack_Pythia8_RHadrons(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_RHadrons const &o){ return new PyCallBack_Pythia8_RHadrons(o); } ) );
		cl.def( pybind11::init( [](Pythia8::RHadrons const &o){ return new Pythia8::RHadrons(o); } ) );
		cl.def("init", [](Pythia8::RHadrons &o) -> bool { return o.init(); }, "");
		cl.def("init", [](Pythia8::RHadrons &o, class Pythia8::StringFlav * a0) -> bool { return o.init(a0); }, "", pybind11::arg("flavSelPtrIn"));
		cl.def("init", [](Pythia8::RHadrons &o, class Pythia8::StringFlav * a0, class Pythia8::StringPT * a1) -> bool { return o.init(a0, a1); }, "", pybind11::arg("flavSelPtrIn"), pybind11::arg("pTSelPtrIn"));
		cl.def("init", [](Pythia8::RHadrons &o, class Pythia8::StringFlav * a0, class Pythia8::StringPT * a1, class Pythia8::StringZ * a2) -> bool { return o.init(a0, a1, a2); }, "", pybind11::arg("flavSelPtrIn"), pybind11::arg("pTSelPtrIn"), pybind11::arg("zSelPtrIn"));
		cl.def("init", (bool (Pythia8::RHadrons::*)(class Pythia8::StringFlav *, class Pythia8::StringPT *, class Pythia8::StringZ *, class std::shared_ptr<class Pythia8::FragmentationModifierBase>)) &Pythia8::RHadrons::init, "C++: Pythia8::RHadrons::init(class Pythia8::StringFlav *, class Pythia8::StringPT *, class Pythia8::StringZ *, class std::shared_ptr<class Pythia8::FragmentationModifierBase>) --> bool", pybind11::arg("flavSelPtrIn"), pybind11::arg("pTSelPtrIn"), pybind11::arg("zSelPtrIn"), pybind11::arg("fragModPtrIn"));
		cl.def("fragment", [](Pythia8::RHadrons &o, int const & a0, class Pythia8::ColConfig & a1, class Pythia8::Event & a2) -> bool { return o.fragment(a0, a1, a2); }, "", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"));
		cl.def("fragment", [](Pythia8::RHadrons &o, int const & a0, class Pythia8::ColConfig & a1, class Pythia8::Event & a2, bool const & a3) -> bool { return o.fragment(a0, a1, a2, a3); }, "", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"), pybind11::arg("isDiff"));
		cl.def("fragment", (bool (Pythia8::RHadrons::*)(int, class Pythia8::ColConfig &, class Pythia8::Event &, bool, bool)) &Pythia8::RHadrons::fragment, "C++: Pythia8::RHadrons::fragment(int, class Pythia8::ColConfig &, class Pythia8::Event &, bool, bool) --> bool", pybind11::arg("iSub"), pybind11::arg("colConfig"), pybind11::arg("event"), pybind11::arg("isDiff"), pybind11::arg("systemRecoil"));
		cl.def("decay", (bool (Pythia8::RHadrons::*)(class Pythia8::Event &)) &Pythia8::RHadrons::decay, "C++: Pythia8::RHadrons::decay(class Pythia8::Event &) --> bool", pybind11::arg("event"));
		cl.def("givesRHadron", (bool (Pythia8::RHadrons::*)(int)) &Pythia8::RHadrons::givesRHadron, "C++: Pythia8::RHadrons::givesRHadron(int) --> bool", pybind11::arg("id"));
		cl.def("exist", (bool (Pythia8::RHadrons::*)()) &Pythia8::RHadrons::exist, "C++: Pythia8::RHadrons::exist() --> bool");
		cl.def("trace", (int (Pythia8::RHadrons::*)(int)) &Pythia8::RHadrons::trace, "C++: Pythia8::RHadrons::trace(int) --> int", pybind11::arg("i"));
		cl.def("assign", (class Pythia8::RHadrons & (Pythia8::RHadrons::*)(const class Pythia8::RHadrons &)) &Pythia8::RHadrons::operator=, "C++: Pythia8::RHadrons::operator=(const class Pythia8::RHadrons &) --> class Pythia8::RHadrons &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
}
