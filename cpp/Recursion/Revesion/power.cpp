
// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    
    int ans= power(a, b/2);
    if(b&1){
        return ans*ans*a ;
        
    }else{
        return ans *ans ;
    }
}
int main() {

  int  ans =power(3, 2);
  cout<<ans;

    return 0;
}