#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"


class kerros
{
public:
    kerros();
    ~kerros();
    asunto as1, as2, as3, as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H
