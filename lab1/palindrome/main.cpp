//
// Created by ela on 07.03.17.
//

#include <iostream>
#include "Palindrome.h"

int main(){
        cout<<"Witaj!\nWybierz podane ocje:"<<endl;


        cout<<"Sprawdź palindrom-naciśnij S"<<endl;
        cout<<"Wyjście- nacisnij Q"<<endl;
        char wybor;
        cin>>wybor;

        while(wybor){
            string  str;
            cout<<"Podaj wyraz"<<endl;
            cin>>str;

            if (wybor='s')
                (is_palindrome(str);
            if (wybor='q')
                return 0;
            else
                cout<<"błędne wpisanie"<<endl;
            }
        };
