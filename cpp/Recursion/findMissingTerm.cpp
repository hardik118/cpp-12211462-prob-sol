// Online C++ compiler to run C++ program online
#include <bits/stdc++.h> 
using namespace std;



int main() {
   vector<int> arr ={9,2,3,4,5,6,8,7};
   int n=8;
 sort(arr.begin(), arr.end());
 int min = arr[0];
for( int i=0; i<n;i++){
    if(arr[i]!=i+1){
        cout<<i+1;
        break;
        
    }
}
 
  
   
   
}