#include<iostream>

using namespace std;

class cricket{
	
	public:
		
		virtual void Player() = 0;
};

class bcci : public cricket{
	
	public:
		
		void Player(){
			
			cout<<"playing 11";
		}
};

main(){
	
	bcci six;
	
	six.Player();
}
