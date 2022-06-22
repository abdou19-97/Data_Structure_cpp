//Stair case problem
//There is a stairecase of n steps and the idea is to find how many ways can way climb using either 1, 2 , and 3 at time 
//For exmaple, if N = 3 there are 4 ways to climb 
//              those are: 
//                  1, 1, 1     climbing step by step
//                  1, 2       jumping from the first step to the last step
//                  2, 1       jumping from the second step to the last one
//                  3          jumping straight to 3
//
//With the help of Recursion and Febnacci approach the problem could be solved as follow

#include <iostream>
using namespace std;

//stairCase function which take the input N
int stairCase(int n)
{
	//We need 3 base case since we have 3 jumping options
	//base cases
	if(n == 0 || n == 1) return 1;
       
        if(n == 2) return 2;    //OR  if(n < 0) return 0;

	//Recursion
	return stairCase(n - 1) + stairCase(n - 2) + stairCase(n-3);

}//end stairCase


int main()
{
	int input = 0;
	cout << "Enter a number " << endl;
	cin >> input;
	cout << stairCase(input) << endl;

	return 0;
}
