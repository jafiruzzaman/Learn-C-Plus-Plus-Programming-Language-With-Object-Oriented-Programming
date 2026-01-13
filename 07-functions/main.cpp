#include<iostream>
using namespace std;

// ------------------------------------------------------ Function Declaration ------------------------------------------------------
// A function declaration tells the compiler about the function name,
// return type, and parameters before its actual use.

int add(int a, int b);   // function prototype
void greet();           // function prototype

int main(){
	cout<<"=============================================================== Functions in C++ ==============================================================="<<endl;

	// What is Function?
	// A function is a block of code that performs a specific task.
	// It helps in code reusability, modularity, and better readability.

	// ====================================================== Types of Functions ======================================================
	// 1️⃣ Built-in Functions
	// 2️⃣ User-defined Functions

	// ------------------------------------------------------ Function Call ------------------------------------------------------
	// Calling a function means executing the code inside the function.

	greet();   // function call

	int result = add(10, 20);  // function call
	cout<<"Addition Result: "<<result<<endl;

	return 0;
}

// ------------------------------------------------------ Function Definition ------------------------------------------------------
// The actual implementation of the function is written here.

// User-defined function with return type and parameters
int add(int a, int b){
	return a + b;
}

// User-defined function with no return type and no parameters
void greet(){
	cout<<"Hello, welcome to C++ Functions!"<<endl;
}
