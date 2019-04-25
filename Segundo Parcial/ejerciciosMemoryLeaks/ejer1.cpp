#include<iostream>
using namespace std;

class Base
{
public:
    int* p;
    Base(){ p = new int; }
    ~Base(){ delete p;}
};

class Child : public Base
{
public:
    int* myP;
    Child(){myP = new int; }
    ~Child(){delete myP; }
};

int main()
{
    Child* theChild = new Child();
    Base* polimorphicInstance = (Base*)theChild;
    delete polimorphicInstance;
}

