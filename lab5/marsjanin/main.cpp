//
// Created by ela on 30.03.17.
//

#include <list>
#include "Marsjanin.h"


int main(){
   std::list <Marsjanin> marsjanin;
    while(true) {
        marsjanin.push_back(Marsjanin {});
        marsjanin.back().Atakuj();
        if(marsjanin.back().licznik_>30);
    }
}