#include<iostream>
using namespace std;
int count(int n){
    if(n==0) return ;
    cout<<n<<endl;
    return count(n-1);

}
int main(){
    int n;
    cin >> n;
    cout<<"The counting is as follow"<<endl;
    count(n);
}