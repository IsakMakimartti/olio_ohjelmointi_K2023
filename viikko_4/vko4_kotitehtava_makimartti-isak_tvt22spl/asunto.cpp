#include "asunto.h"

asunto::asunto()
{
    cout<<"Asunto luotu!"<<endl;
}

asunto::~asunto()
{

}

void asunto::maarita(int a, int b)
{
    asukasMaara = a; neliot = b;
    cout<<"Asunto maaritetty | Asukkaita = "<<asukasMaara<<" | Nelioita = "<<neliot<<endl;
}

double asunto::laskeKulutus(double a)
{
    double hinta = a*(asukasMaara*neliot);
    //cout<<"Asunnon kulutus | Kun nelion hinta = "<<a<<" | = "<<hinta<<endl;
    return hinta;
}
