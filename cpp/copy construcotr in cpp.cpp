#include<iostream>
using namespace std;
class num{
	private:
		int a;
		public:
			num(){
				cout<<"default contructor"<<endl;
				a=0;
			}
			num(int num){
				cout<<"parametrized contructor"<<endl;
				a=num;
			}
			num(num &obj){
				cout<<"copy constructor "<<endl;
				a=obj.a;
			}	
				

void display(){
	cout<<"the value of a is: "<<a<<endl;
	
}
};
int main(){
num n1;
n1.display();
num n2(3);
n2.display();
num n3(n1);
n3.display();
}
