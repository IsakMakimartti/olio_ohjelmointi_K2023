#include <iostream>
#include "postilaatikko.h"

using namespace std;

int main()
{
    Postilaatikko laatikko;

    laatikko.asetaNimi("Iskun laatikko");
    cout<<"Laatikon nimi = "<<laatikko.palautaNimi()<<endl;

    return 0;
}
