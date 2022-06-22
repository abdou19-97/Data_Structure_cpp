//check if array is sorted using recursion
#include <iostream>
using namespace std;

//create a function that cehck if array is sorted using 3 steps; base case, recursion, computation
//the base case is to check if the array size is 0 or 1 we return ture otherwise we do the recursion
//by calling the function isSorted(arr +1, n-1) 
//here arr is a pointer to the first element of the array.So, if we move arr by 1 position it'll 
//move to the second element.For example, if the base address of arr is 1000 so the next element 
//is going to be 1000 + 4 = 1004. 

//create a function to check if the array is sorted
//in this function the recursion is applied on the right side of the array
bool isSorted_I(int arr[], int n)
{
	//base case
	if(n == 0 || n == 1) return true;

	//check if arr[0] > arr[1] 
	if(arr[0] > arr[1]) return false;

	//Recursion
	bool isArrSorted = isSorted(arr + 1, n - 1); 

	//computation
	if(isArrSorted){ return true;}
	else{return false;}
}//end isSorted

//create a function will do the recursion the on the left side of the array
//all we have to do is just changing the order 
bool isSorted_II(int arr[], int n)
{
        //base case
        if(n == 0 || n == 1) return true;

	//Recursion
	bool isArrSorted = isSorted(arr + 1, n - 1);
        if(!isArrSorted){ return false;}  

	//Computation
	//check if arr[0] > arr[1]
        if(arr[0] > arr[1]) return false;
	else{return true;}
      
}//end isSorted 

int main()
{
	int arr[] = {1,2,3,4,5};
	
	if(isSorted(arr, 5)) cout << "Sorted " <<endl;
	else{cout << "Not Sorted " <<endl;}

	return 0;

}//end main
