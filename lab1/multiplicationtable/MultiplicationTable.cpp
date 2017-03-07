//
// Created by ela on 07.03.17.
//

#include "MultiplicationTable.h"

#include <iostream>


using namespace std;

void MultiplicationTable(int tab[][10]){
    int i,j;
    for(i=1;i<=10;i++){

        for(j=1;j<=10;j++){
            tab[i-1][j-1]=i*j;
            cout<<"   " <<tab[i-1][j-1];

        }
        cout<<endl;
    }
}

/*void PrintTable(int tab[10][10]){
    int i,j;
    for(i=1;i<=10;i++){
        cout<<"\n";
        for(j=1;j<=10;j++){
            cout<<" " <<tab[i][j];

        }
        cout<<endl;
    }
}*/
