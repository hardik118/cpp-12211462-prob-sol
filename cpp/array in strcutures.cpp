#include<iostream>
using namespace std;
struct emp{
	int emp_id;
	string emp_name;
	float emp_sal;
	int experiance ;
	void incre_sal(int exp){
	  experiance = exp;
	 if(experiance >=10){
	 	emp_sal= emp.emp_sal+emp.emp_sal*1.10;
	 	
	 }
	 else if (experiance >=5 && exp<=7){
	 	emp_sal= emp.emp_sal+emp.emp_sal*0.8
	 }
	 else {
	 	emp_sal+=emp.emp_sal*0.1;
	 	
	 }
	}
};
int main(){
	int n;
	cin>>n;
	emp emp1[n];
	for(int i=0;i,n;i++){
		cin>>emp1[i].emp_id>>emp1[i].emp_name>>emp1[i].emp_sal>>emp1[i].experiance;
		emp1[i].incre_sal();
	}
	for(int i=0;i<n;i++){
		cout<<emp1[i].emp_id<<endl;
		cout<<emp1[i].emp_name<<endl;
		cout<<emp1[i].emp_sal<<endl;
		cout<<emp1[i].experiance<<endl;
	}
	
}
