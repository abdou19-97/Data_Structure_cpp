//counting how many zeros in a number using recursion
#include <iostream>
using namespace std;

//create sumzero function that return the sum of zeros

int sumzero(int n)
{
	//Base case
	if(n == 0) return 0;

	//Recursion
	int ans = sumzero(n/10);

	//Calculation
	int last_digit = n % 10;

	if( last_digit == 0){ return ++ans;} //check if the last digit is zero then add it to the ans

	else{ return ans;} //return ans otherwise

}

int main()
{
	cout << sumzero(10320) << endl;

	return 0;

}
