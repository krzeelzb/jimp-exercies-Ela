//
// Created by ela on 24.04.17.
//

#include <memory>
#include <vector>
#include <iostream>
#include <sstream>
#include "Point.h"

using namespace std;

int main(void){

    cout<<"****************Zad5***********************"<<endl;
    cout<<"p_2d"<<endl;
        Point p;//Konstruktor bezparametrowy klasy POINT
    cout<<"p2_2d"<<endl;
        Point p2 ();// nic się nie wywoła
    cout<<"p3_2d"<<endl;
        Point p3 {}; //wywołuje konstruktor parametryczny klasy POINT
    cout<<"p4_2d"<<endl;
        Point p4 (12,34);//wywołuje konstruktor parametryczny klasy POINT
    cout<<"p5_2d"<<endl;
        Point p5 {30, 20};//wywołuje konstruktor parametryczny klasy POINT

    cout<<"p7_3d"<<endl;
    Point3D p7;//Konstruktor bezparametrowy klasy POINT i bezparametrowy klasy POINT3D
    cout<<"p8_3d"<<endl;
    Point3D p8 ();// nic się nie wywoła
    cout<<"p9_3d"<<endl;
    Point3D p9 {}; //wywołuje konstruktor parametryczny klasy POINT i konstruktor parametryczny klasy POINT3D
    cout<<"p10_3d"<<endl;
    Point3D p10 (12,34,14);//wywołuje konstruktor parametryczny klasy POINT i konstruktor parametryczny klasy POINT3D
    cout<<"p11_3d"<<endl;
    Point3D p11 {30, 20,16};//wywołuje konstruktor parametryczny klasy POINT i konstruktor parametryczny klasy POINT3D
//destruktory są wywoływane od końca, zawsze na koniec działania programu, czyli najpierw jest wywoływany dekonstruktor p11.
    cout<<"****************Zad6***********************"<<endl;


    Point punkt2d(2,5);
    Point3D   punkt3d(6,8,5);
    punkt2d.Distance(punkt3d);  //do obliczeń program nie wykorzystał wartości z_ z punkt3d

    cout<<"****************Zad7***********************"<<endl;
    Point3D p3d(1,2,3);
    cout << p3d << endl;//zostaną wypiasane tylko wartości odziedziczone z Point, czyli x_ i y_;






}