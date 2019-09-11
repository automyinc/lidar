
// AUTO GENERATED by vnxcppcodegen

#include <automy/lidar/package.hxx>
#include <automy/lidar/Package.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>


namespace automy {
namespace lidar {


const vnx::Hash64 Package::VNX_TYPE_HASH(0x4b3efc9be6ecaaf9ull);
const vnx::Hash64 Package::VNX_CODE_HASH(0x9c6fab5af0f9af8bull);

vnx::Hash64 Package::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* Package::get_type_name() const {
	return "automy.lidar.Package";
}

std::shared_ptr<Package> Package::create() {
	return std::make_shared<Package>();
}

std::shared_ptr<vnx::Value> Package::clone() const {
	return std::make_shared<Package>(*this);
}

void Package::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Package::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Package::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = get_type_code();
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, time_offset);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, blocks);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, beam_angles);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, beam_rot_shift);
	_visitor.type_end(*_type_code);
}

void Package::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"time\": "; vnx::write(_out, time);
	_out << ", \"time_offset\": "; vnx::write(_out, time_offset);
	_out << ", \"blocks\": "; vnx::write(_out, blocks);
	_out << ", \"beam_angles\": "; vnx::write(_out, beam_angles);
	_out << ", \"beam_rot_shift\": "; vnx::write(_out, beam_rot_shift);
	_out << "}";
}

void Package::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "beam_angles") {
			vnx::from_string(_entry.second, beam_angles);
		} else if(_entry.first == "beam_rot_shift") {
			vnx::from_string(_entry.second, beam_rot_shift);
		} else if(_entry.first == "blocks") {
			vnx::from_string(_entry.second, blocks);
		} else if(_entry.first == "time") {
			vnx::from_string(_entry.second, time);
		} else if(_entry.first == "time_offset") {
			vnx::from_string(_entry.second, time_offset);
		}
	}
}

vnx::Object Package::to_object() const {
	vnx::Object _object;
	_object["time"] = time;
	_object["time_offset"] = time_offset;
	_object["blocks"] = blocks;
	_object["beam_angles"] = beam_angles;
	_object["beam_rot_shift"] = beam_rot_shift;
	return _object;
}

void Package::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "beam_angles") {
			_entry.second.to(beam_angles);
		} else if(_entry.first == "beam_rot_shift") {
			_entry.second.to(beam_rot_shift);
		} else if(_entry.first == "blocks") {
			_entry.second.to(blocks);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		} else if(_entry.first == "time_offset") {
			_entry.second.to(time_offset);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Package& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Package& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Package::get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0x4b3efc9be6ecaaf9ull));
	if(!type_code) {
		type_code = vnx::register_type_code(create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Package::create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>(true);
	type_code->name = "automy.lidar.Package";
	type_code->type_hash = vnx::Hash64(0x4b3efc9be6ecaaf9ull);
	type_code->code_hash = vnx::Hash64(0x9c6fab5af0f9af8bull);
	type_code->is_class = true;
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Package>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::automy::lidar::RawBlock::get_type_code();
	type_code->fields.resize(5);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.name = "time";
		field.code = {8};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.name = "time_offset";
		field.code = {8};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "blocks";
		field.code = {12, 19, 0};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "beam_angles";
		field.code = {12, 9};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "beam_rot_shift";
		field.code = {12, 9};
	}
	type_code->build();
	return type_code;
}


} // namespace automy
} // namespace lidar


namespace vnx {

void read(TypeInput& in, ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code) {
		throw std::logic_error("read(): type_code == 0");
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: vnx::skip(in, type_code, code); return;
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		{
			const vnx::TypeField* const _field = type_code->field_map[0];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[1];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.time_offset, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 2: vnx::read(in, value.blocks, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.beam_angles, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.beam_rot_shift, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::lidar::Package& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::write_type_code<::automy::lidar::Package>(out);
		vnx::write_class_header<::automy::lidar::Package>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(16);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.time_offset);
	vnx::write(out, value.blocks, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.beam_angles, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.beam_rot_shift, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::automy::lidar::Package& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::lidar::Package& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::lidar::Package& value) {
	value.accept(visitor);
}

} // vnx