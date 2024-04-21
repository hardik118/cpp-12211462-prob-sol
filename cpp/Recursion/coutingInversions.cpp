#include <bits/stdc++.h> 
long long  merge( long long *arr, int s, int e){
int mid=(e+s)/2;
int len1= mid-s+1;
int len2=e-mid;
int *first = new int[len1];
int *second = new int[len2];
int k=s;
for( int i=0;i < len1;i++){
    first[i]=arr[k++];
}
k=mid+1;
for( int i=0; i < len2;i++){
    second[i]=arr[k++];
}
int index1=0;
int index2=0;
k=s;
long long count=0;
while( index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
    }else{
        arr[k++]=second[index2++];
        count+=len1-index1;

    }
    
}
while(index1< len1){
    arr[k++]=first[index1++];
}
while(index2<len2){
    arr[k++]=second[index2++];
}
delete []first;
delete []second;
return  count;
}


long long sort( long long  *arr, int s , int e ){
if(s>=e){
    return 0;
}
int mid=(e+s)/2;
long long count=0;
count+=sort(arr,s , mid);
count+=sort(arr, mid+1, e);
count+=merge(arr, s , e);
return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    sort(arr, 0 , n-1);
}