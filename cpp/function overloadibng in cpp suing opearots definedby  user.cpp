#include<iostream>
using namespace std;
class fraction{
	int a ;
	int b;
	public:
		fraction(){
			a=0;
			b=0;
			
		}
	void input(){
		cout<<"entr a num"<<endl;
		cin>>a;
		cout<<"entr a num2"<<endl;
		cin>>b;
	}
	fraction operator *(fraction &obj){
		fraction temp;
		temp.a=a.*obj.a;
		temp.b=b.*obj.b;
		return temp;
	}
	void display(){
		cout<<"the fraction is "<<a<<"/"<<"b";
			}
};
int main(){
	fraction f1,f2;
	cout<<"enetr the first fraction "<<endl;
	f1.input();
	cout<<"enetr the second fraction "<<endl;
	f2.input();
	
	result =f1*f2;
	result.display();
	
}
