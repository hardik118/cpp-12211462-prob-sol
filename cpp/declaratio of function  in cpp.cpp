#include<iostream>
using namespace std;
struct employee{
	string name;
	int age;
	float sal_;
	int emp_id;
	 
};
void display (employee);


int main(){
	employee emp1;
	emp1.age= 18;
	emp1.emp_id=12211462;
	emp1.name="hardik";
	emp1.sal_=0.0;
	display(emp1);
	
}
void display (employee emp){
	cout<<"age is; "<<emp.age<<endl;
	cout<<"id is ; "<<emp.emp_id<<endl;
	cout<<"name is ; "<<emp.name<<endl;
	cout<<"sal is ; "<<emp.sal_<<endl;
}
