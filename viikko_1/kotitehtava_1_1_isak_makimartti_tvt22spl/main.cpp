#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomNumberGenerator();

int main()
{
    randomNumberGenerator();
    return 0;
}

void randomNumberGenerator(){
    int input, rnum;

    srand (time(NULL));
    rnum = rand() % 20 + 1;

    cout << "Guess a number between 1-20" << endl;
    cin>>input;

    while (input != rnum){

    if (input > rnum) {
        cout << "Your number is too big" << endl;
        cout << "Guess again (1-20)" << endl;
        cin>>input;
    }
    else              {
        cout << "Your number is too small" << endl;
        cout << "Guess again (1-20)" << endl;
        cin>>input;
    }
  }
    if (input = rnum){
        cout << "Correct!" << endl;
    }
}
