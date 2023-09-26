// protected is acess specifier in cpp allowing us to control the visibility of
// our class memers here we can acess the protected members through derived class and friend class 
// but they are inaccesiable outisde the class  
#include<iostream>
using namespace std;
/* we need protected memners if we want to hide the data of the class but 
still want that data to inherited derived class */

class animals {
	protected :
		string type;
	public:
		void eat(){
			cout<<"i can eat";
			
		}
		void sleep(){
			cout<<"  i am  sleepping "<<endl;
			
		}
};
class dog: public animals{
	public :
		void settype(string tp){
			type= tp;
		}
	void displayinfo(){
		cout<<" i am  a "<< type <<endl;
		
	}
	void bark(){
		cout<< "i can woof woof"<<endl;
		
	}	
};
int main(){
	dog d1;
	d1.eat();
	d1.bark();
	d1.sleep();
	d1.displayinfo();
	d1.settype();
	
}
