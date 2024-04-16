#include<iostream>
using namespace std;
bool issorted( int arr[], int size){
    if(size == 0 || size == 1) return true;
    if(arr[0] > arr[1]){
        return false;

    }else{
        bool remainpart= issorted(arr+1, size-1);
        return remainpart;

    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int ans = issorted(arr, 6);
    if(ans) cout<<"the array is sorted ";
    else cout<< "the array is not sorted";
}