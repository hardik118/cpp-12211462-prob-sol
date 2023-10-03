#include<iostream>
using namespace std;
class base{
	public :
		void print(){
			cout<< "from base"<<endl;
			
		}
};
class derived: public base{
	public :
		void print(){
			cout<<" from  derived "<<endl;
			
		}
};
int main(){
	derived d1;
	d1.print();
}
