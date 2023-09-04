// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width".
// The class should have a constructor that initializes these member variables and public member functions 
//called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.
#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
		
	public:
		Rectangle(){
			
		}
		Rectangle(int len, int wid){
			length= len;
			width= wid;
		}
		getarea(int length, int width){
			cout<<" AREA : "<<length*width<<endl;
			
		}
		getperimeter(int length, int  width){
			cout<<" perimeter : "<<2*(length+width)<<endl;
		}
};
 int main(){
 	Rectangle r1(12,13);
 	r1.getarea(12,13);
 	r1.getperimeter(12,13);
 		
 }
