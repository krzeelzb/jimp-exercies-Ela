//
// Created by ela on 24.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H
#include<iostream>

#include <experimental/optional>
#include <string>
#include <array>
#include <map>
#include <iostream>
#include <vector>
using ::std::experimental::optional;

namespace nets{

    class JsonValue{


    public:
        JsonValue();
        JsonValue(std::string stringobj);
        JsonValue(int intobj);
        JsonValue(double doubleobj);
        JsonValue(bool boolobj);
        JsonValue(std::map<std::string, JsonValue> mapobj);
        JsonValue(std::vector<JsonValue>  vectorobj);


        virtual ~JsonValue();

        std::experimental::optional<JsonValue> ValueByName(const std::string &name) const;
        std::string ToString() const;

    private:
        optional<std::string> stringobj_;
        optional<int> intobj_;
        optional<double> doubleobj_;
        optional<std::vector<JsonValue>> vectorobj_;
        optional<bool>  boolobj_;
        optional<std::map<std::string,JsonValue>> mapobj_;

    };



}
class SimpleJson {

};


#endif //JIMP_EXERCISES_SIMPLEJSON_H
