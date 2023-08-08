#include<iostream>
using namespace std;
struct stu_1{
	string name;
	int reg_num;
	float per_;
	
};
int main(){
	stu_1 student1;
	student1.name= "hardik";
	student1.per_= 89.7;
	student1.reg_num= 12211462;
	cout<<student1.name<<endl;
	
}
