#include<iostream>
/*we have same fucntion in base class as wellas derived class .when  we call the function  using the objesct of derived class
 the function of derived class is executed of the base class */
 ///////////////////////////
 /* wehn we class print() using d1, it ovrwrites the print of base class 
 its a runtime polymorphism  becasye the fucntion is not resolved  by the compiler 
  but  it is resolved at run time */
using namespace std;
class base{
	public :
		virtual void print(){
			cout<< "from base"<<endl;
			
		}
};
class derived: public base{
	public :
		void print(){
			cout<<" from  derived "<<endl;
			
		}
};
// child class is over writing the parent class 
int main(){
	derived d1;
	base* b1= &d1;
	b1->print();
	d1.print();
}
