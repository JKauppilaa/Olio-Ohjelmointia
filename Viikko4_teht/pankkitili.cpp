#include "pankkitili.h"

Pankkitili::Pankkitili(string a) : omistaja(a){
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double a)
{
    if(a > 0){
        saldo = saldo + a;
        return true;
    }
    else{
        return false;
    }
}

bool Pankkitili::withdraw(double a)
{
    if(saldo - a > 0){
        saldo = saldo - a;
        return true;
    }
    else{
        return false;
    }
}
