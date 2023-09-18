// mutiple inheritence -> 
//when one child class inherits from two more parent class
#include <isotream>
using namespace std;
class a{
	public:
		int a;
		void get(int n){
			a=n;
		}
};
class b{
	public:
		int b;
		void get(int n){
			b=n;
		}
};
class c: public a, public b{
	public 
	void display(){
		cout<<" value of a is "<<a <<endl;
		cout<<" value of b is "<<b <<endl;
		//	cout<<" value of a is "<<a <<endl;	
	}
};
int main(){
	c c1;
	c1.get(2);
	c1.get(4);
	c1.display();
	
}
