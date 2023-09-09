#include <iostream>
using namespace std;

int fib(int n){
    //base case 
    if(n==0) return 0;
    if(n==1) return 1;

    cout<<fib(n-1) + fib(n-2);
    return  fib(n-1) + fib(n-2);
}
int main(){
	int result =fib(5);
	cout<<fib(6)<<endl;
	
}
