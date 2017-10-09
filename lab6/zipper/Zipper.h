//
// Created by ela on 08.04.17.
//

#ifndef JIMP_EXERCISES_ZIPPER_H
#define JIMP_EXERCISES_ZIPPER_H
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

namespace datastructures{

    class Zipper{
    public:

    private:
        Iterator iterator_;
    };

    class Iterator{
    public:
        Iterator();
        Iterator::Iterator(std::vector<int>::iterator iteratorint,std::vector<std::string>::iterator iteratorstring);
        bool operator!=(Iterator new_iterator);
        Iterator & operator++();
        std::pair<std::string, int> operator*();



    private:
        std::vector<int>::iterator iterator_int_;
         std::vector<std::string>::iterator iterator_string_;

    };
}

#endif //JIMP_EXERCISES_ZIPPER_H