
#ifndef Vehicle_H
#define Vehicle_H
#include <string>

class Vehicle

{

public:

   void setName(std::string);
   std::string getName(void);
   void setSpeed(int);
   int getSpeed(void);

private:

    int speed;
    std::string name;

protected:

};

void Vehicle::setName(string s)

{

   name = s;

}
std::string Vehicle::getName()

{

   return name;

}
void Vehicle::setSpeed(int nopeus)

{

   speed = nopeus;

}
int Vehicle::getSpeed()

{

   return speed;

}

#endif // MYCLASS_H
