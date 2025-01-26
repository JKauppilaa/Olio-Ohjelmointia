#include "italianchef.h"
#include "chef.h"
#include <math.h>

Italianchef::Italianchef(string y):Chef(y){
    chefName = y;
    cout<<"ItalianChef " << y << " konstruktori" << endl;
}

Italianchef::~Italianchef(){
    cout<<"Italianchef tuhottu"<<endl;

}

bool Italianchef::askSecret(string a, int b, int c){
    if(password == a){
        Italianchef::makePizza(b, c);
    }
    else{
        return false;
    }
}

int Italianchef::makePizza(int a, int b){
    if(a >= 5 && b >= 5){
        int aineksia = min(a, b);
        return floor(aineksia /5);;
    }
}
