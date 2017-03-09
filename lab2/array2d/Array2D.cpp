//
// Created by ela on 07.03.17.
//

#include "Array2D.h"
#include<iostream>


using namespace std;


int **Array2D(int n_rows, int n_columns){

    int ** tablica = new int * [n_rows];
    for (int i = 0; i<n_rows; i++) {
        tablica[i] = new int[n_columns];

        cout<< "tablica"<<i<<n_columns<<"wynosi"<<i<endl;
        tablica[i][n_columns] = i;
    }

//kom

}



void DeleteArray2D(int **array, int n_rows, int n_columns){

    for (int i = 0; i<n_rows; i++)
        delete [] array[i];

    delete [] array;
}