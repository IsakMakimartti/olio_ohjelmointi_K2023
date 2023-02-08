#include "kerrostalo.h"

int main()
{
    // Asunto object
    asunto * o1;
    o1 = new asunto;
    o1->maarita(2,100);
    o1->laskeKulutus(1);
    delete o1;

    // Katutaso object
    katutaso * o2;
    o2 = new katutaso;
    o2->maaritaAsunnot();
    o2->laskeKulutus(1);
    delete o2;

    //Kerrostalo object
    kerrostalo * o3;
    o3 = new kerrostalo;
    o3->laskeKulutus(1);
    delete o3;

    return 0;
}
