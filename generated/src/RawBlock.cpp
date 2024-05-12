
// AUTO GENERATED by vnxcppcodegen

#include <automy/lidar/package.hxx>
#include <automy/lidar/RawBlock.hxx>
#include <automy/lidar/raw_point_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace automy {
namespace lidar {


const vnx::Hash64 RawBlock::VNX_TYPE_HASH(0x78229d23be53c72dull);
const vnx::Hash64 RawBlock::VNX_CODE_HASH(0xd0ab3f63da52986eull);

vnx::Hash64 RawBlock::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string RawBlock::get_type_name() const {
	return "automy.lidar.RawBlock";
}

const vnx::TypeCode* RawBlock::get_type_code() const {
	return automy::lidar::vnx_native_type_code_RawBlock;
}

std::shared_ptr<RawBlock> RawBlock::create() {
	return std::make_shared<RawBlock>();
}

std::shared_ptr<vnx::Value> RawBlock::clone() const {
	return std::make_shared<RawBlock>(*this);
}

void RawBlock::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void RawBlock::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void RawBlock::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::lidar::vnx_native_type_code_RawBlock;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, angle);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, points);
	_visitor.type_end(*_type_code);
}

void RawBlock::write(std::ostream& _out) const {
	_out << "{\"__type\": \"automy.lidar.RawBlock\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"angle\": "; vnx::write(_out, angle);
	_out << ", \"points\": "; vnx::write(_out, points);
	_out << "}";
}

void RawBlock::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object RawBlock::to_object() const {
	vnx::Object _object;
	_object["__type"] = "automy.lidar.RawBlock";
	_object["time"] = time;
	_object["angle"] = angle;
	_object["points"] = points;
	return _object;
}

void RawBlock::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "angle") {
			_entry.second.to(angle);
		} else if(_entry.first == "points") {
			_entry.second.to(points);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

vnx::Variant RawBlock::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "angle") {
		return vnx::Variant(angle);
	}
	if(_name == "points") {
		return vnx::Variant(points);
	}
	return vnx::Variant();
}

void RawBlock::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "angle") {
		_value.to(angle);
	} else if(_name == "points") {
		_value.to(points);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const RawBlock& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, RawBlock& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* RawBlock::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> RawBlock::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.lidar.RawBlock";
	type_code->type_hash = vnx::Hash64(0x78229d23be53c72dull);
	type_code->code_hash = vnx::Hash64(0xd0ab3f63da52986eull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::automy::lidar::RawBlock);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<RawBlock>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::automy::lidar::raw_point_t::static_get_type_code();
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "angle";
		field.code = {9};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "points";
		field.code = {12, 19, 0};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> RawBlock::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
	}
	return nullptr;
}


} // namespace automy
} // namespace lidar


namespace vnx {

void read(TypeInput& in, ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.angle, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 2: vnx::read(in, value.points, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::lidar::RawBlock& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::lidar::vnx_native_type_code_RawBlock;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::lidar::RawBlock>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	auto* const _buf = out.write(12);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.angle);
	vnx::write(out, value.points, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::automy::lidar::RawBlock& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::lidar::RawBlock& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::lidar::RawBlock& value) {
	value.accept(visitor);
}

} // vnx
