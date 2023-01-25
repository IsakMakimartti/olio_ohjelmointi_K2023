#include "italianchef.h"

ItalianChef::ItalianChef(string a, int b, int c):Chef(a)
{
    jauhot=b;
    vesi=c;
}

ItalianChef::~ItalianChef()
{

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int a, int b)
{
    jauhot = a;
    vesi = b;
    cout << "Chef " << name << " makes pasta with special recipe" <<endl;
    cout << "Chef " << name << " users jauhot = " << jauhot << endl;
    cout << "Chef " << name << " users jauhot = " << vesi <<endl;
}

