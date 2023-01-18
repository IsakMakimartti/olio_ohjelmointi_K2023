#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;

game::game(int a)
{    
    cout <<"Set maximum number" << endl;
    cin >> a;
    maxNumber = a;
    cout <<"GAME CONSTRUCTOR: Object initialized with "<< maxNumber <<" as maximum value"<< endl;
}

game::~game()
{
    cout <<"GAME CONSTRUCTOR: Object cleared from stack memory"<< endl;
}

void game::play()
{

    srand (time(NULL));
    randomNumber = rand() % maxNumber + 1;

    cout <<"Guess a number between 1-" << maxNumber << endl;
    cin >> playerGuess;
    numOfGuesses = 1;

    while (playerGuess != randomNumber){

        numOfGuesses++;

       if (playerGuess > randomNumber) {
           cout <<"Your guessed number was too big"<< endl;
           cout <<"Guess again: Number between 1-"<< maxNumber << endl;
           cin>>playerGuess;
       }
       else              {
           cout <<"Your guessed number was too small"<< endl;
           cout <<"Guess again: Number between 1-"<< maxNumber << endl;
           cin>>playerGuess;
       }
     }
          printGameResult();
}

void game::printGameResult()
{
          cout <<"Correct! The number was: "<< playerGuess <<" You guessed "<< numOfGuesses <<" times"<< endl;
}
