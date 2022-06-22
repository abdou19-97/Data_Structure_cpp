//Count Occurence of element using Recursion
#include <iostream>

using namespace std;

void Count(int a[], int n, int x, int i, int &ans)
{
	
	//base case
	if(i == n) return;

	if(a[i] == x) ans++;

	//Recursion
	Count(a, n, x, i+1, ans);
	
}//end CountOccurence

int main()
{
	int a[] = {5,5,6,5,6};
	int ans = 0;

	Count(a, 5,5,0, ans);
	cout << ans <<endl;

	return 0;
}
