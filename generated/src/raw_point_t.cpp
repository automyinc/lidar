
// AUTO GENERATED by vnxcppcodegen

#include <automy/lidar/package.hxx>
#include <automy/lidar/raw_point_t.hxx>

#include <vnx/vnx.h>


namespace automy {
namespace lidar {


const vnx::Hash64 raw_point_t::VNX_TYPE_HASH(0x6c9eb7a59f808b1cull);
const vnx::Hash64 raw_point_t::VNX_CODE_HASH(0x8879207ec1fb728ull);

vnx::Hash64 raw_point_t::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string raw_point_t::get_type_name() const {
	return "automy.lidar.raw_point_t";
}

const vnx::TypeCode* raw_point_t::get_type_code() const {
	return automy::lidar::vnx_native_type_code_raw_point_t;
}

std::shared_ptr<raw_point_t> raw_point_t::create() {
	return std::make_shared<raw_point_t>();
}

std::shared_ptr<raw_point_t> raw_point_t::clone() const {
	return std::make_shared<raw_point_t>(*this);
}

void raw_point_t::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void raw_point_t::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void raw_point_t::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::lidar::vnx_native_type_code_raw_point_t;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, distance);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, intensity);
	_visitor.type_end(*_type_code);
}

void raw_point_t::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"distance\": "; vnx::write(_out, distance);
	_out << ", \"intensity\": "; vnx::write(_out, intensity);
	_out << "}";
}

void raw_point_t::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object raw_point_t::to_object() const {
	vnx::Object _object;
	_object["__type"] = "automy.lidar.raw_point_t";
	_object["distance"] = distance;
	_object["intensity"] = intensity;
	return _object;
}

void raw_point_t::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "distance") {
			_entry.second.to(distance);
		} else if(_entry.first == "intensity") {
			_entry.second.to(intensity);
		}
	}
}

vnx::Variant raw_point_t::get_field(const std::string& _name) const {
	if(_name == "distance") {
		return vnx::Variant(distance);
	}
	if(_name == "intensity") {
		return vnx::Variant(intensity);
	}
	return vnx::Variant();
}

void raw_point_t::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "distance") {
		_value.to(distance);
	} else if(_name == "intensity") {
		_value.to(intensity);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const raw_point_t& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, raw_point_t& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* raw_point_t::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> raw_point_t::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.lidar.raw_point_t";
	type_code->type_hash = vnx::Hash64(0x6c9eb7a59f808b1cull);
	type_code->code_hash = vnx::Hash64(0x8879207ec1fb728ull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::automy::lidar::raw_point_t);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<raw_point_t>>(); };
	type_code->fields.resize(2);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "distance";
		field.code = {9};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "intensity";
		field.code = {9};
	}
	type_code->build();
	return type_code;
}


} // namespace automy
} // namespace lidar


namespace vnx {

void read(TypeInput& in, ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const auto* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.distance, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.intensity, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::lidar::raw_point_t& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::lidar::vnx_native_type_code_raw_point_t;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::lidar::raw_point_t>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	auto* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.distance);
	vnx::write_value(_buf + 4, value.intensity);
}

void read(std::istream& in, ::automy::lidar::raw_point_t& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::lidar::raw_point_t& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::lidar::raw_point_t& value) {
	value.accept(visitor);
}

bool is_equivalent<::automy::lidar::raw_point_t>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::automy::lidar::raw_point_t::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx
