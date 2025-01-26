#include "chef.h"
#include <cmath>

Chef::Chef(string n){
    chefName = n;
    cout<<"Chef "<< n << " Konstruktori" <<  endl;
}

Chef::~Chef(){
    cout<<"Chef tuhottu"<<endl;
}

int Chef::makeSalad(int a){
    if(a<5){
        return 0;
    }
    else{
        return floor(a / 5);
    }
}

int Chef::makeSoup(int a){
    if(a<3){
        return 0;
    }
    else{
        return floor(a / 3);
    }
}

string Chef::getName(){
    return chefName;
}
