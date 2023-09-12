#include<iostream>
using namespace std;
// operator overloading _> we can oberload a operator  as long as we are operating on user-
// defined types like objects and strcutures 
// we cannot use oprators overloading for basic types such as int , double etc;
class count {
	int value ;
	public:
		count(){
			value =0;
			
		}
		void operator ++(){
		value =value +2;	
		}
		void display(){
			cout<<"couint "<<value<<endl;
			
		}
}; 
int main(){
	count count1;
	++count1;
	count1.display();
	
}
