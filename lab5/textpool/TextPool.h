//
// Created by ela on 03.04.17.
//

#ifndef JIMP_EXERCISES_TEXTPOOL_H
#define JIMP_EXERCISES_TEXTPOOL_H
#include <initializer_list>
#include <string>
#include <experimental/string_view>
#include <set>
#include <vector>


namespace pool{

class TextPool{
public:
    std::set<std::experimental::string_view> poolset_;
    TextPool();
    TextPool(std::initializer_list<std::experimental::string_view> poolset):poolset_(poolset){};
    TextPool(TextPool && pool);
    TextPool &operator=(TextPool && pool);

    std::experimental::string_view Intern(const std::string &str);
    size_t StoredStringCount() const;
    ~TextPool();




};
}



#endif //JIMP_EXERCISES_TEXTPOOL_H
