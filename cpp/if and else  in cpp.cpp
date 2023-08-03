#include <iostream>
#include<string>
using namespace std;
int main(){
	int x;
	string name;
	getline(cin,name);
	cout<<name<<endl;
	cout<<"enter your num  to check even or odd"<<endl;
	cin>>x;
	if(x%2==0){
		cout<<"yes num is even "<<endl;
	}
	else{
		cout<<" no num is odd"<<endl;
	}
	
	
}
