# include<iostream>
using namespace std;
    
class Rectangle{
    protected:
        int length;
        int breadth;
    public:
        Rectangle(int l=1, int b=1);
        Rectangle(Rectangle &r);
        int area(){return this->length * this->breadth;}
        int perimeter(){return (this->length + this->breadth)*2;}
        void set_length(int l);
        void set_breadth(int l);
        int get_length(){return this->length;}
        int get_breadth(){return this->breadth;}
};

class Cuboid: public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l, int b, int h);
        int get_height(){return this->height;}
        void set_height(int h);
        int volume(){return this->length * this->breadth * this->height;}
};

int main(){
    Rectangle *c;
    c = new Cuboid(1,2,3);
    cout<<c->get_length()<<endl;
    cout<<c->get_breadth()<<endl;
    //cout<<c->get_height()<<endl; Not posible
    //cout<<c->volume()<<endl; Not posible
}

Rectangle::Rectangle(int length, int breadth){
    this->length = length;
    this->breadth = breadth;
}

Rectangle::Rectangle(Rectangle &r){
    this->breadth = r.breadth;
    this->length = r.length;
}

void Rectangle::set_length(int length){
    this->length = length;
}
void Rectangle::set_breadth(int breadth){
    this->breadth = breadth;
}

Cuboid::Cuboid(int length, int breadth, int height):Rectangle(length,breadth){
    this->height = height;
}

void Cuboid::set_height(int height){
    this->height = height;
}