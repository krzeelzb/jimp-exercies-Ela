//
// Created by ela on 23.03.17.
//

#ifndef JIMP_EXERCISES_GEOMETRY_H
#define JIMP_EXERCISES_GEOMETRY_H

#include <iostream>



class Point {
public:

    double x;
    double y;

};

class Square {

public:
    Point p1;
    Point p2;
    Point p3;
    Point p4;

    double Circumference(Point p1,Point p2,Point p3,Point p4);
    double Area(Point p1,Point p2,Point p3,Point p4);

};


#endif //JIMP_EXERCISES_GEOMETRY_H
