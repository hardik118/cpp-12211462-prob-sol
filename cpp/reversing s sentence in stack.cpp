#include<iostream>
#include<stack>
using namespace std;
void  rev_(string sen){
	stack<string> s;
	for(int i=0;i<sen.size();i++){
		string word= " ";
		while(sen[i] != ' ' && i<sen.size()){
			word+=sen[i];
			i++;
		}
		s.push(word);
		
		
		
	}
	while(!s.empty()){
		cout << s.top();
		s.pop();		
	}
	cout<<endl;
	

	
}
int main(){
	string sen= "hello how are you";
	rev_(sen);
}
