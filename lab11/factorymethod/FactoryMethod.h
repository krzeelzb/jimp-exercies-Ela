//
// Created by kartytko on 18.05.17.
//

#ifndef JIMP_EXERCISES_FACTORYMETHOD_H
#define JIMP_EXERCISES_FACTORYMETHOD_H

#include <iostream>
#include <vector>
#include <initializer_list>

namespace factoryMethod{
//1
    class MyType{
    public:
        MyType(){};
        std::string SayHello(){
            return "hello";
        }
    };

    template <class T>
    T Create (){
        return T();
    }



//2
    template <class T>
    T Sum(const T &a, const T &b){
        return a+b;
    }



//3
    template <class M>
    auto Value (const M &a){
        return &a;
    }



//4
    /*Przygotować interfejs Reposiotry, który udostępnia metody (Size, operator[], NextId(), FindBy(Query)), ale jest wstanie być zdefiniowany dla dowolnego typu Building, Student, Course, itd…*/

    template <class N>
    class Repository{
    public:
        Repository(std::initializer_list<N >obj): object_(obj){};
        size_t Size() const{
            return object_.size();
        }

    private:
        std::vector<N> object_;
    };



//5
    template <class S>
    S Mean(std::vector<S> vec){
        S answer=0;
        for(auto &a: vec){
            answer=answer+a;
        }
        answer=answer/vec.size();
        return answer;
    }


}

#endif //JIMP_EXERCISES_FACTORYMETHOD_H
