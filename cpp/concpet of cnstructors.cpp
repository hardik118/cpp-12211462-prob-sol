#include<iostream>
using namespace std;
class student{
	public:		
	string name;
	int age;
	string gender;
// a constructor is a special type of method  fucntion
// that is called auotmatically  is called a default constructor
// contructor name is same as class
	 student(){
	 	// default contructor
		cout<<"default constructor is called "<<endl;
		
	}
	student(string mygender){
		gender= mygender;
	}
	student(string myname, int myage, string mygender){
		cout<<"parametrized contructor invoked "<<endl;
		name=myname;
		age =myage;
		gender= mygender;
		
	}
};
 int  main(){
 	//when the objectd created mathches the signature  of the contrcor created 
 	// that constructor is initialized
 	student s1("HELLO",18,"m");
 	student s2;
 	student s3("hardik",19,"f");
 	//even though s1 is called but still the default contructor  s1 is called 
// in case of the cout's.
 	cout<<s1.name<<" ";
 	cout<<s1.age<<endl;
 	cout<<s3.gender<<endl;
 	// default contructor has no parameter however input are required or canbe added in case of a parametirixed constrcutor 
 }
