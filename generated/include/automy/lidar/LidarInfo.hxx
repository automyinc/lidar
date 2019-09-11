
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_lidar_LidarInfo_HXX_
#define INCLUDE_automy_lidar_LidarInfo_HXX_

#include <automy/lidar/package.hxx>
#include <automy/basic/Transform3D.hxx>
#include <automy/math/Vector3d.h>


namespace automy {
namespace lidar {

class LidarInfo : public ::automy::basic::Transform3D {
public:
	
	::automy::math::Vector3d position;
	::automy::math::Vector3d rotation;
	::int32_t delay = 0;
	
	typedef ::automy::basic::Transform3D Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	virtual void update();
	
	static std::shared_ptr<LidarInfo> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const LidarInfo& _value);
	friend std::istream& operator>>(std::istream& _in, LidarInfo& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
};


} // namespace automy
} // namespace lidar

#endif // INCLUDE_automy_lidar_LidarInfo_HXX_
