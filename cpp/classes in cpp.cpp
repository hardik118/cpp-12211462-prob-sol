#include<iostream>
using namespace std;
class A{
	public:
		
	int a,b;
	public:
		A(int a , int b){
			a=a;
			b=b;
			
		}
		void display(){
			cout<<a<< " "<<b<<endl;
			
		}
};
int main(){
	A obj1(10,20);
	obj1.display();
	
}
