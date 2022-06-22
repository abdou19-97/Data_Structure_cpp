//sum of digit using recursion
//The purpose of this program is to compute the sum of digits using recusion
//For example, given 12345 the sum would be 15
//To do this we need to split the number by dividing by 10 till we get to 0 
//and then we go back by adding the last digit to the answer

#include <iostream>
using namespace std;

//create sum of digit using recursion
int sum(int n)
{
	//base case
	if(n == 0) return 0;

	//Recursion
	int ans = sum(n/10);

	//calculateion part
	int last_digit = n % 10; //using modules

	return ans + last_digit;

}

int main()
{
	cout <<sum(12345) <<endl;

	return 0;

}
