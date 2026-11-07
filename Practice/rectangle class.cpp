#include<iostream>
using namespace std;
class rectangle{
		int length,breadth; 
		public:
			rectangle() {
				length = 1;
				breadth = 1;
			}
		
			rectangle(int l,int b)
			{
				length = l;
				breadth = b;
			}
			void setLength(int l) {length=l;}
			void setBreadth(int b) {breadth=b;}
			int area() {return length*breadth;}
			int perimeter() {return 2*(length+breadth);}
			void show() {
				cout<< "Length, Breadth, Area, and Perimeter = " << length << "," << breadth << "," << area() << "," << perimeter() << endl;
			}
};
int main(){
	rectangle r1;
	rectangle r2(4,2);
	r1.setLength(10);
	r1.setBreadth(5);
	r1.show(); r2.show();
	}
