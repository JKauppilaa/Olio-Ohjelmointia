#include "asiakas.h"

Asiakas::Asiakas(string a, double b): Pankkitili(a), Luottotili(a,b), kayttotili(a), luottotili(a,b){
    nimi = a;
    cout << "Pankkitili luotu " << getNimi() <<endl;
    cout << "Luottotili luotu " << getNimi() <<endl;
    cout << "Luottoraja on " << luottoRaja << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    double a = luottotili.getBalance();
    double b = kayttotili.getBalance();
    cout << "Luottotilin saldo " << a << endl;
    cout << "Kayttotilin saldo " << b << endl;
}

bool Asiakas::talletus(double a)
{
    if(a > 0){
        kayttotili.deposit(a);
        cout << getNimi() << " Pankkitili: talletus " << a << " tehty" <<endl;
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::nosto(double a)
{
    double b = kayttotili.getBalance();
    if(b - a > 0){
        kayttotili.withdraw(a);
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonMaksu(double a)
{
    double b = luottotili.getBalance();
    if(b + a < 0){
        luottotili.deposit(a);
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonNosto(double a){
    luottotili.withdraw(a);
}

