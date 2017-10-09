//
// Created by ela on 03.06.17.
//

#ifndef JIMP_EXERCISES_TEACHERHASH_H
#define JIMP_EXERCISES_TEACHERHASH_H

#include <iostream>
#include <hashtable.h>
#include <initializer_list>
namespace academia {

    template <class T>
    class TeacherId{
    public:
        TeacherId(){};
        TeacherId(const T &a): a_(a){};
        ~TeacherId(){};



        bool operator==(const TeacherId &rhs) const {
            return a_ == rhs.a_;
        }

        bool operator!=(const TeacherId &rhs) const {
            return !(rhs == *this);
        }


    protected:
        T a_;
    };

    template <class T>
    class Teacher{
    public:
        Teacher(){};
        Teacher(const TeacherId &id,std::string b, std::string c): id_(id),name_(b),dep_(c){};
        ~Teacher(){};

        T Id(){
            return  id_;
        }
        T Name(){
            return name_;
        }
        T Department(){
            return dep_;
        }

    private:
        TeacherId id_;
        std::string name_,dep_;
    };
    class TeacherHash{
    public:
        TeacherHash(){};
        TeacherHash(Teacher &teacher):teacher_(teacher){};
        template <typename T, typename U>
        std::size_t operator()(const std::pair<T, U> &x) const
        {
            return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
        }
        ~TeacherHash(){};
    private:
        Teacher teacher_;

    };

}

#endif //JIMP_EXERCISES_TEACHERHASH_H
