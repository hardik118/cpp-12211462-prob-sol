#include<iostream>
using namespace std;
class room{
	public:
	int length;
	int breath;
	 int height;
	  int cal_area(){
	  	return length*breath;
	  }
	  int cal_vol(){
	  	return length* breath*height;
	  }
};
int main(){
	room room1; 
	room1.breath=10;
	room1.length=9;
	room1.height=8;
	cout<<room1.cal_area()<<endl;
	cout<<room1.cal_vol()<<endl;
		}
