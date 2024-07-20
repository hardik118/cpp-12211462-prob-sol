// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void bublesort(int *arr, int n){
    if (n==0 || n==1){
        return ;
    }
    for( int i=0; i< n;i++){
        if(arr[i] > arr[i+1] ){
            swap(arr[i], arr[i+1]);
            
        }
        
    }
    bublesort(arr, n-1);
    
    
}
int main() {
int arr[6]={2, 90, 45, 0, 1,5};
 bublesort(arr, 5);
 for( int i :arr){
     cout<<i<<" "<<endl;
     
 }
 

    return 0;
}

/*this is worghh*/