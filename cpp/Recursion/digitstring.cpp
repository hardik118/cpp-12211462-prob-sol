#include<iostream>
using namespace std;
int digit( int n, string arr[]){
    if(n==0) return ;
    int digit= n%10;
    n=n/10;
digit(n, arr);
    cout<< arr[digit]<<" ";
}
int main(){
    string arr[9]= {"one", "two", "three", "four", "five","six", "seven", "eight", "nine"};
    int n;
    cin>> n;
    digit(n , arr);

}