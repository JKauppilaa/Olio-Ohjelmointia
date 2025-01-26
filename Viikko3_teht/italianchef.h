#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class Italianchef: public Chef{
public:
    Italianchef(string);
    ~Italianchef();
    bool askSecret(string, int, int);
private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza(int, int);

};

#endif // ITALIANCHEF_H
