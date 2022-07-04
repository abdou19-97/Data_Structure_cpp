//Selection sort vs merge sort

#include <iostream>
#include <sys/time.h>
using namespace std;

long getTimeInMicroSeconds(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)le6 + currentTime.tv_usec;
}

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

void selectionSort(int a[], int n)
{
      for(int i=0; i<n-1;i++) {
          int smallest = i;
          for(int j=i+1;j<n-1;i++) {
           if(a[j]<a[smallest]){
               smallest = j;
            }
         }
         swap(arr[i],arr[smallest]);
      }

}//end selectionSort

int main()
{
	for(int n = 10; n <= 10000000; n *= 10)
	{
		int *arr = new int[n];
		long startTime - endTime;
		for(int i = 0; i < n; i++)
		{
			arr[i] = n - i;
		}

		startTime = getTimeInMicroSeconds();

		mergeSort(arr, 0, n-1);
                selectionSort(arr, n);

		endTime = getTimeInMicroSeconds();

		cout << "Merge Sort n = "<< n << "time = " <<endTime - startTime << endl;
		cout << "selection sort n = " <<n<<"time = " <<endTime - startTime<<endl;
		delete []arr;

		
	
         }

	return 0;

}


