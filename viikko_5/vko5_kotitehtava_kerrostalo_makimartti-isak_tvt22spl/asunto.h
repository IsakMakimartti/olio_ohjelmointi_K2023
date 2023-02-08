#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class asunto
{
public:
    asunto();
    ~asunto();
    int asukasMaara, neliot;
    void maarita(int, int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
