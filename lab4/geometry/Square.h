//
// Created by Piotrek on 23.03.2017.
//

#ifndef JIMP_EXERCISES_SQUARE_H
#define JIMP_EXERCISES_SQUARE_H

#include "Point.h"

namespace geometry {
    class Square{


    public:

       // Square();

        Square(Point p1,Point p2,Point p3, Point p4);

        ~Square();


       double Circumference() const;

      double Area()const;


    private:

        Point  p1_,p2_,p3_,p4_;
    };


}
#endif //JIMP_EXERCISES_SQUARE_H
