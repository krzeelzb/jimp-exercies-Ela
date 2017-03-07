//
// Created by ela on 07.03.17.
//

#include "Palindrome.h"

#include <iostream>


using namespace std;
bool is_palindrome(string str){


            int j,i;
            bool zmienna=true;

            for(i = 0,j = str.length()-1; i < j; i++, j--)
                {
                if (str[i] != str[j])
                zmienna= false;
                    cout << "Podany wyraz nie jest palindromem" << endl;
                    return zmienna;
                }

         cout << "Podany wyraz jest palindromem" << endl;
    return zmienna;



    }
