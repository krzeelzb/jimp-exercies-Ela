//
// Created by kartytko on 18.05.17.
//

#include "FactoryMethod.h"
#include <complex>
#include <memory>

using namespace factoryMethod;

int main(){

    //2
    auto r = Sum<int>(6, 7.5);
    std::cout<< r<<std::endl;
    auto s = Sum<std::complex<double>>((7+8i), (8-2i));
    std::cout<< s<<std::endl;
    auto m = Sum<double>(7.1, 1);
    std::cout<< m<<std::endl;


    //3
    int a = 1;
    auto a_pointer = Value<int>(a);
    if(a_pointer==&a){
        std::cout<<"podpisałem pointer pod a"<<std::endl;
    }


    //5
    auto c = Mean(std::vector <int> {1, 2, 7});
    std::cout<<"średnia z wartości wektora to: "<<c<<std::endl;

    auto d = Mean(std::vector <double> {1, 2, 7});
    std::cout<<"średnia z wartości wektora to: "<<d<<std::endl;

    return  0;
}