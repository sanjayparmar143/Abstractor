#include<iostream>

using namespace std;

class Data{
	
	private:
		int a;
		
	protected:
		int b;
	
	public:
		int c;
		
};

class  modifiers : public Data{
	
	public:
		
		void Setter(){
			
		    b = 2;
			c = 3; 
		}
		
		void Getter(){
			
            cout<<b<<endl;
			cout<<c<<endl;		
		}
};

main(){
	
	modifiers obj;
	
	obj.Setter();
	obj.Getter();
}
