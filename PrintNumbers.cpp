//Print Numbers 
//The goal is to print numbers in both acending and decending orders 
//using Recursion

#include <iostream>
using namespace std;

//create print function for acending order
void print_I(int n)
{
	//Base case
	if(n == 0) return;

	//Recursion
	print_I(n-1);

	//print wich start from 1, 2, 3,...n
	cout << n << endl;

}//end print_I

//create print_II for decending order
void print_II(int n)
{
	//Base case
	if(n == 0) return;

	//Now since we are printing from n, n-1, ....1
	//We need to change the order. Print the last element and do the recursion
	cout << n << endl;

	//Recursion
	print_II(n-1);

}//end print_II

int main()
{
	print_I(5);
	print_II(5);

	return 0;
}
