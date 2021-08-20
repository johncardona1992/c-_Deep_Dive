#include <iostream>
using namespace std;

class Your;

class Base{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        static int count;
        friend Your;
        static int getcount(){return count;}
        Base(){
            count++;
        }
};

int Base::count=0;

int main(){
    cout<<Base::count<<endl;
    Base x;
    cout<<x.getcount()<<endl;
}