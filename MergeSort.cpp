//Merge Sort
//given an unordred array and the goal is to order it using merge sort
//This problem could be solved with the help of recursion

#include <iostream>
//#include <algorithm>
using namespace std;

//One way to solve this problem is by spliting the array into 2 arrays, apply the merge sort 
//on both of the arrays, and then merge them into one array

//Merged Arrays function
//Argument: 5 
void mergeArrays(int x[], int y[], int a[], int s, int e)
{
        int m = (s + e) / 2; //calculate mid
	int i = s;          //keep track of the arry x
	int j = m + 1;      //keep track of the array y
        int k = s;         //keep track of the merged array a

      
	while(i <= m && j <= e)
	{
		if(x[i] < y[j])  //if x[i] < y[i], then copy the element of x into a
		{
			a[k] = x[i];
			i++;
			k++;
			
		}else{
			a[k] = y[j]; //otherwise copy the element of y into a
			j++;
			k++;
		}
		
	}
        
	//After both arrays sorted, we merg them into one array
	while(i <= m) 
	{
		a[k] = x[i];
		k++;
		i++;
	}

	while(j <= e)
	{
		a[k] = y[j];
		k++;
		j++;
	}

}//end mergeArrays

//merge sort function 
//Arguments: 3
void mergeSort(int a[], int s, int e)
{
	//Base case
	if(s >= e) return; //check if s > = e, then return

        int m = (s + e)/2;   //divide array into half using mid formula
        
	int x[100], y[100]; //intiate the arrays x and y

	for(int i = 0; i <= m; i++) //copy the first half of the array a in array x
	{
		x[i] = a[i];
	}

	for(int i = m + 1; i <= e; i++) //copy the last half of the arry a in array y 
	{
		y[i] = a[i];
	}	

	//using recursion on both parts of the splited array
       mergeSort(x, s, m);  //recursion for first part [s,...,m] s = start, m = meduim
       mergeSort(y, m + 1, e); //recursion for second part [m + 1, ....e] e = end or last element of the array
       mergeArrays(x, y, a, s, e); //merge the arrays into one array, [s,....m, m+1,....e].	

}//end merge

int main()
{
	int a[] = {4,2,3,1,-5,0};
	int s = 0;
	int n = sizeof(a) / sizeof(a[0]);
	int e = n -1;
 
	for(int i = 0; i < n; i++)
		cout <<"Before " << a[i] <<endl;

	mergeSort(a, s, e);

	for(int j = 0; j < n; j++)
		cout <<"After " << a[j] << endl;

	return 0;
}//end main
