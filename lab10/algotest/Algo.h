//
// Created by ela on 11.05.17.
//

#ifndef JIMP_EXERCISES_ALGO_H
#define JIMP_EXERCISES_ALGO_H

#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>


namespace  algo{

    std::set<std::string> Keys(const std::map<std::string, int> &m);
    struct OpKeys{
        std::string operator()(std::pair <std::string, int> pair){
            return pair.first;
        }
    };


    std::vector<int> Values(const std::map<std::string, int> &m);
    struct OpValues{
        int operator()(std::pair <std::string, int> pair){
            return pair.second;
        }
    };

    bool ContainsKey(const std::map<std::string, int> &v, const std::string &key);
    bool ContainsValue(const std::map<std::string, int> &v, int value);

    void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out);
    bool Contains(const std::vector<int> &v, int element);

}
class Algo {

};


#endif //JIMP_EXERCISES_ALGO_H
