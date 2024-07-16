// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int  fact(int num){
if(num==0) return 1  ;

    int numfact= num*fact(num-1);
    return numfact;
}

int main() {
    int num=5;
    int factnum=fact(5);
    cout<<factnum<<endl;
    
    

    return 0;
}