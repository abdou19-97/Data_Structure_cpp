//Multiplication using recursion


#include <iostream>
using namespace std;

//this funciton will take 2 param 
int multiply(int m, int n)
{
	//base case
	if( n == 0) return 0;

	//Recursion
	int ans = multiply(m, n-1);

	//Calculation
	return ans + m;
}

int main()
{
	cout << multiply(3, 5);

	return 0;
}
