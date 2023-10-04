#include<iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> s;
	// push;
	s.push(1);
	s.push(2);
	s.push(3);
	
	//
	cout<<"size of the array is "<<s.size()<<endl;
	s.pop();
	s.pop();
	s.pop();
	
	//
	if(s.empty()){
		cout<<"stack is empty"<<endl;
		
	}
	else{
		cout<<"stack is not empty"<<endl;
		
	}
	
	
};


