# include<iostream>
using namespace std;
    
class Base{
	public:
	Base(){
		cout<<"Base constructor called"<<endl;
	}
	virtual ~Base(){
		cout<<" Base Destructor called"<<endl;
	}
};

class Derived:public Base{
	public:
	Derived(){
		cout<<"Derived constructor called"<<endl;
	}
	~Derived(){
		cout<<" Derived Destructor called"<<endl;
	}
};

class Demo
{
	int *p;
	public:
		Demo(){
			p = new int[10];
			cout<<"constructor called"<<endl;
		}
		~Demo(){
			/* you must delete the pointer attribute on the destructor otherwise memoryleak */
			delete []p;
			cout<<"Destructor called"<<endl;
		}
	
};

void func(){
	Demo *d = new Demo();
	delete d;
}

int main()
{
	func();
	Base *ptr = new Derived();
	delete ptr;
	return 0;
}