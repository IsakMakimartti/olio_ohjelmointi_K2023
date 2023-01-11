#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    return 0;
}

int game(int maxnum){
    int input, rnum, guesses;

    srand (time(NULL));
    rnum = rand() % maxnum + 1;

    cout<< "Give biggest possible number for random number generator" << endl;
    cin>>maxnum;

    cout << "Guess a number between 1-" << maxnum << endl;
    cin>>input;

    while (input != rnum){

    if (input > rnum) {
        cout << "Your number is too big" << endl;
        cout << "Guess again 1-" << maxnum<< endl;
        cin>>input;
    }
    else              {
        cout << "Your number is too small" << endl;
        cout << "Guess again 1-" << maxnum << endl;
        cin>>input;
    }
  }
    if (input = rnum){
        cout << "Correct!" << endl;
    }

    guesses = input++;

    return guesses;
}
