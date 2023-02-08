#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class kerrostalo
{
public:
    kerrostalo();
    ~kerrostalo();

    double laskeKulutus(double);

private:
    katutaso * eka = new katutaso;
    kerros * toka = new kerros;
    kerros * kolmas = new kerros;
};

#endif // KERROSTALO_H
