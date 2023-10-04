#include<iostream>
using namespace std;
class stack{
	public :
	int* arr;
	int top ;
	int size;
	public:
		stack(){
			arr= new int[size];
			top=-1;
		}
		void push(int val){
		
			top++;
			arr[top]=val;
				
			if(top==size-1){
				cout<< "stack is obverflow "<<endl;
				return ;
			}
			
		}
		void pop(){
			if(top==-1){
			cout<<"stak is empty"<<endl;
			
			}
			top--;
			
		}
		int Top(){
			if(top==-1){
				cout<<" no element in stack "<<endl;
				return -1;
			}
			return arr[top];
		}
		bool empty(){
			return top== -1;
			
		}
};
 int main(){
 	
 	stack s;
 	s.push(4);
 	s.push(5);
 	s.push(6);
 	s.pop();
 	cout<<s.Top();
 	
 	
 }
 	
