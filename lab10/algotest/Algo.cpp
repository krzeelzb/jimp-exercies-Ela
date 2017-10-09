//
// Created by ela on 11.05.17.
//

#include <algorithm>
#include "Algo.h"
namespace algo{

    std::set<std::string> Keys(const std::map<std::string, int> &m){
        std::set <std::string> keys;
        std::transform(m.begin(), m.end(),
                  std::inserter(keys,keys.begin()), OpKeys{});
        return keys;
    }

    std::vector<int> Values(const std::map<std::string, int> &m){
        std::vector <int> values;
        std::transform(m.begin(), m.end(),
                std::back_inserter(values), OpValues{});

return values;
    }

    bool ContainsKey(const std::map<std::string, int> &v, const std::string &key){
        auto set_of_keys = Keys(v);
        auto found = std::find(std::begin(set_of_keys), std::end(set_of_keys), key);
        if (found!=std::end(set_of_keys)){
            return true;
        }else{
            return false;
        }
    }
    bool ContainsValue(const std::map<std::string, int> &v, int value){
        auto set_of_values = Values(v);
        auto found = std::find(std::begin(set_of_values), std::end(set_of_values), value);
        if (found!=std::end(set_of_values)){
            return true;
        }else{
            return false;
        }
    }


    void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out){
        std::copy_n(v.begin(), n_elements, std::back_inserter(*out));
    }

    bool Contains(const std::vector<int> &v, int element){
        auto result1 = std::find(std::begin(v), std::end(v), element);
        if (result1 != std::end(v)) {
            return true;
        } else {
            return false;
        }


    }
}