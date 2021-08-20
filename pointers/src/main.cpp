#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *p = &a;
    // creating variable on the heap
    /* always initilize pointers (use new or the address of a variable on the stack) */
    int *h = new int[5];
    h[0]=12;
    h[1]=13;

    cout<<a<<endl;
    cout<< &a <<endl;
    cout<< p <<endl;
    cout<< &p <<endl;
    cout<< *p <<endl;
    cout<< h[1] <<endl;

    /* use delete to prevent memory leak */
    delete []h;
    h = new int[10];
    h[9]=11;
    cout<< h[1] <<endl;
    cout<< h[9] <<endl;

    delete []h;
    h=nullptr;

    /* pointers arithmetic */
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = arr;
    cout<< arr <<endl;
    cout<< *arr <<endl;
    cout<< *(arr+2) <<endl;
    cout<< *ptr <<endl;
    ptr++;
    cout<< *ptr <<endl;
    ptr=ptr+2;
    cout<< *ptr <<endl;

    /* reference or alias */
    int x = 1;
    int &y = x;

    y = 10;
    cout<<x<<endl;
    return 0;
}