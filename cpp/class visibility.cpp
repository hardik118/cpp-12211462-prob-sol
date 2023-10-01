#include<iostream>
using namespace std;
class base {
	private :
		int p= 1;
	protected :
		int pro = 2;
	public:
		int pub =3;	
	int getpri(){
		return p;
	}	
};

class publicderived : public base{

	public :
		int get_val(){
			return pro;
			
		}
};
int main(){
	publicderived obj1;
	cout<< obj1.get_val()<<endl;
	
	cout<<base.pro<<endl;
	
}
