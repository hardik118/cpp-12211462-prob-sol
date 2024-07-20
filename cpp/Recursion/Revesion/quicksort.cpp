// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <iterator>
using namespace std;

int   partition(int arr[], int s, int e){
    int start= arr[s];
    int count=0;
    
    for( int i=s+1; i<=e; i++){
        if(arr[i]<= start){
            count++;
        }
    }
    int pivot =s+count;
    swap(arr[pivot], arr[s]);
    int x=s;
    int y=e;
    while( x< pivot && y>pivot ){
        while(arr[x]<= arr[pivot]){
            
            x++;
        }
        while(arr[y] > arr[pivot]){
           
            y--;
        }
        if( x< pivot && y>pivot){
            swap(arr[x++], arr[y--]);
        }
    }
    
    return pivot ;
}

void  quicksort(int  arr[], int s, int e){
    if(s>=e) return ;
    
   int mid = partition(arr, s, e);
    quicksort(arr, s, mid-1 );
    quicksort(arr, mid +1 ,e);
    
    
    
    
}

int main() {
    int arr[6]={90, 23, 43, 2, 2, 108};
    int size=6;
    quicksort(arr, 0, 5);
    for( int i:arr){
        cout<<i<<' '<<endl;
        
    }
    
    
}