//Geometric Sum
//The purpose of this program is to write a geometric sum using Recursion.
//recall: Sn = 1 + 1/2 + 1/4 +.....+ 1/2^k 
#include <iostream>
#include <cmath>
using namespace std;

//crate a function for the geometric sum that takes k as an integer and return the sum as floating points using recursion
//we'll have that ans = gsum(k-1) + 1/2^k
double gsum(int k)
{
	//base case
	if(k == 0) return 1;

	//Recursion
	double ans = gsum(k-1);
	//cout <<"ans: " <<ans<<endl;
	//calculation
	return ans + 1.0/pow(2, k);

}//end gsum

int main()
{
	cout <<gsum(3) <<endl;
	return 0;

}
