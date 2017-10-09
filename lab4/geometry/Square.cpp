//
// Created by ela on 27.03.17.
//


#include "Square.h"


namespace geometry{
    Square::Square(Point p1, Point p2, Point p3, Point p4) {
        //cout << "Konstruktor parametrowy" << endl;
        p1_ = p1;
        p2_ = p2;
        p3_ = p3;
        p4_ = p4;
    }

    Square::~Square() {
    }

    double Square::Area() const {
        if (p1_.Distance(p2_) != p3_.Distance(p4_))
            return 0.0;
        return (p1_.Distance(p2_)*p1_.Distance(p2_));
    }

    double Square::Circumference() const {
        if (p1_.Distance(p2_) != p3_.Distance(p4_))
            return 0.0;
        return (p1_.Distance(p2_)*4);
    }
}