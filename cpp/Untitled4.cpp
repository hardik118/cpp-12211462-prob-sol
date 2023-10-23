#include<iostream>
using namespace std;
class node{
	private:
		int data;
		node* left;
		node* right;
	public:
		node(int val){
		data= val;
		left= NULL;
		right=NULL	;
		}
};

