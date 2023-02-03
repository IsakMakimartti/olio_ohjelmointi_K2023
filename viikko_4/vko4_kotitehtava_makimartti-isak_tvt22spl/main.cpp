#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    // Asunto Luokka
    asunto o1;
    o1.maarita(2,100);
    o1.laskeKulutus(1);

    //Katutaso Luokka
    katutaso o2;
    o2.maaritaAsunnot();
    o2.laskeKulutus(1);

    //Kerrostalo Luokka
    kerrostalo o3;
    o3.laskeKulutus(1);
    return 0;
}
