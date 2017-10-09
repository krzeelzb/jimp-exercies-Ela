//
// Created by ela on 08.04.17.
//

#include "Zipper.h"

namespace datastructures{

    Iterator::Iterator(){}
    Iterator::Iterator(std::vector<int>::iterator iteratorint,std::vector<std::string>::iterator iteratorstring){
        iterator_int_= iteratorint;
        iterator_string_=iteratorstring;
    }



     bool Iterator::operator!=(Iterator new_iterator){
         if(new_iterator.iterator_int_==iterator_int_){
             return false;
         }
         if(new_iterator.iterator_string_==iterator_string_){
             return false;
         }
         return true;
     }
    Iterator & Iterator::operator++(){
        ++iterator_int_;
        ++iterator_string_;
        return  *this;

    }
    std::pair<std::string, int> Iterator::operator*(){
        std::pair <std::string, int> new_pair;
        new_pair.first = *iterator_string_;
        new_pair.second = *iterator_int_;
        return new_pair;
    }
}
