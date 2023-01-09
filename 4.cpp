#include<iostream>

using namespace std;

class Data{
	
	public:
		
		int Radius = 1;
		int Base = 2;
		int Height = 3;
		int Length = 4;
		int Breadth	= 5;
		
		virtual void calculate() = 0;
};

class Math : public Data{
	
	public:
		
		void calculate(){
			
    		cout<<"Area of cirlce is : "<<3.14*Radius*Radius<<endl;
    		cout<<"Area of triangle is : "<<1.0*Base*Height<<endl;
    		cout<<"Area of rectangle is : "<<Length*Breadth<<endl;
		}
};

main(){
	
	Math obj;
	
	obj.calculate();
}
