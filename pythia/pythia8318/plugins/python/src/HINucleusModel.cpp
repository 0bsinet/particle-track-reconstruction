#include <Pythia8/Basics.h>
#include <Pythia8/BeamSetup.h>
#include <Pythia8/Event.h>
#include <Pythia8/HIBasics.h>
#include <Pythia8/HINucleusModel.h>
#include <Pythia8/HISubCollisionModel.h>
#include <Pythia8/HadronWidths.h>
#include <Pythia8/Info.h>
#include <Pythia8/LHEF3.h>
#include <Pythia8/Logger.h>
#include <Pythia8/ParticleData.h>
#include <Pythia8/PartonSystems.h>
#include <Pythia8/ResonanceWidths.h>
#include <Pythia8/Settings.h>
#include <Pythia8/SigmaLowEnergy.h>
#include <Pythia8/SigmaTotal.h>
#include <Pythia8/StandardModel.h>
#include <Pythia8/SusyCouplings.h>
#include <Pythia8/Weights.h>
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

// Pythia8::ExternalNucleusModel file:Pythia8/HINucleusModel.h line:289
struct PyCallBack_Pythia8_ExternalNucleusModel : public Pythia8::ExternalNucleusModel {
	using Pythia8::ExternalNucleusModel::ExternalNucleusModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ExternalNucleusModel::init();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return ExternalNucleusModel::generate();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ExternalNucleusModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::HardCoreModel file:Pythia8/HINucleusModel.h line:325
struct PyCallBack_Pythia8_HardCoreModel : public Pythia8::HardCoreModel {
	using Pythia8::HardCoreModel::HardCoreModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::init();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HardCoreModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"NucleusModel::generate\"");
	}
};

// Pythia8::WoodsSaxonModel file:Pythia8/HINucleusModel.h line:362
struct PyCallBack_Pythia8_WoodsSaxonModel : public Pythia8::WoodsSaxonModel {
	using Pythia8::WoodsSaxonModel::WoodsSaxonModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return WoodsSaxonModel::init();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return WoodsSaxonModel::initGeometry();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return WoodsSaxonModel::generate();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::WoodsSaxonModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::GLISSANDOModel file:Pythia8/HINucleusModel.h line:417
struct PyCallBack_Pythia8_GLISSANDOModel : public Pythia8::GLISSANDOModel {
	using Pythia8::GLISSANDOModel::GLISSANDOModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return GLISSANDOModel::init();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return GLISSANDOModel::initGeometry();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return WoodsSaxonModel::generate();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GLISSANDOModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::HOShellModel file:Pythia8/HINucleusModel.h line:437
struct PyCallBack_Pythia8_HOShellModel : public Pythia8::HOShellModel {
	using Pythia8::HOShellModel::HOShellModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HOShellModel::init();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return HOShellModel::generate();
	}
	class Pythia8::Vec4 generateNucleon() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "generateNucleon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Vec4>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Vec4> caster;
				return pybind11::detail::cast_ref<class Pythia8::Vec4>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Vec4>(std::move(o));
		}
		return HOShellModel::generateNucleon();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HOShellModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::HulthenModel file:Pythia8/HINucleusModel.h line:485
struct PyCallBack_Pythia8_HulthenModel : public Pythia8::HulthenModel {
	using Pythia8::HulthenModel::HulthenModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return HulthenModel::init();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return HulthenModel::generate();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::HulthenModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::GaussianModel file:Pythia8/HINucleusModel.h line:523
struct PyCallBack_Pythia8_GaussianModel : public Pythia8::GaussianModel {
	using Pythia8::GaussianModel::GaussianModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return GaussianModel::init();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return GaussianModel::generate();
	}
	class Pythia8::Vec4 generateNucleon() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "generateNucleon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Vec4>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Vec4> caster;
				return pybind11::detail::cast_ref<class Pythia8::Vec4>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Vec4>(std::move(o));
		}
		return GaussianModel::generateNucleon();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::GaussianModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::ClusterModel file:Pythia8/HINucleusModel.h line:557
struct PyCallBack_Pythia8_ClusterModel : public Pythia8::ClusterModel {
	using Pythia8::ClusterModel::ClusterModel;

	bool init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return ClusterModel::init();
	}
	class std::vector<class Pythia8::Nucleon> generate() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "generate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<class Pythia8::Nucleon>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<class Pythia8::Nucleon>> caster;
				return pybind11::detail::cast_ref<class std::vector<class Pythia8::Nucleon>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<class Pythia8::Nucleon>>(std::move(o));
		}
		return ClusterModel::generate();
	}
	bool initGeometry() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "initGeometry");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return NucleusModel::initGeometry();
	}
	void setPN(const class Pythia8::Vec4 & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "setPN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setPN(a0);
	}
	void setMN(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "setMN");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return NucleusModel::setMN(a0);
	}
	class Pythia8::Particle produceIon() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::ClusterModel *>(this), "produceIon");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::Particle>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::Particle> caster;
				return pybind11::detail::cast_ref<class Pythia8::Particle>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::Particle>(std::move(o));
		}
		return NucleusModel::produceIon();
	}
};

// Pythia8::SubCollisionModel file:Pythia8/HISubCollisionModel.h line:143
struct PyCallBack_Pythia8_SubCollisionModel : public Pythia8::SubCollisionModel {
	using Pythia8::SubCollisionModel::SubCollisionModel;

	bool init(int a0, int a1, double a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return SubCollisionModel::init(a0, a1, a2);
	}
	class std::vector<double> minParm() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "minParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<double>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<double>> caster;
				return pybind11::detail::cast_ref<class std::vector<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<double>>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::minParm\"");
	}
	class std::vector<double> defParm() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "defParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<double>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<double>> caster;
				return pybind11::detail::cast_ref<class std::vector<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<double>>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::defParm\"");
	}
	class std::vector<double> maxParm() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "maxParm");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class std::vector<double>>::value) {
				static pybind11::detail::override_caster_t<class std::vector<double>> caster;
				return pybind11::detail::cast_ref<class std::vector<double>>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class std::vector<double>>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::maxParm\"");
	}
	void generateNucleonStates(class Pythia8::Nucleus & a0, class Pythia8::Nucleus & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "generateNucleonStates");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SubCollisionModel::generateNucleonStates(a0, a1);
	}
	class Pythia8::SubCollisionSet getCollisions(class Pythia8::Nucleus & a0, class Pythia8::Nucleus & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "getCollisions");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<class Pythia8::SubCollisionSet>::value) {
				static pybind11::detail::override_caster_t<class Pythia8::SubCollisionSet> caster;
				return pybind11::detail::cast_ref<class Pythia8::SubCollisionSet>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class Pythia8::SubCollisionSet>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::getCollisions\"");
	}
	struct Pythia8::SubCollisionModel::SigEst getSig() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Pythia8::SubCollisionModel *>(this), "getSig");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<struct Pythia8::SubCollisionModel::SigEst>::value) {
				static pybind11::detail::override_caster_t<struct Pythia8::SubCollisionModel::SigEst> caster;
				return pybind11::detail::cast_ref<struct Pythia8::SubCollisionModel::SigEst>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<struct Pythia8::SubCollisionModel::SigEst>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"SubCollisionModel::getSig\"");
	}
};

void bind_Pythia8_HINucleusModel(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Pythia8::ExternalNucleusModel file:Pythia8/HINucleusModel.h line:289
		pybind11::class_<Pythia8::ExternalNucleusModel, std::shared_ptr<Pythia8::ExternalNucleusModel>, PyCallBack_Pythia8_ExternalNucleusModel, Pythia8::NucleusModel> cl(M("Pythia8"), "ExternalNucleusModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::ExternalNucleusModel(); }, [](){ return new PyCallBack_Pythia8_ExternalNucleusModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_ExternalNucleusModel const &o){ return new PyCallBack_Pythia8_ExternalNucleusModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::ExternalNucleusModel const &o){ return new Pythia8::ExternalNucleusModel(o); } ) );
		cl.def("init", (bool (Pythia8::ExternalNucleusModel::*)()) &Pythia8::ExternalNucleusModel::init, "C++: Pythia8::ExternalNucleusModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::ExternalNucleusModel::*)() const) &Pythia8::ExternalNucleusModel::generate, "C++: Pythia8::ExternalNucleusModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
		cl.def("assign", (class Pythia8::ExternalNucleusModel & (Pythia8::ExternalNucleusModel::*)(const class Pythia8::ExternalNucleusModel &)) &Pythia8::ExternalNucleusModel::operator=, "C++: Pythia8::ExternalNucleusModel::operator=(const class Pythia8::ExternalNucleusModel &) --> class Pythia8::ExternalNucleusModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HardCoreModel file:Pythia8/HINucleusModel.h line:325
		pybind11::class_<Pythia8::HardCoreModel, std::shared_ptr<Pythia8::HardCoreModel>, PyCallBack_Pythia8_HardCoreModel, Pythia8::NucleusModel> cl(M("Pythia8"), "HardCoreModel", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_Pythia8_HardCoreModel(); } ) );
		cl.def(pybind11::init<PyCallBack_Pythia8_HardCoreModel const &>());
		cl.def_readwrite("useHardCore", &Pythia8::HardCoreModel::useHardCore);
		cl.def_readwrite("gaussHardCore", &Pythia8::HardCoreModel::gaussHardCore);
		cl.def_readwrite("hardCoreRadius", &Pythia8::HardCoreModel::hardCoreRadius);
		cl.def("initHardCore", (void (Pythia8::HardCoreModel::*)()) &Pythia8::HardCoreModel::initHardCore, "C++: Pythia8::HardCoreModel::initHardCore() --> void");
		cl.def("rSample", (double (Pythia8::HardCoreModel::*)() const) &Pythia8::HardCoreModel::rSample, "C++: Pythia8::HardCoreModel::rSample() const --> double");
		cl.def("assign", (class Pythia8::HardCoreModel & (Pythia8::HardCoreModel::*)(const class Pythia8::HardCoreModel &)) &Pythia8::HardCoreModel::operator=, "C++: Pythia8::HardCoreModel::operator=(const class Pythia8::HardCoreModel &) --> class Pythia8::HardCoreModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::WoodsSaxonModel file:Pythia8/HINucleusModel.h line:362
		pybind11::class_<Pythia8::WoodsSaxonModel, std::shared_ptr<Pythia8::WoodsSaxonModel>, PyCallBack_Pythia8_WoodsSaxonModel, Pythia8::HardCoreModel> cl(M("Pythia8"), "WoodsSaxonModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::WoodsSaxonModel(); }, [](){ return new PyCallBack_Pythia8_WoodsSaxonModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_WoodsSaxonModel const &o){ return new PyCallBack_Pythia8_WoodsSaxonModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::WoodsSaxonModel const &o){ return new Pythia8::WoodsSaxonModel(o); } ) );
		cl.def_readwrite("aSave", &Pythia8::WoodsSaxonModel::aSave);
		cl.def("init", (bool (Pythia8::WoodsSaxonModel::*)()) &Pythia8::WoodsSaxonModel::init, "C++: Pythia8::WoodsSaxonModel::init() --> bool");
		cl.def("initGeometry", (bool (Pythia8::WoodsSaxonModel::*)()) &Pythia8::WoodsSaxonModel::initGeometry, "C++: Pythia8::WoodsSaxonModel::initGeometry() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::WoodsSaxonModel::*)() const) &Pythia8::WoodsSaxonModel::generate, "C++: Pythia8::WoodsSaxonModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
		cl.def("generateNucleon", (class Pythia8::Vec4 (Pythia8::WoodsSaxonModel::*)() const) &Pythia8::WoodsSaxonModel::generateNucleon, "C++: Pythia8::WoodsSaxonModel::generateNucleon() const --> class Pythia8::Vec4");
		cl.def("a", (double (Pythia8::WoodsSaxonModel::*)() const) &Pythia8::WoodsSaxonModel::a, "C++: Pythia8::WoodsSaxonModel::a() const --> double");
		cl.def("overestimates", (void (Pythia8::WoodsSaxonModel::*)()) &Pythia8::WoodsSaxonModel::overestimates, "C++: Pythia8::WoodsSaxonModel::overestimates() --> void");
		cl.def("assign", (class Pythia8::WoodsSaxonModel & (Pythia8::WoodsSaxonModel::*)(const class Pythia8::WoodsSaxonModel &)) &Pythia8::WoodsSaxonModel::operator=, "C++: Pythia8::WoodsSaxonModel::operator=(const class Pythia8::WoodsSaxonModel &) --> class Pythia8::WoodsSaxonModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::GLISSANDOModel file:Pythia8/HINucleusModel.h line:417
		pybind11::class_<Pythia8::GLISSANDOModel, std::shared_ptr<Pythia8::GLISSANDOModel>, PyCallBack_Pythia8_GLISSANDOModel, Pythia8::WoodsSaxonModel> cl(M("Pythia8"), "GLISSANDOModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::GLISSANDOModel(); }, [](){ return new PyCallBack_Pythia8_GLISSANDOModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_GLISSANDOModel const &o){ return new PyCallBack_Pythia8_GLISSANDOModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::GLISSANDOModel const &o){ return new Pythia8::GLISSANDOModel(o); } ) );
		cl.def("init", (bool (Pythia8::GLISSANDOModel::*)()) &Pythia8::GLISSANDOModel::init, "C++: Pythia8::GLISSANDOModel::init() --> bool");
		cl.def("initGeometry", (bool (Pythia8::GLISSANDOModel::*)()) &Pythia8::GLISSANDOModel::initGeometry, "C++: Pythia8::GLISSANDOModel::initGeometry() --> bool");
		cl.def("assign", (class Pythia8::GLISSANDOModel & (Pythia8::GLISSANDOModel::*)(const class Pythia8::GLISSANDOModel &)) &Pythia8::GLISSANDOModel::operator=, "C++: Pythia8::GLISSANDOModel::operator=(const class Pythia8::GLISSANDOModel &) --> class Pythia8::GLISSANDOModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HOShellModel file:Pythia8/HINucleusModel.h line:437
		pybind11::class_<Pythia8::HOShellModel, std::shared_ptr<Pythia8::HOShellModel>, PyCallBack_Pythia8_HOShellModel, Pythia8::HardCoreModel> cl(M("Pythia8"), "HOShellModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::HOShellModel(); }, [](){ return new PyCallBack_Pythia8_HOShellModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HOShellModel const &o){ return new PyCallBack_Pythia8_HOShellModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HOShellModel const &o){ return new Pythia8::HOShellModel(o); } ) );
		cl.def_readwrite("nucleusChR", &Pythia8::HOShellModel::nucleusChR);
		cl.def_readwrite("protonChR", &Pythia8::HOShellModel::protonChR);
		cl.def_readwrite("C2Save", &Pythia8::HOShellModel::C2Save);
		cl.def("init", (bool (Pythia8::HOShellModel::*)()) &Pythia8::HOShellModel::init, "C++: Pythia8::HOShellModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::HOShellModel::*)() const) &Pythia8::HOShellModel::generate, "C++: Pythia8::HOShellModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
		cl.def("generateNucleon", (class Pythia8::Vec4 (Pythia8::HOShellModel::*)() const) &Pythia8::HOShellModel::generateNucleon, "C++: Pythia8::HOShellModel::generateNucleon() const --> class Pythia8::Vec4");
		cl.def("C2", (double (Pythia8::HOShellModel::*)() const) &Pythia8::HOShellModel::C2, "C++: Pythia8::HOShellModel::C2() const --> double");
		cl.def("rho", (double (Pythia8::HOShellModel::*)(double) const) &Pythia8::HOShellModel::rho, "C++: Pythia8::HOShellModel::rho(double) const --> double", pybind11::arg("r"));
		cl.def("assign", (class Pythia8::HOShellModel & (Pythia8::HOShellModel::*)(const class Pythia8::HOShellModel &)) &Pythia8::HOShellModel::operator=, "C++: Pythia8::HOShellModel::operator=(const class Pythia8::HOShellModel &) --> class Pythia8::HOShellModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::HulthenModel file:Pythia8/HINucleusModel.h line:485
		pybind11::class_<Pythia8::HulthenModel, std::shared_ptr<Pythia8::HulthenModel>, PyCallBack_Pythia8_HulthenModel, Pythia8::NucleusModel> cl(M("Pythia8"), "HulthenModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::HulthenModel(); }, [](){ return new PyCallBack_Pythia8_HulthenModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_HulthenModel const &o){ return new PyCallBack_Pythia8_HulthenModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::HulthenModel const &o){ return new Pythia8::HulthenModel(o); } ) );
		cl.def_readwrite("hA", &Pythia8::HulthenModel::hA);
		cl.def_readwrite("hB", &Pythia8::HulthenModel::hB);
		cl.def("init", (bool (Pythia8::HulthenModel::*)()) &Pythia8::HulthenModel::init, "C++: Pythia8::HulthenModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::HulthenModel::*)() const) &Pythia8::HulthenModel::generate, "C++: Pythia8::HulthenModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
		cl.def("a", (double (Pythia8::HulthenModel::*)() const) &Pythia8::HulthenModel::a, "C++: Pythia8::HulthenModel::a() const --> double");
		cl.def("b", (double (Pythia8::HulthenModel::*)() const) &Pythia8::HulthenModel::b, "C++: Pythia8::HulthenModel::b() const --> double");
		cl.def("rho", (double (Pythia8::HulthenModel::*)(double) const) &Pythia8::HulthenModel::rho, "C++: Pythia8::HulthenModel::rho(double) const --> double", pybind11::arg("r"));
		cl.def("assign", (class Pythia8::HulthenModel & (Pythia8::HulthenModel::*)(const class Pythia8::HulthenModel &)) &Pythia8::HulthenModel::operator=, "C++: Pythia8::HulthenModel::operator=(const class Pythia8::HulthenModel &) --> class Pythia8::HulthenModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::GaussianModel file:Pythia8/HINucleusModel.h line:523
		pybind11::class_<Pythia8::GaussianModel, std::shared_ptr<Pythia8::GaussianModel>, PyCallBack_Pythia8_GaussianModel, Pythia8::HardCoreModel> cl(M("Pythia8"), "GaussianModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::GaussianModel(); }, [](){ return new PyCallBack_Pythia8_GaussianModel(); } ) );
		cl.def( pybind11::init( [](PyCallBack_Pythia8_GaussianModel const &o){ return new PyCallBack_Pythia8_GaussianModel(o); } ) );
		cl.def( pybind11::init( [](Pythia8::GaussianModel const &o){ return new Pythia8::GaussianModel(o); } ) );
		cl.def_readwrite("nucleusChR", &Pythia8::GaussianModel::nucleusChR);
		cl.def("init", (bool (Pythia8::GaussianModel::*)()) &Pythia8::GaussianModel::init, "C++: Pythia8::GaussianModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::GaussianModel::*)() const) &Pythia8::GaussianModel::generate, "C++: Pythia8::GaussianModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
		cl.def("generateNucleon", (class Pythia8::Vec4 (Pythia8::GaussianModel::*)() const) &Pythia8::GaussianModel::generateNucleon, "C++: Pythia8::GaussianModel::generateNucleon() const --> class Pythia8::Vec4");
		cl.def("chargeRadius", (double (Pythia8::GaussianModel::*)() const) &Pythia8::GaussianModel::chargeRadius, "C++: Pythia8::GaussianModel::chargeRadius() const --> double");
		cl.def("assign", (class Pythia8::GaussianModel & (Pythia8::GaussianModel::*)(const class Pythia8::GaussianModel &)) &Pythia8::GaussianModel::operator=, "C++: Pythia8::GaussianModel::operator=(const class Pythia8::GaussianModel &) --> class Pythia8::GaussianModel &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::ClusterModel file:Pythia8/HINucleusModel.h line:557
		pybind11::class_<Pythia8::ClusterModel, std::shared_ptr<Pythia8::ClusterModel>, PyCallBack_Pythia8_ClusterModel, Pythia8::HardCoreModel> cl(M("Pythia8"), "ClusterModel", "");
		cl.def( pybind11::init( [](){ return new Pythia8::ClusterModel(); }, [](){ return new PyCallBack_Pythia8_ClusterModel(); } ) );
		cl.def("init", (bool (Pythia8::ClusterModel::*)()) &Pythia8::ClusterModel::init, "C++: Pythia8::ClusterModel::init() --> bool");
		cl.def("generate", (class std::vector<class Pythia8::Nucleon> (Pythia8::ClusterModel::*)() const) &Pythia8::ClusterModel::generate, "C++: Pythia8::ClusterModel::generate() const --> class std::vector<class Pythia8::Nucleon>");
	}
	{ // Pythia8::SubCollision file:Pythia8/HISubCollisionModel.h line:30
		pybind11::class_<Pythia8::SubCollision, std::shared_ptr<Pythia8::SubCollision>> cl(M("Pythia8"), "SubCollision", "");
		cl.def( pybind11::init<class Pythia8::Nucleon &, class Pythia8::Nucleon &, double, double, double, enum Pythia8::SubCollision::CollisionType>(), pybind11::arg("projIn"), pybind11::arg("targIn"), pybind11::arg("bIn"), pybind11::arg("bpIn"), pybind11::arg("olappIn"), pybind11::arg("typeIn") );

		cl.def( pybind11::init( [](){ return new Pythia8::SubCollision(); } ) );
		cl.def( pybind11::init( [](Pythia8::SubCollision const &o){ return new Pythia8::SubCollision(o); } ) );

		pybind11::enum_<Pythia8::SubCollision::CollisionType>(cl, "CollisionType", pybind11::arithmetic(), "")
			.value("NONE", Pythia8::SubCollision::NONE)
			.value("ELASTIC", Pythia8::SubCollision::ELASTIC)
			.value("SDEP", Pythia8::SubCollision::SDEP)
			.value("SDET", Pythia8::SubCollision::SDET)
			.value("DDE", Pythia8::SubCollision::DDE)
			.value("CDE", Pythia8::SubCollision::CDE)
			.value("ABS", Pythia8::SubCollision::ABS)
			.value("LEXC", Pythia8::SubCollision::LEXC)
			.value("LANN", Pythia8::SubCollision::LANN)
			.value("LRES", Pythia8::SubCollision::LRES)
			.export_values();

		cl.def_readwrite("b", &Pythia8::SubCollision::b);
		cl.def_readwrite("bp", &Pythia8::SubCollision::bp);
		cl.def_readwrite("olapp", &Pythia8::SubCollision::olapp);
		cl.def_readwrite("type", &Pythia8::SubCollision::type);
		cl.def_readwrite("failed", &Pythia8::SubCollision::failed);
		cl.def("nucleons", (int (Pythia8::SubCollision::*)() const) &Pythia8::SubCollision::nucleons, "C++: Pythia8::SubCollision::nucleons() const --> int");
	}
	{ // Pythia8::SubCollisionSet file:Pythia8/HISubCollisionModel.h line:96
		pybind11::class_<Pythia8::SubCollisionSet, std::shared_ptr<Pythia8::SubCollisionSet>> cl(M("Pythia8"), "SubCollisionSet", "");
		cl.def( pybind11::init( [](){ return new Pythia8::SubCollisionSet(); } ) );
		cl.def( pybind11::init( [](Pythia8::SubCollisionSet const &o){ return new Pythia8::SubCollisionSet(o); } ) );
		cl.def("empty", (bool (Pythia8::SubCollisionSet::*)() const) &Pythia8::SubCollisionSet::empty, "C++: Pythia8::SubCollisionSet::empty() const --> bool");
		cl.def("T", [](Pythia8::SubCollisionSet const &o) -> double { return o.T(); }, "");
		cl.def("T", (double (Pythia8::SubCollisionSet::*)(unsigned int) const) &Pythia8::SubCollisionSet::T, "C++: Pythia8::SubCollisionSet::T(unsigned int) const --> double", pybind11::arg("i"));
		cl.def("assign", (class Pythia8::SubCollisionSet & (Pythia8::SubCollisionSet::*)(const class Pythia8::SubCollisionSet &)) &Pythia8::SubCollisionSet::operator=, "C++: Pythia8::SubCollisionSet::operator=(const class Pythia8::SubCollisionSet &) --> class Pythia8::SubCollisionSet &", pybind11::return_value_policy::reference, pybind11::arg(""));
	}
	{ // Pythia8::SubCollisionModel file:Pythia8/HISubCollisionModel.h line:143
		pybind11::class_<Pythia8::SubCollisionModel, std::shared_ptr<Pythia8::SubCollisionModel>, PyCallBack_Pythia8_SubCollisionModel> cl(M("Pythia8"), "SubCollisionModel", "");
		cl.def( pybind11::init<int>(), pybind11::arg("nParm") );

		cl.def(pybind11::init<PyCallBack_Pythia8_SubCollisionModel const &>());
		cl.def_readwrite("sigTarg", &Pythia8::SubCollisionModel::sigTarg);
		cl.def_readwrite("sigErr", &Pythia8::SubCollisionModel::sigErr);
		cl.def_readwrite("sigTargNN", &Pythia8::SubCollisionModel::sigTargNN);
		cl.def_readwrite("parmSave", &Pythia8::SubCollisionModel::parmSave);
		cl.def_readwrite("NInt", &Pythia8::SubCollisionModel::NInt);
		cl.def_readwrite("NPop", &Pythia8::SubCollisionModel::NPop);
		cl.def_readwrite("sigFuzz", &Pythia8::SubCollisionModel::sigFuzz);
		cl.def_readwrite("impactFudge", &Pythia8::SubCollisionModel::impactFudge);
		cl.def_readwrite("fitPrint", &Pythia8::SubCollisionModel::fitPrint);
		cl.def_readwrite("eCMlow", &Pythia8::SubCollisionModel::eCMlow);
		cl.def_readwrite("avNDb", &Pythia8::SubCollisionModel::avNDb);
		cl.def_readwrite("avNDolap", &Pythia8::SubCollisionModel::avNDolap);
		cl.def_readwrite("idASave", &Pythia8::SubCollisionModel::idASave);
		cl.def_readwrite("idBSave", &Pythia8::SubCollisionModel::idBSave);
		cl.def_readwrite("doVarECM", &Pythia8::SubCollisionModel::doVarECM);
		cl.def_readwrite("doVarBeams", &Pythia8::SubCollisionModel::doVarBeams);
		cl.def_readwrite("eMin", &Pythia8::SubCollisionModel::eMin);
		cl.def_readwrite("eMax", &Pythia8::SubCollisionModel::eMax);
		cl.def_readwrite("eSave", &Pythia8::SubCollisionModel::eSave);
		cl.def_readwrite("eCMPts", &Pythia8::SubCollisionModel::eCMPts);
		cl.def_readwrite("idAList", &Pythia8::SubCollisionModel::idAList);
		cl.def_readwrite("subCollParmsMap", &Pythia8::SubCollisionModel::subCollParmsMap);
		cl.def_readwrite("elasticMode", &Pythia8::SubCollisionModel::elasticMode);
		cl.def_readwrite("elasticFudge", &Pythia8::SubCollisionModel::elasticFudge);
		cl.def_readwrite("lowEnergyCache", &Pythia8::SubCollisionModel::lowEnergyCache);
		cl.def_static("create", (class std::shared_ptr<class Pythia8::SubCollisionModel> (*)(int)) &Pythia8::SubCollisionModel::create, "C++: Pythia8::SubCollisionModel::create(int) --> class std::shared_ptr<class Pythia8::SubCollisionModel>", pybind11::arg("model"));
		cl.def("init", (bool (Pythia8::SubCollisionModel::*)(int, int, double)) &Pythia8::SubCollisionModel::init, "C++: Pythia8::SubCollisionModel::init(int, int, double) --> bool", pybind11::arg("idAIn"), pybind11::arg("idBIn"), pybind11::arg("eCMIn"));
		cl.def("initPtr", (void (Pythia8::SubCollisionModel::*)(class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::SigmaTotal &, class Pythia8::Settings &, class Pythia8::Info &, class Pythia8::Rndm &)) &Pythia8::SubCollisionModel::initPtr, "C++: Pythia8::SubCollisionModel::initPtr(class Pythia8::NucleusModel &, class Pythia8::NucleusModel &, class Pythia8::SigmaTotal &, class Pythia8::Settings &, class Pythia8::Info &, class Pythia8::Rndm &) --> void", pybind11::arg("projIn"), pybind11::arg("targIn"), pybind11::arg("sigTotIn"), pybind11::arg("settingsIn"), pybind11::arg("infoIn"), pybind11::arg("rndmIn"));
		cl.def("initLowEnergy", (void (Pythia8::SubCollisionModel::*)(class Pythia8::SigmaCombined *)) &Pythia8::SubCollisionModel::initLowEnergy, "C++: Pythia8::SubCollisionModel::initLowEnergy(class Pythia8::SigmaCombined *) --> void", pybind11::arg("sigmaCombPtrIn"));
		cl.def("hasXSec", (bool (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::hasXSec, "C++: Pythia8::SubCollisionModel::hasXSec() const --> bool");
		cl.def("sigTot", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigTot, "C++: Pythia8::SubCollisionModel::sigTot() const --> double");
		cl.def("sigEl", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigEl, "C++: Pythia8::SubCollisionModel::sigEl() const --> double");
		cl.def("sigCDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigCDE, "C++: Pythia8::SubCollisionModel::sigCDE() const --> double");
		cl.def("sigSDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDE, "C++: Pythia8::SubCollisionModel::sigSDE() const --> double");
		cl.def("sigSDEP", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDEP, "C++: Pythia8::SubCollisionModel::sigSDEP() const --> double");
		cl.def("sigSDET", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigSDET, "C++: Pythia8::SubCollisionModel::sigSDET() const --> double");
		cl.def("sigDDE", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigDDE, "C++: Pythia8::SubCollisionModel::sigDDE() const --> double");
		cl.def("sigND", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigND, "C++: Pythia8::SubCollisionModel::sigND() const --> double");
		cl.def("sigLow", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigLow, "C++: Pythia8::SubCollisionModel::sigLow() const --> double");
		cl.def("sigLExc", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigLExc, "C++: Pythia8::SubCollisionModel::sigLExc() const --> double");
		cl.def("sigLAnn", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigLAnn, "C++: Pythia8::SubCollisionModel::sigLAnn() const --> double");
		cl.def("sigLRes", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::sigLRes, "C++: Pythia8::SubCollisionModel::sigLRes() const --> double");
		cl.def("bSlope", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::bSlope, "C++: Pythia8::SubCollisionModel::bSlope() const --> double");
		cl.def("avNDB", (double (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::avNDB, "C++: Pythia8::SubCollisionModel::avNDB() const --> double");
		cl.def("updateSig", (void (Pythia8::SubCollisionModel::*)(int, int, double)) &Pythia8::SubCollisionModel::updateSig, "C++: Pythia8::SubCollisionModel::updateSig(int, int, double) --> void", pybind11::arg("idAIn"), pybind11::arg("idBIn"), pybind11::arg("eCMIn"));
		cl.def("Chi2", (double (Pythia8::SubCollisionModel::*)(const struct Pythia8::SubCollisionModel::SigEst &, int) const) &Pythia8::SubCollisionModel::Chi2, "C++: Pythia8::SubCollisionModel::Chi2(const struct Pythia8::SubCollisionModel::SigEst &, int) const --> double", pybind11::arg("sigs"), pybind11::arg("npar"));
		cl.def("setKinematics", (bool (Pythia8::SubCollisionModel::*)(double)) &Pythia8::SubCollisionModel::setKinematics, "C++: Pythia8::SubCollisionModel::setKinematics(double) --> bool", pybind11::arg("eCMIn"));
		cl.def("setIDA", (bool (Pythia8::SubCollisionModel::*)(int)) &Pythia8::SubCollisionModel::setIDA, "C++: Pythia8::SubCollisionModel::setIDA(int) --> bool", pybind11::arg("idA"));
		cl.def("evolve", (bool (Pythia8::SubCollisionModel::*)(int, double, int)) &Pythia8::SubCollisionModel::evolve, "C++: Pythia8::SubCollisionModel::evolve(int, double, int) --> bool", pybind11::arg("nGenerations"), pybind11::arg("eCM"), pybind11::arg("idANow"));
		cl.def("nParms", (int (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::nParms, "C++: Pythia8::SubCollisionModel::nParms() const --> int");
		cl.def("setParm", (void (Pythia8::SubCollisionModel::*)(const class std::vector<double> &)) &Pythia8::SubCollisionModel::setParm, "C++: Pythia8::SubCollisionModel::setParm(const class std::vector<double> &) --> void", pybind11::arg("parmIn"));
		cl.def("getParm", (class std::vector<double> (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::getParm, "C++: Pythia8::SubCollisionModel::getParm() const --> class std::vector<double>");
		cl.def("minParm", (class std::vector<double> (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::minParm, "C++: Pythia8::SubCollisionModel::minParm() const --> class std::vector<double>");
		cl.def("defParm", (class std::vector<double> (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::defParm, "C++: Pythia8::SubCollisionModel::defParm() const --> class std::vector<double>");
		cl.def("maxParm", (class std::vector<double> (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::maxParm, "C++: Pythia8::SubCollisionModel::maxParm() const --> class std::vector<double>");
		cl.def("generateNucleonStates", (void (Pythia8::SubCollisionModel::*)(class Pythia8::Nucleus &, class Pythia8::Nucleus &)) &Pythia8::SubCollisionModel::generateNucleonStates, "C++: Pythia8::SubCollisionModel::generateNucleonStates(class Pythia8::Nucleus &, class Pythia8::Nucleus &) --> void", pybind11::arg(""), pybind11::arg(""));
		cl.def("getCollisions", (class Pythia8::SubCollisionSet (Pythia8::SubCollisionModel::*)(class Pythia8::Nucleus &, class Pythia8::Nucleus &)) &Pythia8::SubCollisionModel::getCollisions, "C++: Pythia8::SubCollisionModel::getCollisions(class Pythia8::Nucleus &, class Pythia8::Nucleus &) --> class Pythia8::SubCollisionSet", pybind11::arg("proj"), pybind11::arg("targ"));
		cl.def("getSig", (struct Pythia8::SubCollisionModel::SigEst (Pythia8::SubCollisionModel::*)() const) &Pythia8::SubCollisionModel::getSig, "C++: Pythia8::SubCollisionModel::getSig() const --> struct Pythia8::SubCollisionModel::SigEst");
		cl.def("assign", (class Pythia8::SubCollisionModel & (Pythia8::SubCollisionModel::*)(const class Pythia8::SubCollisionModel &)) &Pythia8::SubCollisionModel::operator=, "C++: Pythia8::SubCollisionModel::operator=(const class Pythia8::SubCollisionModel &) --> class Pythia8::SubCollisionModel &", pybind11::return_value_policy::reference, pybind11::arg(""));

		{ // Pythia8::SubCollisionModel::SigEst file:Pythia8/HISubCollisionModel.h line:148
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::SubCollisionModel::SigEst, std::shared_ptr<Pythia8::SubCollisionModel::SigEst>> cl(enclosing_class, "SigEst", "");
			cl.def( pybind11::init( [](){ return new Pythia8::SubCollisionModel::SigEst(); } ) );
			cl.def( pybind11::init( [](Pythia8::SubCollisionModel::SigEst const &o){ return new Pythia8::SubCollisionModel::SigEst(o); } ) );
			cl.def_readwrite("sig", &Pythia8::SubCollisionModel::SigEst::sig);
			cl.def_readwrite("dsig2", &Pythia8::SubCollisionModel::SigEst::dsig2);
			cl.def_readwrite("fsig", &Pythia8::SubCollisionModel::SigEst::fsig);
			cl.def_readwrite("avNDb", &Pythia8::SubCollisionModel::SigEst::avNDb);
			cl.def_readwrite("davNDb2", &Pythia8::SubCollisionModel::SigEst::davNDb2);
			cl.def_readwrite("avNOF", &Pythia8::SubCollisionModel::SigEst::avNOF);
			cl.def_readwrite("davNOF2", &Pythia8::SubCollisionModel::SigEst::davNOF2);
			cl.def("assign", (struct Pythia8::SubCollisionModel::SigEst & (Pythia8::SubCollisionModel::SigEst::*)(const struct Pythia8::SubCollisionModel::SigEst &)) &Pythia8::SubCollisionModel::SigEst::operator=, "C++: Pythia8::SubCollisionModel::SigEst::operator=(const struct Pythia8::SubCollisionModel::SigEst &) --> struct Pythia8::SubCollisionModel::SigEst &", pybind11::return_value_policy::reference, pybind11::arg(""));
		}

		{ // Pythia8::SubCollisionModel::SigmaCache file:Pythia8/HISubCollisionModel.h line:382
			auto & enclosing_class = cl;
			pybind11::class_<Pythia8::SubCollisionModel::SigmaCache, std::shared_ptr<Pythia8::SubCollisionModel::SigmaCache>> cl(enclosing_class, "SigmaCache", "");
			cl.def( pybind11::init( [](Pythia8::SubCollisionModel::SigmaCache const &o){ return new Pythia8::SubCollisionModel::SigmaCache(o); } ) );
			cl.def( pybind11::init( [](){ return new Pythia8::SubCollisionModel::SigmaCache(); } ) );
			cl.def_readwrite("cache", &Pythia8::SubCollisionModel::SigmaCache::cache);
			cl.def_readwrite("eCMStep", &Pythia8::SubCollisionModel::SigmaCache::eCMStep);
			cl.def("set", (void (Pythia8::SubCollisionModel::SigmaCache::*)(class std::vector<class std::vector<double> > &, int, int, double)) &Pythia8::SubCollisionModel::SigmaCache::set, "C++: Pythia8::SubCollisionModel::SigmaCache::set(class std::vector<class std::vector<double> > &, int, int, double) --> void", pybind11::arg("sigNN"), pybind11::arg("idAIn"), pybind11::arg("idBIn"), pybind11::arg("eCM"));
			cl.def("fillCache", (void (Pythia8::SubCollisionModel::SigmaCache::*)(class std::vector<class std::vector<double> > &, int, int, int)) &Pythia8::SubCollisionModel::SigmaCache::fillCache, "C++: Pythia8::SubCollisionModel::SigmaCache::fillCache(class std::vector<class std::vector<double> > &, int, int, int) --> void", pybind11::arg("sigNN"), pybind11::arg("idAIn"), pybind11::arg("idBIn"), pybind11::arg("iECM"));
			cl.def("assign", (struct Pythia8::SubCollisionModel::SigmaCache & (Pythia8::SubCollisionModel::SigmaCache::*)(const struct Pythia8::SubCollisionModel::SigmaCache &)) &Pythia8::SubCollisionModel::SigmaCache::operator=, "C++: Pythia8::SubCollisionModel::SigmaCache::operator=(const struct Pythia8::SubCollisionModel::SigmaCache &) --> struct Pythia8::SubCollisionModel::SigmaCache &", pybind11::return_value_policy::reference, pybind11::arg(""));
		}

	}
}
