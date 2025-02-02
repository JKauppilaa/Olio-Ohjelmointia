#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas : public Pankkitili, public Luottotili
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
private:
    Pankkitili(kayttotili);
    Luottotili(luottotili);
    string nimi;
};

#endif // ASIAKAS_H
