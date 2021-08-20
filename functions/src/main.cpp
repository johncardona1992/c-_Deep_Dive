#include <iostream>
#include <string>
using namespace std;

void display(){
    cout<<"hey!"<<endl;
}

float add(float x, float y){
    return x+y;
}

/* function overloading */
float add(int x, int y, int z){
    return x+y+z;
}

string add(string x, string y){
    return x.append(y);
}

/* function template */
template<class T>
T maxim(T x, T y){
    return x>y?x:y;
}

/* default paraneters */
int max(int a,int b=0, int c=100){
    return a>b && a>c ? a:(b>c?b:c);
}
int min(int a,int b=0, int c=100){
    return a<b && a<c ? a:(b<c?b:c);
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

/* return by address */
int *ptr_func(){
    int *p = new int[5];
    for(int i=0;i<5;i++){
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}

/* return by reference */
int & ref_func(int &x){
    return x;
}

/* static variables: same as global variables but limited by the scope of a function */
void static_func(){
    static int v=0;
    int a =0;
    
    v++;
    a++;
    cout<<v<<endl;
    cout<<a<<endl;
}


int main(){
    int a=10;
    int b=20;
    int *ptr;
    int (*fp)(int,int,int);

    display();
    cout<<add(0.5,0.4)<<endl;
    cout<<add(5,4,1)<<endl;
    cout<<add("hola ","mundo")<<endl;
    cout<<maxim(0.5,0.4)<<endl;
    cout<<maxim(5,4)<<endl;
    cout<<max(5)<<endl;
    cout<<max(5,2,1)<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    ptr = ptr_func();
    cout<<ptr<<endl;
    for (int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
    delete ptr;
    ptr = nullptr;

    a=100;
    ref_func(a)=25;
    cout<<a<<endl;

    static_func();
    static_func();
    static_func();
    static_func();
    static_func();

    fp=max;
    cout<<(*fp)(1,2,3)<<endl;
    fp=min;
    cout<<(*fp)(1,2,3)<<endl;

    return 0;
}