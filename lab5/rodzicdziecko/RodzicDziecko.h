//
// Created by ela on 30.03.17.
//

#ifndef JIMP_EXERCISES_RODZICDZIECKO_H
#define JIMP_EXERCISES_RODZICDZIECKO_H
#include <string>
#include <iostream>
 using std::string;




    class Dziecko {
    public:
        Dziecko();
        Dziecko(string name,string surname,string schoolname,int wiek);

        ~Dziecko();
        void przepiszDoInnejSzkoly(string nazwa);

    private:
        string imie_;
        string nazwisko_;
        int wiek_;
        string szkola_;

    };
class Rodzic {
public:
    Rodzic();
    Rodzic(string name,string surname,int wiek,Dziecko dziecko);
    ~Rodzic();
    void przepiszDoInnejSzkoly(string nazwa);


private:
    string imie_;
    string nazwisko_;
    int wiek_;
    Dziecko dziecko_;


};


#endif //JIMP_EXERCISES_RODZICDZIECKO_H
