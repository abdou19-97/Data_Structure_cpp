//Fibonaci Series

//The goal of this program is to calculate Fibonaci series using Recursion Principale Mathemathic Indexion (PMI)

#include <iostream>
using namespace std;

int fib(int n)
{
	//first base case 
	//Here we need 2 base case since fibonaci is the sum of the previous numbers
	//otherwise there'll be a segmentation
	//Fibenaci formaula: f(n) = f(-1) + f(n-2)
	
	//1th base case
	if(n == 0) return 0;
        

	//2th base case
	if(n == 1) return 1;

       //Second step is the recursion 
       int output1 = fib(n-1);
       int output2 = fib(n-2);

       //Finally calculation
       int sum = output1 + output2;

       return sum;
} // end fib

int main()
{
	int userInput;
	cin>>userInput;

	cout <<fib(userInput) <<endl;

}

