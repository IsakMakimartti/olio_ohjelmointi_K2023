#include "chef.h"

Chef::Chef(string a)
{
    a=("Gordon Ramsay");
    name=a;
    cout <<name<<" Gordon Ramsay konstruktori"<<endl;
}

void Chef::makeSalad()
{
    cout <<"Chef"<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout <<"Chef "<<name<<" makes soup"<<endl;
}


