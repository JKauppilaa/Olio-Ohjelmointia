#include <iostream>

using namespace std;

int game(int maxnum){
    int yritys;
    int arvaus;
    int randNum = rand() % maxnum;
    while(arvaus != randNum){
        yritys = yritys + 1;
        cin >> arvaus;
        if(arvaus < randNum){
            cout << "Luku on liian pieni" << endl;
        }
        if(arvaus > randNum){
            cout << "Luku on liian suuri" << endl;
        }
    }
    return yritys;
}

int main()
{
    srand(time(0));
    int arvauksia = game(10);
    cout << "Luku on yhtasuuri" << endl;
    cout << "Arvauksien maara " << arvauksia << endl;
    return 0;
}

