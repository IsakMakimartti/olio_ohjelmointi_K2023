#include "kerrostalo.h"


kerrostalo::kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();

}

kerrostalo::~kerrostalo()
{

}

double kerrostalo::laskeKulutus(double a)
{
    double hinta = a*(eka.laskeKulutus(a)+toka.laskeKulutus(a)+kolmas.laskeKulutus(a));
    cout<<"Kerrostalon kulutus = "<<hinta<<endl;
    return hinta;
}
