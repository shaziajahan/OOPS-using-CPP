#include<iostream>
#include<cmath>
using namespace std;
class Point{
	float x,y;
	public:
	Point(){
		x=0;
		y=0;
	}
	Point(float value){
		x=value;
		y=value;
	}
	Point(float v1, float v2){
		x=v1;
		y=v2;
	}
	float distanceFromOrigin(){
		float temp1;
		temp1=sqrt((x*x)+(y*y));
		return temp1;
	}
	float distanceBetween(Point p){
		float temp2;
        float  a;
		a=((x-(p.x))*(x-(p.x)) + ((y-(p.y))*(y-(p.y))));
        temp2 = sqrt(a);
		return temp2;
	}
	void show(){
		cout<<"The point is ("<<x<<","<<y<<")"<<endl;
	}
};
int main(){
	Point p1;
    Point p2(3);
	Point p3(5,7);
	float d1,d2,d3;
	p1.show();
	p2.show();
	p3.show();
	d1=p2.distanceFromOrigin();
	d2=p3.distanceFromOrigin();
	d3=p2.distanceBetween(p3);
	cout<<"The distance from the origin of the first two points is "<<d1<<" and "<<d2<<endl;
	cout<<"The distance between the two points is "<<d3;
}
