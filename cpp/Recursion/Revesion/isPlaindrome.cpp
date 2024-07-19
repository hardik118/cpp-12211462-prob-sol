// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
bool  reverse(string& str, int i, int j){
 if(i>j) return true;
 if(str[i]!=str[j]){
     return false;
 }else{
    return  reverse(str, i++, j--);
 }
 
}

int main() {
string s="";
  bool ans =reverse(s, 0, 5);
  cout<<ans;
  

  
    
    
    

    return 0;
}