#include<iostream>
using namespace std;
int main(){
	cout<<"============================================================== data-types in C++ =============================================================="<<endl;
	// int | 4 byte | whole numbers like (1,2,3,4,5,6)
	int age = 10;
	cout<<"int: "<<age<<endl;
	// float | 4 byte | single precision floating-point
	float pi = 3.14;
	cout<<"float: "<<pi<<endl;
	// double |
	double e = 2.71862778;
	cout<<"double: "<<e<<endl;
	// char | 1 byte | single character
	char c = 'c';
	cout<<"char: "<<c<<endl;
	// bool | 1 byte | true(1) or false(0)
	bool result = true;
	cout<<result<<endl;

	cout<<"============================================================== Modified Data-Type in C++ =============================================================="<<endl;
	signed int a = -10; // ⚠️ store negative and positive value as well
	cout<<"signed:"<<a<<endl;
	unsigned int b = -10; // ⚠️ store negative value
	cout<<"unsigned:"<<b<<endl;
	short int num = 100; // to store small values
	cout<<"short:"<<num<<endl;
	long int largeNumber = 10278627; // store large values
	cout<<"population:"<<largeNumber<<endl;

	cout<<"============================================================== Derived Data-Type in C++ =============================================================="<<endl;
	// 1️⃣ Arrays --> collection of elements of the same data-type
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	// access array elements
	cout<<"arrays: "<<numbers[0]<<endl;
	// 2️⃣ strings --> sequence of characters
	string name = "Mohammad";
	cout<<"string: "<<name<<endl;

	return 0;
}