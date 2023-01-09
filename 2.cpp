#include<iostream>

using namespace std;

class Parent{
	
	protected:
		
		char name[100];
		int age;
		
	
	public:
		
		virtual void Childinfo(){
			
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
}; 	

class Child : public Parent{
	
	public:
		
		void Childinfo(){
			
			cout<<"Enter name : ";
			cin>>name;
			
			cout<<"Enter age : ";
		 	cin>>age;
			
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};

main(){
	
	Parent *object1;
	Child object2;
	
	object1  = &object2;
	
	object1->Childinfo();
}
