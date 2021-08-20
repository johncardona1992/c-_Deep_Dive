#include <iostream>
using namespace std;

class Your;

class My{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        int c=3;
        friend Your;
};

class Your{
    public:
        My m;
        void display(){cout<<m.a<<m.b<<m.c<<endl;}
};

int main(){
 Your x;
 x.display();
}