
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_lidar_PACKAGE_HXX_
#define INCLUDE_automy_lidar_PACKAGE_HXX_

#include <vnx/Type.h>

#include <automy/basic/package.hxx>
#include <automy/math/package.hxx>
#include <vnx/package.hxx>


namespace automy {
namespace lidar {


class LidarInfo;
class Package;
class PointCloud;
class RawBlock;
struct point_t;
struct raw_point_t;

} // namespace automy
} // namespace lidar


namespace vnx {

void read(TypeInput& in, ::automy::lidar::LidarInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::lidar::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::lidar::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::automy::lidar::LidarInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::lidar::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::lidar::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::automy::lidar::LidarInfo& value); ///< \private
void read(std::istream& in, ::automy::lidar::Package& value); ///< \private
void read(std::istream& in, ::automy::lidar::PointCloud& value); ///< \private
void read(std::istream& in, ::automy::lidar::RawBlock& value); ///< \private
void read(std::istream& in, ::automy::lidar::point_t& value); ///< \private
void read(std::istream& in, ::automy::lidar::raw_point_t& value); ///< \private

void write(std::ostream& out, const ::automy::lidar::LidarInfo& value); ///< \private
void write(std::ostream& out, const ::automy::lidar::Package& value); ///< \private
void write(std::ostream& out, const ::automy::lidar::PointCloud& value); ///< \private
void write(std::ostream& out, const ::automy::lidar::RawBlock& value); ///< \private
void write(std::ostream& out, const ::automy::lidar::point_t& value); ///< \private
void write(std::ostream& out, const ::automy::lidar::raw_point_t& value); ///< \private

void accept(Visitor& visitor, const ::automy::lidar::LidarInfo& value); ///< \private
void accept(Visitor& visitor, const ::automy::lidar::Package& value); ///< \private
void accept(Visitor& visitor, const ::automy::lidar::PointCloud& value); ///< \private
void accept(Visitor& visitor, const ::automy::lidar::RawBlock& value); ///< \private
void accept(Visitor& visitor, const ::automy::lidar::point_t& value); ///< \private
void accept(Visitor& visitor, const ::automy::lidar::raw_point_t& value); ///< \private

/// \private
template<>
struct type<::automy::lidar::LidarInfo> {
	void read(TypeInput& in, ::automy::lidar::LidarInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::LidarInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::LidarInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::LidarInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::LidarInfo& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::lidar::Package> {
	void read(TypeInput& in, ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::Package& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::Package& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::Package& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::lidar::PointCloud> {
	void read(TypeInput& in, ::automy::lidar::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::PointCloud& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::PointCloud& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::PointCloud& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::lidar::RawBlock> {
	void read(TypeInput& in, ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::RawBlock& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::RawBlock& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::RawBlock& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::lidar::point_t> {
	void read(TypeInput& in, ::automy::lidar::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::point_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::point_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::point_t& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::lidar::raw_point_t> {
	void read(TypeInput& in, ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::lidar::raw_point_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::lidar::raw_point_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::lidar::raw_point_t& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};


} // namespace vnx

#endif // INCLUDE_automy_lidar_PACKAGE_HXX_