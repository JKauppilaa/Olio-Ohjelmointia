#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas tili1("Omistaja", -50);
    Asiakas tili2("TILI 2", -500);
    tili1.talletus(500);
    tili2.talletus(300);
    tili1.showSaldo();
    tili2.showSaldo();
    tili1.nosto(50);
    tili2.nosto(30);
    tili1.luotonNosto(51);
    tili2.luotonNosto(400);
    tili1.showSaldo();
    tili2.showSaldo();
}
