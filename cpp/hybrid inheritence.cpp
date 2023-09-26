#include<iostream>
using namespace std;
// the kind of inheritecne in which  there is combination of more than one type of inheritence 
class animation{
	/*running
	jumping */ 
};
class character: public animation{
	 //swim
};
class character2 {
	//kick
};
class character3 : public character : public animation {
	//kick
};
int  main(){
	
}

