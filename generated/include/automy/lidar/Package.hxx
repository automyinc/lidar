
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_lidar_Package_HXX_
#define INCLUDE_automy_lidar_Package_HXX_

#include <automy/lidar/package.hxx>
#include <automy/lidar/RawBlock.hxx>
#include <vnx/Value.h>


namespace automy {
namespace lidar {

class Package : public ::vnx::Value {
public:
	
	::int64_t time = 0;
	::int64_t time_offset = 0;
	::std::vector<::automy::lidar::RawBlock> blocks;
	::std::vector<::vnx::float32_t> beam_angles;
	::std::vector<::vnx::float32_t> beam_rot_shift;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	static std::shared_ptr<Package> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const Package& _value);
	friend std::istream& operator>>(std::istream& _in, Package& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
};


} // namespace automy
} // namespace lidar

#endif // INCLUDE_automy_lidar_Package_HXX_
