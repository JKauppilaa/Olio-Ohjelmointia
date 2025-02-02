#include "luottotili.h"

Luottotili::Luottotili(string a, double b): Pankkitili(a), luottoRaja(b){
}

bool Luottotili::deposit(double y)
{
    if(Luottotili::saldo + y < 0){
        Luottotili::saldo = Luottotili::saldo + y;
        return true;
    }
    else{
        return false;
    }
}

bool Luottotili::withdraw(double y)
{
    if(Luottotili::saldo - y > luottoRaja){

        Luottotili::saldo = Luottotili::saldo - y;
        return true;
    }
    else{
        cout << "Et voi nostaa yli luottorajan" << endl;
        return false;
    }

}
