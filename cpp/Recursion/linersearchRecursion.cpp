// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool sumfun(int arr[], int size, int key){
   
    if(size==1){
        return (key==arr[0]);
    }
    if(arr[0]==key) return true;
    else{
        return  sumfun(arr+1, size-1, key);
    }
    
}

int main() {
    int arr[5]= {1,2,3,4,5};
    bool s= sumfun(arr,5,9 );
    cout<<"=found  is "<< s;
    

    return 0;
}