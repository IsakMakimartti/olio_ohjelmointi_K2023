#include "kerros.h"

kerros::kerros()
{
    cout<<"Kerros luotu"<<endl;
}

kerros::~kerros()
{

}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double kerros::laskeKulutus(double a)
{
    double hinta = a*(as1.laskeKulutus(a)+as2.laskeKulutus(a)+as3.laskeKulutus(a)+as4.laskeKulutus(a)); //Summataan kaikkien asuntojen kulutus ja kerrotaan hinnalla (parametri)
    return hinta;
}

