#include <iostream>
#include <memory>
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
    unique_ptr<Complex> ptr(new Complex(1,2));
    cout<<ptr->get_img()<<endl;
    unique_ptr<Complex> ptr2;
    ptr2=move(ptr);
    cout<<ptr2->get_img()<<endl;

    shared_ptr<Complex> ptr3(new Complex(10,20));
    shared_ptr<Complex> ptr4;
    ptr4=ptr3;
    cout<<ptr3->get_img()<<endl;
    cout<<ptr4->get_img()<<endl;

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