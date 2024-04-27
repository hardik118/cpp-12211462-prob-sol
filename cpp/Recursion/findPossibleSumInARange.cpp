// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
   int num=8,val=4, n=5;
   vector<vector<int>> arr ;
    time_t start, end; 
    time(&start); 
     
   for( int i=1;i<=n;i++){
       time(&start); 
       for( int j=1;j<=n;j++){
           if((i+j) < 6){
               for( int k=1; k<=n;k++){
                   if((i+j+k)<7){
                       for(int m=1;m<=n;m++){
                           if((i+j+k+m)==num && i<=j && j<=i && k<=m)
                           {
                               vector<int> temp={i,j,k,m};
                           arr.push_back(temp);
                           }
                       }
                   }
               }
           }
       }
       ios_base::sync_with_stdio(false); 
    // Recording end time. 
    time(&end);
      double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
        << time_taken << setprecision(5); 
    cout << " sec " << endl; 
   }
   for(vector<int> &i :arr){
       for(int &j : i){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   cout<<arr.size();

    return 0;
}