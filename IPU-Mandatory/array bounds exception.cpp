#include<iostream>
#include<stdexcept>
using namespace std;
class SafeArray{
	int arr[10];
	public:
		void set(int index,int value)
			{if (index <0||index>=10){
			throw out_of_range("Invalid Array Index");}
			arr[index]=value;	
		}
		int get(int index)
		{if(index <0||index>=10){
			throw out_of_range("Invalid Array Index"); }
			return arr[index];	
		}
};
int main(){
	SafeArray a;
	try {
		a.set(1,10);
		a.set(2,20);
		a.set(11,30);
	}
		catch (out_of_range &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    try{
		cout<<"The value at index 1 "<<a.get(1)<<endl;
		cout<<"The value at index 2 "<<a.get(2)<<endl;
		cout<<"The value at index 11 "<<a.get(11)<<endl;}
	catch (out_of_range &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
