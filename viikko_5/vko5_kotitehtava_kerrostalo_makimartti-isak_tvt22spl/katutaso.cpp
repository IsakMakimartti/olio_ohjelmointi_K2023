#include "katutaso.h"

katutaso::katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

katutaso::~katutaso()
{
    cout<<"Program ended"<<endl;
}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja ..."<<endl;
    kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double a)
{
    double hinta = a*((kerros::laskeKulutus(a))+(as1->laskeKulutus(a))+(as2->laskeKulutus(a)));
    //cout<<"Katutason + perityksen kerroken kulutus | Kun hinta = "<<a<<" | = "<<hinta<<endl;
    return hinta;
}

