#include<iostream>
using namespace std;
// multilevel inheritence -> when one class inherits onether class 
//which further is inherited by another  class
class animal {
	public :
 		void eat(){
 			cout<< "dog is eating "<<endl;
 			
		 }
		 void sleep (){
		 	cout<<" animla os sleeping "<<endl;
		 	
		 }
};
class dog: public animal{
	public:
	void bark(){
		cout<<" dpg is barking "<<endl;
		
	}
};
class babydog : public dog{
		public:
	void woof(){
		cout<<" babydog woofs "<<endl;
		
	}
};
int main(){
babydog b1;
b1.sleep();
}
