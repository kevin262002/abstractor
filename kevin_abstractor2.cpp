#include<iostream>

using namespace std;

class parent{
	
	public:
		
		virtual void childdetails(){
			
			cout<<"Parent"<<endl;
		} 
};

class child : public parent{
	
	public:
		
		void childdetails(){
			
			cout<<"Child"<<endl;
		}
};

int main(){
	
	parent obj1,*obj2;
	child obj3;
	
	obj2 = &obj3;
	
	obj2->childdetails();
	obj1.childdetails();
	
	return 0;
}
