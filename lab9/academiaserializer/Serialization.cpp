//
// Created by ela on 04.05.17.
//

#include "Serialization.h"
namespace academia {


    Room::Room(int id_) : id_(id_) {}
    Room::Room(const std::string &name_) : name_(name_) {}
    Room::Room(int id_, const std::string &name_, Room::Type type_) : id_(id_), name_(name_), type_(type_) {}
    Room::~Room() {}

    std::string Room::TypeToString(Room::Type type) const {
        switch(type) {
            case Type::COMPUTER_LAB:
                return "COMPUTER_LAB";
            case Type::LECTURE_HALL:
                return "LECTURE_HALL";
            case Type::CLASSROOM:
                return "CLASSROOM";
        }
    }

    void Room::Serialize(Serializer *serializer) const {
        serializer->Header("room");
        serializer->IntegerField("id", id_);
        serializer->StringField("name", name_);
        serializer->StringField("type", TypeToString(type_));
        serializer->Footer("room");
    }

    Serializer::Serializer() {}
    Serializer::~Serializer() {}
    Serializer::Serializer(std::ostream *out): out_(out) {}





    Building::Building() {}


    Building::~Building() {}

    void Building::Serialize(Serializer *serializer) const {
        serializer->Header("building");
        serializer->IntegerField("id", id_);
        serializer->StringField("name", name_);
        std::vector<std::reference_wrapper<const Serializable>> vector_tmp_;
        for(const Room &n : rooms_){
            vector_tmp_.emplace_back(n);
        }
        serializer->ArrayField("rooms", vector_tmp_);
        serializer->Footer("building");
    }

    XmlSerializer::XmlSerializer() {}
    XmlSerializer::~XmlSerializer() {}
    XmlSerializer::XmlSerializer(std::ostream *out) : Serializer(out) {
    }
    void XmlSerializer::IntegerField(const std::string &field_name, int value) {
        std::string helper ="<"+field_name+">";
        *out_<<helper<<value<<"<\\"+field_name+">";
    }
    void XmlSerializer::DoubleField(const std::string &field_name, double value) {}
    void XmlSerializer::StringField(const std::string &field_name, const std::string &value) {
        std::string helper ="<"+field_name+">";
        *out_<<helper<<value<<"<\\"+field_name+">";
    }
    void XmlSerializer::BooleanField(const std::string &field_name, bool value) {}
    void XmlSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value) {}
    void XmlSerializer::ArrayField(const std::string &field_name,
                                   const std::vector<std::reference_wrapper<const academia::Serializable>> &value) {
        std::string helper = "<"+field_name+">";
        *out_<<helper;
        bool is_first = true;
        for(const Serializable &a: value){
            if (is_first){
                is_first= false;
            }else{
            }
            a.Serialize(this);
        }

        *out_<<"<\\"+field_name+">";
    }
    void XmlSerializer::Header(const std::string &object_name) {
        *out_<<"<"+object_name+">";
    }
    void XmlSerializer::Footer(const std::string &object_name) {
        *out_<<"<\\"+object_name+">";
    }






    JsonSerializer::JsonSerializer() {}
    JsonSerializer::~JsonSerializer() {}
    JsonSerializer::JsonSerializer(std::ostream *out) : Serializer(out) {}
    void JsonSerializer::IntegerField(const std::string &field_name, int value) {
        std::string helper="\""+field_name+"\": ";
        *out_ << helper <<value;
    }
    void JsonSerializer::DoubleField(const std::string &field_name, double value) {}
    void JsonSerializer::StringField(const std::string &field_name, const std::string &value) {
        std::string helper="\""+field_name+"\": ";
        std::string helper2="\""+value+"\"";
        *out_<<", "<<helper<<helper2;
    }
    void JsonSerializer::BooleanField(const std::string &field_name, bool value) {}
    void JsonSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value) {}
    void JsonSerializer::ArrayField(const std::string &field_name,
                                    const std::vector<std::reference_wrapper<const academia::Serializable>> &value) {
        std::string helper = "";
        if(field_name=="buildings"){
            helper = "\""+field_name+"\": ";
        }else{
            helper = ", \""+field_name+"\": ";
        }
        *out_<<helper + "[";
        bool is_first = true;
        for(const Serializable &a: value){
            if (is_first){
               //*out_<<", ";
                is_first= false;
            }else{
               *out_<<", ";
            }
            a.Serialize(this);
        }
        *out_<<"]";
    }
    void JsonSerializer::Header(const std::string &object_name) {
        *out_  << "{";
    }
    void JsonSerializer::Footer(const std::string &object_name) {
        *out_ << "}";
    }








    void BuildingRepository::StoreAll(Serializer *serializer) const {
        serializer->Header ("building_repository");
        std::vector<std::reference_wrapper<const academia::Serializable>> vector_tmp_;
        for(const auto &n : building_list_){
            vector_tmp_.emplace_back(n);
        }
        serializer->ArrayField("buildings",vector_tmp_);

        serializer->Footer("building_repository");
    }



    void BuildingRepository::Add(Building &building) {
        building_list_.emplace_back(building);
    }

    std::experimental::optional<Building> BuildingRepository::operator[](int idx) const{
       for(auto &n:building_list_){
           if(n.Id()==idx){
               return std::experimental::make_optional(n);
           }

       }
        return std::experimental::optional<Building>();
    }




}