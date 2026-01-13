#include<iostream>
using namespace std;

int main(){
	cout<<"=============================================================== Conditionals in C++ ==============================================================="<<endl;

	// What is Conditional?
	// A conditional statement is a decision-making control structure
	// that allows a program to execute different blocks of code
	// based on whether a given condition is true or false.

	// ====================================================== Types of Conditional Statements ======================================================
	// 1️⃣ if-else statement
	// 2️⃣ switch-case statement

	// ------------------------------------------------------ 1️⃣ if-else statement ------------------------------------------------------
	// The if-else statement is used to execute a block of code
	// when a condition is true; otherwise, another block is executed.

	int age = 20;

	if(age >= 18){
		cout<<"You are eligible to vote."<<endl;
	}else{
		cout<<"You are not eligible to vote."<<endl;
	}

	// ------------------------------------------------------ 2️⃣ switch-case statement ------------------------------------------------------
	// The switch-case statement is used to select one execution path
	// from multiple choices based on the value of a variable.

	int day = 3;

	switch(day){
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		default:
			cout<<"Invalid day"<<endl;
	}

	return 0;
}
