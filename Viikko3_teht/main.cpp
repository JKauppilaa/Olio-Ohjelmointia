#include <iostream>
#include <cmath>
#include "italianchef.h"
#include "chef.h"
using namespace std;

int main()
{
    Chef perusKokki("Gordon");
    Italianchef italialainenKokki("Mario");
    int flour = 5;
    int water = 5;
    int ingredient = 8;
    string nimi1 = perusKokki.getName();
    string nimi2 = italialainenKokki.getName();
    int salad = italialainenKokki.makeSalad(ingredient);
    int soup = italialainenKokki.makeSoup(ingredient);

    cout << "Chef " << nimi1 << " with " << ingredient << " items can make salad " << salad << " portions" << endl;
    cout << "Chef " << nimi1 << " with " << ingredient << " items can make soup " << soup << " portions" << endl;

    cout << "Chef " << nimi2 << " with " << ingredient << " items can make salad " << salad << " portions" << endl;
    cout << "Chef " << nimi2 << " with " << ingredient << " items can make soup " << soup << " portions" << endl;
    int pizzojenMaara = italialainenKokki.askSecret("pizza",flour,water);
    cout<<"Chef " << nimi2 << " with " << flour << " flour and " << water << " water can make " << pizzojenMaara << " pizzas" <<endl;
    return 0;
}
