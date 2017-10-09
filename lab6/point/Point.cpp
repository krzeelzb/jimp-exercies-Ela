//
// Created by ela on 06.04.17.
//


//Definicja w Point.cpp
#include "Point.h"
#include <iomanip>
#include <iostream>

using ::std::istream;
using ::std::ws;

Point::Point() {}

Point::Point(double x, double y) {
    x_=x;
    y_=y;
}


std::istream& operator>>(std::istream & input, Point& p){
    input >> p.x_;
    input >>  p.y_;
    return input;
}

std::ostream& operator<<(std::ostream & out, Point& p) {
    out << p.x_ <<  p.y_;
    return out;
}




Point::~Point() {

}


