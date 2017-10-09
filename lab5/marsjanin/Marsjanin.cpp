//
// Created by ela on 30.03.17.
//

#include "Marsjanin.h"

int Marsjanin::licznik = 0;

Marsjanin::Marsjanin() {
    licznik_ = licznik++;
}

Marsjanin::~Marsjanin() { licznik--; }

void Marsjanin::Atakuj() {
    if (licznik_ > 5)
        std::cout << "atak";
    else
        std::cout << "ukrywaj się";

};