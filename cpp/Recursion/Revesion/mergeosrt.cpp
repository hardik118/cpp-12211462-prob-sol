// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void mergesort(int *arr, int s, int e){
    int mid =s+(e-s)/2;
    int len1= mid-s+1;
    int len2= e-mid;
    
    int *first= new int[len1];
    int *second= new int[len2];
    
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
    for( int i=0 ;i< len2;i++){
        second[i]=arr[k++];
    }
    
    int index1=0;
    int index2=0;
    k=s;
    while(index1< len1 && index2<len2){
        if(first[index1]<=second[index2]){
            arr[k++]=first[index1++];
        }else{
            arr[k++]=second[index2++];
        }
    }
    while( index1< len1){
          arr[k++]=first[index1++];
    }
    while(index2< len2){
         arr[k++]=second[index2++];

    }

    delete[] first;
    delete[] second;
    
    
}

void  merge(int * arr, int s, int e){
    if(s>=e) return ;
    int mid=s+(e-s)/2;
    merge(arr, s, mid);
    merge(arr, mid+1, e);
    mergesort(arr, s ,e);
    
    
    
}

int main() {
    int arr[8]={90, 23, 43, 2, 2, 7, 109, 108};
    int size=6;
    merge(arr, 0, 7);
    for( int i:arr){
        cout<<i<<' '<<endl;
        
    }
    
    
}