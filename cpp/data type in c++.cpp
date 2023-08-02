#include <iostream>
using namespace std;
int main(){
	string name;
	int x=9;
	x=0;// overwrting the variable  x
	 const double y=9.7889;
	// to stop future overwriting we use const
	char ch='h';
	bool bl=1;
	string str ="hello";
	cout<<x<<endl;
	cout<<bl<<endl;
	// camle case myIntegreThisIsMine
	int userinput ;
	cout<<"enter a number"<<endl;
	cin>>userinput ;
	cout<<"the number is : "<<userinput<<endl;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<name<<endl;
}
