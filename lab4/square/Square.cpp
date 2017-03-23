//
// Created by ela on 23.03.17.
//

#include "Square.h"
//Definicja znajduje się w pliku Point.cpp
#include <cmath>
#include <ostream>

//using namespace std;
using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

double Square::Circumference(Point p1, Point p2, Point p3, Point p4) {
    return (4*pow((p1.x-p2.x),2)-pow((p1.y-p2.y),2));

}

double Square:: Area(Point p1,Point p2,Point p3,Point p4){
    return pow((pow((p1.x-p2.x),2)-pow((p1.y-p2.y),2)),2);


}


