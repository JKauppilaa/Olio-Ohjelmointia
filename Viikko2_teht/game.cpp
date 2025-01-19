#include "game.h"
#include <iostream>

using namespace std;

game::game(int a) {
    cout << "LUOTU" << endl;
    maxNumber = a;
}

game::~game(){
    cout << "Tuhottu" <<endl;
}

void game::play(){
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "Arvaa luku 1-"<< maxNumber << endl;
    numOfGuesses = 0;
    while(randomNumber != playerGuesses){
        numOfGuesses++;
        cin >> playerGuesses;
    }
    printGameResult();


}

void game::printGameResult(){
    cout << "Arvausten maara = " << numOfGuesses << endl;
}


