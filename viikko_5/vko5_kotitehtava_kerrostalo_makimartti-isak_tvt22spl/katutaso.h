#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class katutaso : public kerros
{
public:
    katutaso();
    virtual ~katutaso();

    asunto * as1 = new asunto;
    asunto * as2 = new asunto;

    void maaritaAsunnot() override;
    double laskeKulutus(double) override;
};

#endif // KATUTASO_H
