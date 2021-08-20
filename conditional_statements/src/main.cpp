#include <iostream>
using namespace std;

int main(){
    int a=1;

    if (a=0)
    {
        cout<<"awesome!"<<endl;
    }
    else if (a=1)
    {
        cout<<"damn!"<<endl;
    }
    else
    {
        cout<<"NO!"<<endl;
    }
    
    a=2;
    
    switch (a)
    {
    case 0:
         cout<<"YES!"<<endl;
        break;

    case 2:
         cout<<"NO!"<<endl;
        break;
    
    default:
        cout<<"OUT!"<<endl;
        break;
    }
}
    
    


