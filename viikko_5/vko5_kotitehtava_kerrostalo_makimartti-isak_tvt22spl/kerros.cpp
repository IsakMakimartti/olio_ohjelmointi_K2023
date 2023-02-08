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
    a1->maarita(2,100);
    a2->maarita(2,100);
    a3->maarita(2,100);
    a4->maarita(2,100);
}

double kerros::laskeKulutus(double a)
{
    double hinta = a*(a1->laskeKulutus(a)+a2->laskeKulutus(a)+a3->laskeKulutus(a)+a4->laskeKulutus(a)); //Summataan kaikkien asuntojen kulutus ja kerrotaan hinnalla (parametri)
    return hinta;
}
