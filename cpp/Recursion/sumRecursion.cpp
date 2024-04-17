// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sumfun(int arr[], int size){
   
    if(size==0){
        return 0;
    }else{
        return arr[0] + sumfun(arr+1, size-1);
    }
}

int main() {
    int arr[5]= {1,2,3,4,5};
    int s= sumfun(arr,5);
    cout<<"sum is "<< s;
    

    return 0;
}