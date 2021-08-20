#include <iostream>
using namespace std;

int main(){
    cout<<"start"<<endl;
    for (int i=1;i<=10;i++){
        cout<<"print: "<<i<<endl;
    }

    int i=0;
    while(i<10){
        cout<<"print: "<<i<<endl;
        i++;
    }
    i=0;

    do{
        cout<<"print: "<<i<<endl;
        i++;
    }
    while(i<10);

    int arr[] = {2,2,3,4,5};
    for(auto a:arr)
        cout<<a<<endl;
    
}
