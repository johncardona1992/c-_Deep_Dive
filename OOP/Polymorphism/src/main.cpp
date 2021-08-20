#include <iostream>
using namespace std;

class Base{
    public:
    /* concrete function */
    void display(){cout<<"I am Base"<<endl;}
    /* virtual function */
    virtual void func(){cout<<"Still I am from Base class"<<endl;}
    /* pure virtual function: mandatory to overide by derived class*/
    virtual void pure()=0;
};

class Derived: public Base{
    public:
    void display(){cout<<"I am Derived"<<endl;}
    void func(){cout<<"I am from Derived class"<<endl;}
    void pure(){cout<<"I am pure virtual function"<<endl;}
};

int main(){
    Derived b;
    b.display();

    Base *ptr = new Derived;
    /* concrete functions does not get overided on a Base class pointer */
    ptr->display();   
    /* virtual functions are always overided even with base class pointers*/
    ptr->func();   
    ptr->pure();   
}