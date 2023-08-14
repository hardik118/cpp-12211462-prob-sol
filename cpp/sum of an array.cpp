#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"enter the numbers"<<endl;
	for (int i=0;i<5;i++){
		cout<<"enter the input"<<endl;
		cin>>arr[i];
		
	}
	int sum=0;
	for (int i=0;i<5;i++){
		cout<<arr[i]<<endl;
		sum=sum+arr[i];
		
		
	}
	printf("the average is; %d",sum/5);
	
}
