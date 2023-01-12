#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnumber, numberOfGuesses;

    cout<<"Give maximum random number"<<endl;
    cin>>maxnumber;

    numberOfGuesses = game(maxnumber);
    cout << "You guessed " << numberOfGuesses <<" times"<< endl;

    return 0;
}

int game(int maxnum)
{
    int input, rnum, guesses;

    guesses = 1;

    srand (time(NULL));
    rnum = rand() % maxnum + 1;

    cout << "Guess a number between 1-" << maxnum << endl;
    cin>>input;

    while (input != rnum){

    guesses++;

    if (input > rnum) {
        cout << "Your number is too big" << endl;
        cout << "Guess again: Number between 1-" << maxnum<< endl;
        cin>>input;
    }
    else              {
        cout << "Your number is too small" << endl;
        cout << "Guess again: Number between 1-" << maxnum << endl;
        cin>>input;
    }
  }
       cout << "Correct! The number was: " << input << endl;

    return guesses;
}
