#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class rectangle{
	double  length;
	 double width;
	int calculate (rectangle& rect){
		return rect.length* rect.width;
		
	}
};
int main(){
	rectangle react1;
	cout<<react1.calculate(2,4);
	
}
