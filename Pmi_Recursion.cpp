//principale mathemathic indexion(pmi)

#include <iostream>

using namespace std;

//The goal is to use pmi with recursion to simplify the calculation of factorial

int fact(int n)
{
	//first start with the base case
	if(n == 0) return 1;

	//Second assume that f(k) is true
	int R = fact(n-1);

	//Last do the calculation
	int ans = n * R;

	//return the result
	return ans;
}

int main()
{     
	//call the function
  	cout << fact(4) << endl;

	return 0;
}
