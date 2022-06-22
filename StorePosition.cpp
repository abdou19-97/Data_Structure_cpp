//Storing position using Recursion
//The purpose of this program is to store a position of a given element in a vector or array
#include <iostream>
#include <vector>
using namespace std;

//First create a function that take in 4 arguments and those are; array, n, x, i

//First approach
/*
void storePosition(int a[], int n, int x, int i)
{
	vector<int> vect;

	//Base case
	if(i == n) return;

	if(a[i] == x) vect.push_back(i);
        
	for(int j : vect)
		cout << j << endl;

	 //Recurion
	 storePosition(a, n, x, i+ 1);
	
} //end storePosition
*/
//Second approach
void storePosition(int a[],int n, int x, int i, vector<int> &ans)
{
	//Base case
	if(i == n) return;

	if(a[i] == x) ans.push_back(i);

	//Recursion
	storePosition(a, n, x, i + 1, ans);

}

int main()
{
	int a[] = {5,5,6,5,6};
        vector<int> ans;
	storePosition(a, 5, 5, 0, ans);

        for(int x: ans)
		cout << x <<endl;

	return 0;
} //end main
