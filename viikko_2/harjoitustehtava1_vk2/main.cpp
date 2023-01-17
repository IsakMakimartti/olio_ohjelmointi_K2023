#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>

class myClass

{

public:

   myClass();

   ~myClass();

   std::string publicTextToPrint;

   void publicFunction(std::string);

private:

   std::string privateTextToPrint;

   void privateFunction();

protected:

    void protectedFunction();
    std::string protectedTextToPrint;
};

#endif // MYCLASS_H
