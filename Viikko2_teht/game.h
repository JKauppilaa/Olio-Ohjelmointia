#ifndef GAME_H
#define GAME_H

class game
{
public:
    game(int);
    ~game();
    void play();

private:
    void printGameResult();
    int maxNumber;
    int playerGuesses;
    int numOfGuesses;
    int randomNumber;
};

#endif // GAME_H
