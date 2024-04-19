#include<iostream>
#include<bitset>
using namespace std;
int main(){
    long long int n=9;
    string str=bitset<sizeof(long long)*8>(n).to_string();
    str=str.substr(str.find('1'));
    
    cout<<str;
    return 0;
}