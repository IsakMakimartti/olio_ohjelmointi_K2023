#include "katutaso.h"
#include "kerros.h"


katutaso::katutaso() : kerros()
{
    cout<<"Katutaso luotu"<<endl;
}

katutaso::~katutaso()
{

}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double a)
{
    double hinta = a*(kerros::laskeKulutus(a)+as1.laskeKulutus(a)+as2.laskeKulutus(a));
    //cout<<"Katutason ja perityn kerroksen kulutus | Kun nelion hinta = "<<a<<" | = "<<hinta<<endl;
    return hinta;
}

