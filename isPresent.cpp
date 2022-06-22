//Check if the element of the array is present
#include <iostream>

using namespace std;

//Creating a boolean function that return true if the element of the array exist or false otherwise
//This function will have 3 arguments; a, n, and x which the element that we're looking for.
//

bool isPresent(int a[], int n, int x)
{
	//Base case
	if(n == 0) return false;

	if(a[0] == x) return true;
     
	//Recursion
	return isPresent(a + 1, n - 1, x);

}

int main()
{
	int a[] = {1,2,3,4,5};

	if(isPresent(a, 5, 6))
	{
		cout <<"Present " <<endl;
	}else{
		cout << "Not Present "<<endl;
	}



	return 0;
}
