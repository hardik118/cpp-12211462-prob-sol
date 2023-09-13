#include<iostream>
using namespace std;
	int sum(int num1, int num2){
		return num2+num1;
}
double sum(double num1,double num2){
	return num1+num2;
	
}
	int sum(int num1, int num2, int num3){
		return num2+num1+num3;
}
int main(){
	

cout<< sum(2,3)<<endl;
cout<<sum(3.4,4.3)<<endl;
cout<<sum(2,3,4)<<endl;
return 0;
// this is a compile time polymorphism because the compiler knwos whiuch fucntin knwos which fucntion to execute
//there are two types of polymorphism run time polymorphism 
// this is knows as compile time polymorphism because the compiler knwos which fucntion to execute before ,
// beore the program is compiled;
}



