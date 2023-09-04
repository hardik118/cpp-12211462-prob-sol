#include<iostream>
using namespace std;
// Write a C++ class called
 //"Employee" that has three private 
 //member variables: "name", "salary", and "employeeCode".
 // The class should have a constructor that initializes these member variables
 // and a public member function called "displayInfo" that prints out the
// employee's name, salary, and employeeCode.
class Employee{
	public:
	string name;
	int salary;
	int employeecode;
	Employee(){
		
	}
	
	Employee(string empname,int sal, int empid){
		name= empname;
		salary=sal;
		employeecode=empid;
	}
	
};
void display(string name, int sal, int empid){
	cout<<"name :"<<name<<endl;
	cout<<"salary:"<<sal<<endl;
		cout<<"employeecode :"<<empid<<endl;	
}
 int main(){
 	Employee s1("hardik",2000,12);
 	display(s1.name,s1.salary,s1.employeecode);
 }
