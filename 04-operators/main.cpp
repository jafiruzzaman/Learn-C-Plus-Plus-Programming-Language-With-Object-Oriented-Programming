#include<iostream>
using namespace std;

int main(){
	cout<<"==================================================================== Operators in C++ ===================================================================="<<endl;

	// 1️⃣ Arithmetic Operator
	int a = 10;
	int b = 15;

	cout<<"Plus: "<<a<<" + "<<b <<" = "<<(a+b)<<endl;
	cout<<"Minus: "<<a<<" - "<<b <<" = "<<(a-b)<<endl;
	cout<<"Multiply: "<<a<<" * "<<b <<" = "<<(a*b)<<endl;
	cout<<"Divide: "<<a<<" / "<<b <<" = "<<(a/b)<<endl;
	cout<<"Modulo: "<<a<<" % "<<b <<" = "<<(a%b)<<endl;

	cout<<"\n================================================================ Assignment Operators ================================================================"<<endl;

	// 2️⃣ Assignment Operator
	int x = 5;

	x += 3;  // x = x + 3
	cout<<"x += 3  => "<<x<<endl;

	x -= 2;  // x = x - 2
	cout<<"x -= 2  => "<<x<<endl;

	x *= 4;  // x = x * 4
	cout<<"x *= 4  => "<<x<<endl;

	x /= 2;  // x = x / 2
	cout<<"x /= 2  => "<<x<<endl;

	x %= 3;  // x = x % 3
	cout<<"x %= 3  => "<<x<<endl;

	cout<<"\n================================================================ Comparison Operators ================================================================"<<endl;

	// 3️⃣ Comparison Operator
	int p = 10;
	int q = 20;

	cout<<"p == q : "<<(p == q)<<endl;
	cout<<"p != q : "<<(p != q)<<endl;
	cout<<"p >  q : "<<(p > q)<<endl;
	cout<<"p <  q : "<<(p < q)<<endl;
	cout<<"p >= q : "<<(p >= q)<<endl;
	cout<<"p <= q : "<<(p <= q)<<endl;

	cout<<"\n================================================================ Logical Operators =================================================================="<<endl;

	// 4️⃣ Logical Operator
	bool cond1 = true;
	bool cond2 = false;

	cout<<"cond1 && cond2 : "<<(cond1 && cond2)<<endl; // AND
	cout<<"cond1 || cond2 : "<<(cond1 || cond2)<<endl; // OR
	cout<<"!cond1         : "<<(!cond1)<<endl;         // NOT

	cout<<"\n================================================================ Bitwise Operators =================================================================="<<endl;

	// 5️⃣ Bitwise Operator
	int m = 5;  // 0101
	int n = 3;  // 0011

	cout<<"m & n  : "<<(m & n)<<endl;  // AND
	cout<<"m | n  : "<<(m | n)<<endl;  // OR
	cout<<"m ^ n  : "<<(m ^ n)<<endl;  // XOR
	cout<<"m << 1 : "<<(m << 1)<<endl; // Left shift
	cout<<"m >> 1 : "<<(m >> 1)<<endl; // Right shift

	return 0;
}
