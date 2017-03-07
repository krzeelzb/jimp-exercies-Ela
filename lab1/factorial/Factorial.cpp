//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

int factorial(int value) {
    if (value>12)
        return 0;
    if (value<-12)
        return 0;

    if (value==0)
        return 1;

    if (value==1)
        return 1;

    if (value>1)
        return value*factorial(value-1);

    if (value==-1)
        return -1;

    if (value<-1)
        return (value*factorial(value+1));

  return 0;
}
