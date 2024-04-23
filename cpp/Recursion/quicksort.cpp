// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot= arr[s];
    int count=0;
    for( int i=s+1; i <=e;i++){
        if(arr[i]<= pivot){
            count++;
        }
    }
    int pivotIndex= s+count;
    swap(arr[pivotIndex], arr[s]);
    int i=s,j=e;
    while( i< pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int arr[], int s, int e){
    if(s>=e) return ;
    int p=partition(arr, s,e);
    //left()
    quicksort(arr, s, p-1);
    //right()
    quicksort(arr, p+1, e);
    
}
int main() {
    int arr[7]={2,4,1,6,9, 0 , 0};
    int n=7;
    quicksort(arr, 0, n-1);
    for( int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}