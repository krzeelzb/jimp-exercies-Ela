//
// Created by ela on 07.03.17.
//

#include "DoubleBasePalindromes.h"
#include <iostream>
#include <cstdint>

using namespace std;

bool is_palindrome(string str){


    int j,i;
    bool zmienna=true;

    for(i = 0,j = str.length()-1; i < j; i++, j--)
    {
        if (str[i] != str[j]) {
            zmienna = false;

        }

    }


    return zmienna;



}

/*string change(int liczba) {
    string bin=" ";
    string liczbastring;
    while (liczba !=0) {

        liczbastring = to_string(liczba % 2);
        bin += liczbastring;
        liczba = (liczba - (liczba % 2)) / 2;
    }


    return bin;
}*/

string to_binary(long int dec) {
    string binary_s = "";
    int reszta;
    string reszta_s;
    long int answer;
    while (dec != 0) {
        reszta = dec % 2;
        dec = dec - reszta;
        dec = dec / 2;
        reszta_s = to_string(reszta);
        binary_s = reszta_s + binary_s;
    }
    return binary_s;
}


uint64_t DoubleBasePalindromes(int max_vaule_exculsive) {

    int suma = 0; //zmienna przechowywująca sume znalezionych palindromów
    uint64_t result = 0;
    int liczba;
    string liczbastring;

    string  dwa;

    for (liczba = 1; liczba <= max_vaule_exculsive; liczba++) {
        liczbastring = to_string(liczba);

        if (is_palindrome(liczbastring) == 1) {

            dwa=to_binary(liczba);


            if (is_palindrome(dwa) == 1) {


                result += liczba;
            }
        }


    }
    return result;
}
