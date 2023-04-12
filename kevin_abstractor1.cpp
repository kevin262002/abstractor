#include<iostream>

using namespace std;

class A{
	
	public:
		
	virtual void calculate() = 0;
};

class B : public A{
	
	public: 
	
	int r;
	
	void calculate(){
		
		cout<<"Enter Redius :";
		cin>>r;
		cout<<"Area of Ciecle : "<<3.14*r*r<<endl<<endl;
		
						
	}	
};

int main(){
	
	B obj;
	
	obj.calculate();
	
	return 0;
}
