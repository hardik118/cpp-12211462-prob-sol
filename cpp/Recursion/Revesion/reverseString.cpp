// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void  reverse(string str, int s, int e){
 if(s==e){
     cout<<str[e];
     return;
 }
 reverse(str, s+1, e);
 cout<<str[s];
 return ;

    
}

int main() {
string s="hardik";
  reverse(s, 0, 5);

  
    
    
    

    return 0;
}