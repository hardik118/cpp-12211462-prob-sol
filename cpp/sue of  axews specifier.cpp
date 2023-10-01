#include<iostream>
using namespace std;
class person {
	public:
	string name;
    int age ;
     person(string name1 , int age1 )
    {
    	 name = name1;
    	age = age1;
	}
	displayinfo(){
		cout<<name<<endl;
		cout<<age<<endl;
		
	}
};
class employee :public person{
	public:
		int employeeId ;
        double salary;
  
employee(name1,  age1 , int empid, double sal){
	name = n;
	age= age;
	employeeId = empid;
	salary = sal;	
}
displayinfo(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<employeeId<<endl;
		cout<<salary<<endl;
	}

		
};	
    
int main(){
person person1("Alice", 30);
employee employee1("Bob", 25, 1001, 50000.0);

person1.displayinfo();
employee1.displayinfo();

	
}
