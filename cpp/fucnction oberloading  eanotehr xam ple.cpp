#include<iostream>
using namespace std;
class val{
	int value;
	public :
		val(){
			int num=0;
			
		}
	void input(){
		cout<<"enter a num"<<endl;
		cin>>num;
	
	void operator !(){
		num=num*(-1);
		
	}
	void display(){
		cout<<":the result is ; "<< num<<endl;
		
	}
};
int main(){
	val v1;
	v1.input();
	!v1;
	v1.display();
	return 0;
}
