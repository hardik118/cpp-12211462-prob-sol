#include<iostream>
using namespace std;
/* 
expectio are runtime anomilies or unusual conditions that s program may encounter 
during excecution;
two types -> synchronous -> the exception which occur during tye program execution due to some
fault in input data-: out of range , dividion by zero.
2-> asychronous caused by events or faults unrelated to program and beyond  the contorl 
or program -> keyboard -> keyoboard failure disk failure.
we only deal with synchronous 
1-> detect the problme ( hit the exception)
2-> inform that an occur has been detected (throw the expection)
3-> recieve error information (catch the exception0
4-> take  a corrective actions
exception->
handling mechanism basically builds upon three keyword 
-> try
-> catch
-> throw 
*/
/*
int  main(){
	int a ,c;
	cout<<"enter valuef as a and b";
	cin>>a>>b;
	try{
		if(b!=0) cout <<a/b;
		else throw  b;
	}
	catch(int a){
		cout<<"division by zero"<<e<<endl;
			}
}*/

int main(){
	int i;
	int arr[5]= {1,2,3,4,,5};
	try{
		i=0;
		while(1){
			if(i!=5{
			cout <<arr[i]<<endl;
			i++;
		}
		else {
			throw i;
			
		}
	}
}
catch (int e){
	cout<< "array index was out of bounds"<<e<<enddl;
	
}
/*
 int main(){
 try {
 sqr();
}
catch(int e){
cout<<caught 

























