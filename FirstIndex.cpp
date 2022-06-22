//Returning the First Index
//The idea of this program is to loop through an array and return the first index of the number
//that we're looking using the recursion


#include <iostream>

using namespace std;

//This function will return the first index using recursion
//it takes 4 argument a, n, x, and i which the index that need to be returned
int firstIndex(int  a[], int n, int x, int i)
{
	//Base case

	if(i == n) return -1;    //return -1 if the number doesn't exist

	if(a[i] == x) return i; //return the index if the number exist in the array

        //Recursion
	return firstIndex(a, n, x, i+1); 

} //end firstIndex

int main()
{
	int a[] = {5,5,6,5,6};

	cout << firstIndex(a, 5, 6, 0) << endl;


	return 0;

}//end main
