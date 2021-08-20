#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    string str;

    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"sum is "<<c<<endl;

    cout<<"May i know your name"<<endl;
    getline(cin, str);
    cout<<"hi! "<<str;
    
    return 0;
}

