//Quick Sort Algorithm
//The purpose of this program is to sort an array using the pivot algorithm
#include <iostream>
#include <algorithm>
using namespace std;

//This problem could be solved as follow:
//  1. create a partition function that takes 3 arguments; array, start, and end. The purpose is to return the position of pivot.
//      -loop through the array and to find the position of the elements that are smaller than pivot
//      -return that position
//  2. Create a quickSort function that takes 3 argument; array, start, and end. The purpose is to return the sorted array
//      -create a variable that store the position of the pivot returned from parition function.
//      -use recursion to sort the element that are smaller than pivot 
//      -user recursion to sort the element that are greater than pivot


//The first approach
/*
int partition(int a[], int s, int e)
{
	int x = a[e]; //the pivot value which is the last element of the array
	int i = s -1; //i is the index that indicate the position of the pivot
        
	for(int j = s; j <= e; j++)  //loop through the array 
	{
		if(a[j] < x) //check for the element that are less than pivot    
		{
	            i++;    //increase the index
		    swap(a[i], a[j]); //swap
		    
		    
		}

	}

        swap(a[i + 1], a[e]); //swap the element that are greater than the pviot

        return (i+1); //return the sum

}//end partition
*/ 
//Second approach
int partitionII(int a[], int s, int e)
{
	int i = s;
	int pivot = a[e];

	for(int j = s; j <= e -1; j++)
	{
		if(a[j] < pivot)
		{
			swap(a[i], a[j]);
			i++;
		}
	}
         
	swap(a[i], a[e]);
        //cout << "i = " << i <<endl;
	return i;

}//end partitionII

void quickSort(int a[], int s, int e)
{
	//Base case
	if(s >= e) return;
	
	//int p = partition(a, s, e); //return the pivot positon, first approach
        int p = partitionII(a, s, e);   //second approach
        cout << "Pivot: " << p << endl;
     	//Recurion
	quickSort(a, s, p-1); //recursion from [s,..p-1]
	//quickSort(a, p + 1, e); //recursion from [p+1,...e]

} //end quickSort


int main()
{
	int a[] = {8,5,2,1,7,3,4};
	int s = 0;
	int n = sizeof(a) / sizeof(a[0]);
        int e = n-1;

	for(int i = 0; i < n; i++)
	{
		cout <<"Before: " << a[i] << endl;
	}

	quickSort(a, s, e);
        //partitionII(a, s, e);
	
	for(int i = 0; i < n; i++)
		cout << "After: " << a[i] <<endl;
       

	return 0;
}//end main

