#include<iostream>
using namespace std;
class occur{
	string str;
	int count=0 ;
	public:
	void count_ (char ch){
		for(int i=0;i<str.length();i++){
			if(str[i]==i){
				count++;
			}
		}
		cout<<"the occurennce of"<<str<<" is"<<count ;
		
	}
};
int main(){
	string instr;
	cin>>instr;
	occur oc_;
	char newch;
	cin>>newch;
	oc_.count_(newch);
	
}
