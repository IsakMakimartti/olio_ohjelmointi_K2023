#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    //Chef chef1("Jyrki");
    ItalianChef chef2("Mario", 250, 100);
    chef2.getName();
    //chef1.makeSalad();
    chef2.makePasta(250, 100);
    //chef1.makeSoup();
    //object2.makeSalad();
    //object2.makeSoup();
    return 0;
}
