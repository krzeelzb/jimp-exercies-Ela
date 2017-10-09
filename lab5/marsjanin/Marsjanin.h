//
// Created by ela on 30.03.17.
//

#ifndef JIMP_EXERCISES_MARSJANIN_H
#define JIMP_EXERCISES_MARSJANIN_H

#include <list>

#include <iostream>

class Marsjanin {

public:
    static int licznik;

    Marsjanin() { licznik++; }

    ~Marsjanin(){ licznik--; }

    void Atakuj();


private:
    int licznik_;
};


#endif //JIMP_EXERCISES_MARSJANIN_H
