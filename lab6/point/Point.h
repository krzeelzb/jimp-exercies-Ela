// Deklaracja znajduje się w pliku Point.h
#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
public:
    Point();

    Point(double x, double y);

    ~Point();

     friend std::istream& operator>>(std::istream &, Point&);
    friend std::ostream& operator<<(std::ostream & , Point& );



private:
    double x_, y_;
};


#endif

