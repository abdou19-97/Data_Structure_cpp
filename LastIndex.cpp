//Last Index using Recursion

#include <iostream>

using namespace std;

int LastIndex(int a[], int n, int x, int i)
{
	//base case
	if(i == -1) return -1;

	if(a[i] == x) return i;

	//Recursion
	return LastIndex(a, n, x, i -1);

}//end LastIndex

int main()
{
	int a[] = {5,5,6,5,6};
	cout << LastIndex(a, 5, 6, 4) << endl;

	return 0;
}
