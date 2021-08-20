#include <iostream>
using namespace std;

class Outer{
    private:
        int a=0;
    public:
        static int c;
        class Inner{
            public:
                void display(){cout<<"Im inner!"<<c<<endl;}
        };
        Inner i;
        void show(){i.display();}
};

int Outer::c=10;

int main(){
    Outer out;
    out.show();
}