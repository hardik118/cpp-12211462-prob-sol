#include<iostream>
#include<string >
using namespace std;
class tel{
	private :
		string  tele_num;
		public:
			void det_num(string  tele){
				tele_num= tele;
				
			}
		void chekc(){
			if(tele_num.length()==10){
				cout<<"num is valif ";
			}
			else {
				cout<<"num is not valid";
				
			}
		}
};
int main(){
	string  telephone;
	cin>>telephone;
	tel t;
	t.det_num(telephone);
	t.chekc();
}
