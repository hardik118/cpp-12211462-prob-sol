/* when a child calss is derived from parent class the child class has the aceess to all properties to parent class 
 but that does not mean  the parent class  has acess to child class  properties*/
 //  inheritence is a process in which an object accquires all the properties and behaviour of its paretn object auotmatiucally 
 // in such a way , we can reuse ,extend or modify the attributes and bheaviours which are defined in thge other class ;

 	// advantge reusability 
 	// there arew two classe NAMELY  BASE CLASS AND PARENT CLASS 
 	#include<iostream>
 	using namespace std;
 	/* singel level -> when one class inherits another class
 	*/
 	
 	
 	class animal{
 		public :
 		void eat(){
 			cout<< "dog is eating "<<endl;
 			
		 }
		 void sleep (){
		 	cout<<" animla os sleeping "<<endl;
		 	
		 }
 		
	 };
	 class dog  : public animal{
	 	public:
	 		void brak(){
	 			cout<< "dog is braking "<<endl;
	 			
			 }
	 };
	 int main(){
	 	dog d1;
	 	d1.eat();
	 }
 
