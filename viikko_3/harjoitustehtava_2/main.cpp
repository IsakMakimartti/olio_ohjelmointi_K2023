class GrandFather
{
public:
    GrandFather();
    void setGrandName(string);
    string getGrandName(void);

    string Grandname;
};

class Father:public GrandFather
{
public:
    Father();
    void setFatherName(string);
    string getFatherName(void);

    string Fathername;
};

class Son:public Father
{
public:
    Son(string);
    void setName(string);
    string getName(void);

    string name;
};

GrandFather::GrandFather()
{
   cout<<"GrandFather is born!"<<endl;
}

void GrandFather::setGrandName(string n)
{
   Grandname = n;
}

string GrandFather::getGrandName()
{
   return Grandname;
}

Father::Father()
{
   cout<<"Father is born!"<<endl;
}

void Father::setFatherName(string n)
{
   Fathername = n;
}

string Father::getFatherName()
{
   return Fathername;
}

Son::Son(string n)
{
    cout<<"Son "<< n << " is born!"<<endl;
    setName(n);
    setFatherName(n+"'s Father");
    setGrandName(n+"'s GrandFather");
}

void Son::setName(string n)
{
   name = n;
}

string Son::getName()
{
   return name;
}

