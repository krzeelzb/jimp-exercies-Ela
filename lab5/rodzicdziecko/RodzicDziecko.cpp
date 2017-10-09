//
// Created by ela on 30.03.17.
//

#include "RodzicDziecko.h"

    Dziecko::Dziecko(string name,string surname,string schoolname,int wiek){
        imie_=name;
        nazwisko_=surname;
        wiek_=wiek;
        szkola_=schoolname;
    };


    void Dziecko::przepiszDoInnejSzkoly(string nazwa){
        szkola_=nazwa;
    }

    Dziecko::Dziecko() {

    }

    Dziecko::~Dziecko() {

    };

Rodzic::Rodzic(string name,string surname,int wiek,Dziecko dziecko){
    imie_=name;
    nazwisko_=surname;
    wiek_=wiek;
    dziecko_=dziecko;
};
void Rodzic::przepiszDoInnejSzkoly(string nazwa) {
    dziecko_.przepiszDoInnejSzkoly(nazwa);
}

Rodzic::Rodzic() {

}

Rodzic::~Rodzic() {

}