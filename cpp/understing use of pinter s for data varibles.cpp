#include<iostream>
#include<string >
#include<cmath>
using namespace std;
class salesperson{
	string name;
	int tot_month;
	int * sales;
	public:
		salesperson(){
			 name="";
			 tot_month= 0;
			sales = NULL;
		}
	void input(){
		cin>>name;
		cin>>tot_month;
		sales = new int[tot_month];
		for (int i=0;i<tot_month;i++){
			cin>>sales[i];
			
		}
	}
	int tot_sales(){
		int tot_=0;
		for(int i=0;i<tot_month;i++){
			tot_=tot_+sales[i];
			
		}
		return tot_;
	}
	int aver_(){
		return round(static_cast<double>(tot_sales()/tot_month));
}
	void display(){
		cout<< "sales mendetails :"<<endl;
		cout<<"name is "<<name <<endl;
		cout<<"months are"<<tot_month<<endl;
		cout<<"average sales are "<<aver_()<<endl;
		cout<<"totoal sal are "<<tot_sales()<<endl;
		
	}
	~salesperson(){
		delete[] sales;
	}
	
	
};
int  main(){
	salesperson sp1;
	sp1.input();
	sp1.display();
	return 0;

}
