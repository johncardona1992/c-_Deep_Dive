#include <iostream>
#include <string>
using namespace std;

class Complex{
    private:
        float real;
        float img;
    public:
        Complex(float r=0, float i=0);
        Complex(Complex &num);
        void set_real(float r);
        void set_img(float i);
        float get_real(){return this->real;}
        float get_img(){return this->img;}
        Complex operator+(Complex c);

};

int main(){
    Complex *ptr = new Complex(1,2) ;
    Complex a(4,5);
    Complex b(*ptr);
    delete ptr;/* freed the memory */
    ptr = nullptr;/* erase pointer address */

    a = a + b;
    cout<<a.get_real()<<endl;
    cout<<a.get_img()<<endl;
    return 0;
}

Complex::Complex(float real, float img){
    this->real = real;
    this->img = img;
}
Complex::Complex(Complex &num){
    this->real = num.real;
    this->img = num.img;
}

void Complex::set_real(float real){
    this->real = real;
}
void Complex::set_img(float img){
    this->img = img;
}

Complex Complex::operator+(Complex c){
    Complex result;
    result.real=this->real + c.real;
    result.img=this->img + c.img;
    return result;
}