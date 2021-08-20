#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="hello";
    cout<<a<<endl;

    string b;
    cout<<"enter a string:"<<endl;
    cin>>b;
    cout<<b<<endl;

    string c;
    cout<<"enter a paragraph:"<<endl;
    getline(cin,c);
    cout<<c<<endl;

    /* basic functions */
    cout<<a.length()<<endl;
    cout<<a.capacity()<<endl;
    cout<<a.max_size()<<endl;
    b.resize(30);
    a.clear();
    c.empty();

    a = "hello";
    a.append(" world!");
    cout<<a<<endl;

    a.insert(5," the");
    cout<<a<<endl;

    a.replace(0,1,"Y");
    cout<<a<<endl;

    a.erase();
    cout<<a<<endl;

    a="hola";
    a.push_back('!');
    cout<<a<<endl;

    a.pop_back();
    cout<<a<<endl;

    char my_copy[10];
    a.copy(my_copy,a.length());
    cout<<my_copy<<endl;

    a="how are you?";
    cout<<a.find("are")<<endl;
    
    cout<<a.rfind("u")<<endl;
    cout<<a.find_first_of("o")<<endl;
    cout<<a.find_last_of("o")<<endl;
    cout<<a.substr(0,3)<<endl;
    
    a="Hello";
    b="hello";
    cout<<a.compare(b)<<endl;

    string::iterator it;
    
    for (it=a.begin();it!=a.end();it++){
        cout<<*it<<endl;
    }

    string::reverse_iterator it2;
    for (it2=b.rbegin();it2!=b.rend();it2++){
        cout<<*it2<<endl;
        *it2=*it2-32;
    }
    cout<<b<<endl;

}
