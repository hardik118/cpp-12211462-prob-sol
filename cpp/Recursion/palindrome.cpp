// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool palin_drom(string str, int s=0 ){
    if(s>=str.size()/2) {
        return true;
    }
    if(str[s]!=str[str.size()-s-1]){
     return false;   
    } 
    else {
        return  palin_drom(str, s+1);
    }
}


int main() {
   string str="boooob";
   bool ans = palin_drom(str);
   cout<<"String is palindrom :"<<ans;

    return 0;
}