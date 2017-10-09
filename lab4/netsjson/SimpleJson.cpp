//
// Created by ela on 24.03.17.
//

#include <vector>
#include "SimpleJson.h"
namespace nets {


    JsonValue::JsonValue() {
    }

    JsonValue::JsonValue(std::string stringobj) {
        stringobj_ = std::experimental::make_optional(stringobj);
    }

    JsonValue::JsonValue(int intobj) {
        intobj_ = std::experimental::make_optional(intobj);
    }

    JsonValue::JsonValue(double doubleobj) {
        doubleobj_ = std::experimental::make_optional(doubleobj);
    }

    JsonValue::JsonValue(bool boolobj) {
        boolobj_ = std::experimental::make_optional(boolobj);
    }

    JsonValue::JsonValue(std::vector<JsonValue> vectorobj) {
        vectorobj_ = std::experimental::make_optional(vectorobj);
    }

    JsonValue::JsonValue(std::map<std::string, JsonValue> mapobj) {
        mapobj_ = std::experimental::make_optional(mapobj);
    }

    JsonValue::~JsonValue() {
    }


    std::experimental::optional<JsonValue> JsonValue::ValueByName(const std::string &name) const {
        if (mapobj_) {
            for (auto n:*mapobj_) {
                if (n.first == name)
                    return std::experimental::make_optional(n.second);
            }
        } else
            return {};
    }

    std::string JsonValue::ToString() const {

        if (intobj_) {
            return std::to_string(*intobj_);
        }
        if (this->doubleobj_) {
            std::string tmp = std::to_string(*doubleobj_);
            return tmp.substr(0, tmp.size() - 4);
        }
        if (this->boolobj_) {
            if (*boolobj_ == true)
                return "true";
            else
                return "false";
        }

        if (this->vectorobj_) {
            std::string tmp = "[";
            for (auto n:*vectorobj_) {
                tmp += n.ToString();
                tmp += ", ";
            }
            tmp.erase((tmp.size() - 2), 2);
            tmp += "]";
            return tmp;

        }


        if (this->stringobj_) {
            std::string tmp = "";
            tmp += "\"";
            for (auto n: *stringobj_) {

                if (n == '\"')
                    tmp += "\\\"";

                if (n == '\\')
                    tmp += "\\\\";

            }
            tmp += *stringobj_;
            tmp += "\"";
            return tmp;

        }


        if (this->mapobj_) {

            std::string tmp = "{";
            tmp += "\"";

            for (auto &n: *mapobj_) {
                for (auto v:n.first) {
                    if (v == '\"')
                        tmp += "\\\"";
                    if (v == '\\')
                        tmp += "\\\\";
                }
                tmp += "\": " + n.second.ToString();


                return tmp;
            }
            return {};
        }
    }

}




