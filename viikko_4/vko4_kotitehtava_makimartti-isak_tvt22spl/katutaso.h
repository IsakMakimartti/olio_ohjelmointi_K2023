#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class katutaso : public kerros
{
public:
    katutaso();
    ~katutaso();
    asunto as1,as2;
    void maaritaAsunnot() override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H
