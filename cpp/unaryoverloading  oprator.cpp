// rules for operator overloading ->
/* at least one of the opeeators must be having one user defined 
class objects->
-,:
*/
#include<iostream>
using namespace std;
class unaryoverloading{
	int hr, min;
	void input (){
		cout<<"enetr the datd"<<endl;
		cin>> hr;
		cout<<endl;
		cin>>min;	
	}
	void operator ++(int){
		hr++;
		min++;
		
	}
	void operator --(int){
		hr--;
		min--;
		
	}
	void output(){
		cout<<"time is ; "<<hr<<"hr"<<min<<"min":
			}
};
int main(){
	unaryoverloading obj;
	obj.input();
	obj++;
	cout<<"after  increment ";
	obj.output();
	obj--;
	cout<<"after dercrement :";
	obj.output();
	
}
