//
// Created by ela on 20.04.17.
//

#ifndef JIMP_EXERCISES_ZAD9_H
#define JIMP_EXERCISES_ZAD9_H



#include <iostream>
#include <list>

using namespace std;

class Umowa{
protected:
    double wynagrodzenieBrutto;
public:
    Umowa(double pensja):wynagrodzenieBrutto(pensja){};
    virtual double pobierzNetto();
    double pobierzBrutto();
};

class UmowaDzielo: public Umowa{
public:
    UmowaDzielo(double pensja):Umowa(pensja){};
    virtual double pobierzNetto();
};

class UmowaPraca: public Umowa{
public:
    UmowaPraca(double pensja):Umowa(pensja){};
    virtual double pobierzNetto();
};

class Pracownik{
private:
    string imie,nazwisko,pesel;
    Umowa* umowa;
public:
    Pracownik(string i,string n,string p,Umowa* u)
            :imie(i),nazwisko(n),pesel(p),umowa(u){};
    Pracownik(const Pracownik&);
    ~Pracownik(){};
    double pobierzPensje();
    friend ostream& operator<<(ostream&,Pracownik&);
};
#endif //JIMP_EXERCISES_ZAD9_H
