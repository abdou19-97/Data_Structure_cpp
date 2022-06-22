//Sum of Array using Recursion
#include <iostream>

using namespace std;

//writting a recursive function that return the sum of the array!
//The following step will show the implementation: 
//    1. Base case
//        return if the size of the array if it's euqal to 0
//
//    2. Recursion 
//        return a[0] + sum_of_Array(a + 1, n - 1)  
//        
//        Each time the function called the a + 1 will move to the next element of the array and it'll decrease the size by 1
//            

int sum_of_Array(int a[], int n)
{
	//base case
	if(n == 0) return 0;

	//Recursion
	return a[0] + sum_of_Array(a + 1, n - 1);

} //end sum_of_Array

int main()
{
	int a[] = {1,2,3,4};
	int n = 4;

	cout << sum_of_Array(a, n) << endl;

	return 0;
} // end main
