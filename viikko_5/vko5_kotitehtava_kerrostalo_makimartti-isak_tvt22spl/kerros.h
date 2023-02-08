#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros
{
public:
    kerros();
    ~kerros();

    asunto * a1 = new asunto;
    asunto * a2 = new asunto;
    asunto * a3 = new asunto;
    asunto * a4 = new asunto;

    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);

};

#endif // KERROS_H
