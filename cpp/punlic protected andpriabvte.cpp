#include<iostream>
using namespace std;
/* public in heritence makes public memnerw of the base class public  
in derived class , and protected memners of base clas will remian protected in derived class 
*/
//////////////////
/* protected inheritence makes the public and protectd mne ers of the base class prptected  in derived 
*/
///////////
/* private inheritecne maesmte poublic  and procted mener sof the base class priavte in deribved 
*/
// private meners are inaccesibal eto the bsse class 
class base(){
	public :
		int x;
	protected :
	int y;
	private :
		int z;
}
class publicderived: public base{
	// x is public 
	//y is protected
	// z is not accesiable 
	
};
class protectedderived : protected  base{
	//x is protected
	// y is protetted
	//z is not aceesiale 
};
class priavtederived : private  base{
	//x is 
};
int main(){
	
}
