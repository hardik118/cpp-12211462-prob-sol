#include<iostream>
using namespace std;
class person(){
	public:
		person(){
			cout<<"defalut contrctor "<<endl;
			
		}
		// distructor is used to destroy
		// the object of a class when the scope 
		// it has the same name as contructor with tilde~
		~person(){
			
		}
		// we only have one destrucutor in a class it cant have acess specifiers ,
		//parameters or retunr type , we cannot define deconstructors in structure 
		//we cannot oveload or inherit in deconstructor
}
int main(){
	
}
