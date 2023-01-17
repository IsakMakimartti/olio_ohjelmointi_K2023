// Luokan määrittely / pitäisi olla Header filessä ja toteutus
#ifndef Apartment_H
#define Apartment_H
#include <string>


class Apartment
{

public:

    Apartment(int, int); // Constructor
    int heatingCost();

private:
    int numOfTenants;
    int area;
};

Apartment::Apartment(int a, int b)
{
    numOfTenants = a;
    area = b;
}

int Apartment::heatingCost()
{
    int cost = numOfTenants * area;
    return cost;
}
#endif // POSTILAATIKKO_H
