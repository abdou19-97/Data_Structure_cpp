//count digit using recursion

#include <iostream>
using namespace std;

//create count funciton
int count(int n)
{
	//base case
	if(n == 0) return 0;

	//Recursive case
	int ans = count(n/10);

	//Calculation
	return ans + 1;

}

int main()
{
	cout << count(12345) <<endl;

	return 0;

}
