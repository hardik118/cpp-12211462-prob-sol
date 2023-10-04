#include<iostream>
using namespace std;

// a vrtual fucntoion is a menber function of the base class we pick to redefine 
// in derived class
/*a virtual fcuntion is used in bse class in order to ensure that the fucntion is  overwritten 
this especially applies to base class where a pointer of abse class points to an object of
an object of a dervued class .
*/
class base{
	public :
	virtual void print ()
{
	cout <<" base ";
	
	}	
};
class derived : public base {
	public :
		void print() overide {
			//when using virtual functions it is possible to make mistakes while declaring 
			// a member function of the  derived class using override idetntifer promts the compiler to display error 
			// possible msitakes : fucntion with incorrect speelings  , names diffrent paarmenetrs , diffrent retunr types
			
			cout<< "derived "
			
		}
	
};
/* the over write identifier specifies the fucntion of tye derived classs that obverrides 
the memnber  functoin of the base class*/
int main(){
	derived d1;
	base* b1= %d1;
	b1-> print();
	
}
