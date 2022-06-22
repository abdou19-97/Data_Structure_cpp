//Power using Recursion
#include <iostream>

using namespace std;

//The goal is to write a program that calculate power using recursion
//Let x be a number and n be the power of x
//draw the formula x**n = x**n * x**n-1

//create a function call power
int pow(int x, int n)
{
	//base case
	if(n == 0) return 1;
        cout << n<<endl;
	//Recursion
	int ans = pow(x, n -1) ;
        cout <<"ans" <<ans <<endl;
	//do the calculation
	return ans * x;
}//end pow

int main()
{
	cout << pow(2, 3) <<endl;

	return 0;
}


