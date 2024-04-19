// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sortArray(int* arr, int  n){
    if(n==0 || n==1) return;
    for( int i=0;i <n-1;i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);
}

int main() {
    int arr[8]={4,5,2,3,1,3,4,6};
    sortArray(arr, 8);
    for(int i=0; i < 8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}