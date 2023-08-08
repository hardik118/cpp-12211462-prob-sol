#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
float add( float a , float b ){
	return a+b;
}
int main(){
	 int x=add(2,2);
	 cout<<x<<endl;
	float y=add(3.5f,5.6f);
	cout<<y;
}
