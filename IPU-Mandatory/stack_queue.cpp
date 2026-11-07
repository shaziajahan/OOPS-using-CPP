#include<iostream>
#include<stdexcept> //out_of_range is an exception class in stdexcept
using namespace std;
class list{
	protected:
		int arr[10];
		int last; //index of last occupied element; -1 means empty
	public:
		list() : last(-1){}
		virtual void store(int val) = 0;
		virtual int retrieve() = 0;
		// virtual ~list()=default; //use compiler provided default constructor
};
class stack : public list{
	public:
		void store(int val){
		if (last>=9){
			throw out_of_range("Stack Overflow."); //throw is a keyword in C++
			}
	else {
		last++;
		arr[last]=val;
	};
		}
		int retrieve(){
			if (last>=0){
				last--;
				return arr[last+1];
			}
			else {
				throw out_of_range("Stack Underflow.");
			};
		}
};
class queue : public list{
	int front;
	public:
		queue() {
           front = 0;   }
		void store(int val){
			if (last >= 9) {
				throw out_of_range("Queue Overflow.");
			}
			else {
      last++;
			arr[last] = val;   }
		}
		int retrieve(){
			if (front > last) {
				throw out_of_range("Queue Underflow.");
			}
			int val = arr[front];
			front++;
			if (front > last) {
				front = 0;
				last = -1;
			}
			return val;
		}
};
int main(){
	stack s;
	s.store(10);
	s.store(20);
	cout << "Element from Stack: " << s.retrieve() << endl;
	
	queue q;
	q.store(30);
	q.store(40);
	cout << "Element from queue: " << q.retrieve() << endl;
	
	return 0;
}
