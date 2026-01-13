#include<iostream>
using namespace std;

int main(){
	cout<<"=============================================================== Loops in C++ ==============================================================="<<endl;

	// What is Loop?
	// A loop is a control structure that is used to execute a block of code
	// repeatedly as long as a given condition is true.

	// ====================================================== Types of Loops in C++ ======================================================
	// 1️⃣ for loop
	// 2️⃣ while loop
	// 3️⃣ do-while loop

	// ------------------------------------------------------ 1️⃣ for loop ------------------------------------------------------
	// The for loop is used when the number of iterations is known in advance.

	cout<<"\n-------------------- for loop --------------------"<<endl;
	for(int i = 1; i <= 5; i++){
		cout<<"Iteration: "<<i<<endl;
	}

	// ------------------------------------------------------ 2️⃣ while loop ------------------------------------------------------
	// The while loop executes a block of code as long as the condition remains true.
	// The condition is checked before entering the loop body.

	cout<<"\n-------------------- while loop --------------------"<<endl;
	int j = 1;
	while(j <= 5){
		cout<<"Iteration: "<<j<<endl;
		j++;
	}

	// ------------------------------------------------------ 3️⃣ do-while loop ------------------------------------------------------
	// The do-while loop executes the loop body at least once,
	// because the condition is checked after execution.

	cout<<"\n-------------------- do-while loop --------------------"<<endl;
	int k = 1;
	do{
		cout<<"Iteration: "<<k<<endl;
		k++;
	}while(k <= 5);

	return 0;
}
