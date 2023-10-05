#include<iostream>
using namespace std;
class animal{
	string type;
	public :
		animal(): type("animal") {};
		string  gettype(){
			return type;
		}
	
	
	
};
class dog : public animal{
	string type;
	public :
		dog(){
		type = "dog";
	}
	string  gettype(){
			return type;
		}
	
};
class cat: public animal{
	string type;
	public :
		cat(){
		type = "cat";
	}string  gettype(){
			return type;
		}
	
};
int main(){
	animal* ani1 = new animal();
	
}
