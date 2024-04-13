// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>> n;
    int** arr= new int *[n];
    int arrsize[n];
    for( int i=0;i< n;i++){
        cin>>arrsize[i];
    }
    for(int i=0; i< n; i++){
        
        arr[i]= new int[arrsize[i]];
    }
    for( int i=0; i< n ;i++){
        for(int j=0; j< arrsize[i];j++){
            cin>>arr[i][j];
        }
    }
     for( int i=0; i< n ;i++){
        for(int j=0; j< arrsize[i];j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
   
    
    
    

    return 0;
}