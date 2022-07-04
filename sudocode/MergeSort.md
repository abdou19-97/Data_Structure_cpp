Merge Sort Algorithm

Given an unordred array and the goal is to order it using merge sort Algorithm.
This problem could be solved with the help of recursion.

The merge sort algorithm uses devide and conquere strategy. The array is going devided
into two equal halves, reorder them using recursion and merge them into sorted array. For example,
consider this array a[] = {4,3,6,5,1,0}, devide it into two halves using the mid formula (mid = start + end / 2)
store the first half starting from [start,...,mid] and the second half starting from [mid+1,...,end].
Sort both arrays and finally merge them into one array such that a[] = {0,1,3,4,5,6}.

Below is the sudocode for the problem: 
  
  create function that takes in 3 arguments; the array a[], start (s), end (e)
   
   MergeSort(a[], s, e)
   {
         Base case check if the start is greater than the begening then return
         if(s >= e) return

         use mid formula to devide the array
         mid = (s + e) / 2

         create 2 array let's call them x and y
         x[], y[]

         loop through a[] till the mid and copy the element into array x
         for(i = 0; i <= mid; i++)
             x[i] = a[i]
   
         loop through a[] till the mid and copy the element into array y
         for(i = 0; i <= mid; i++)
             y[i] = a[i]

        call recurion on both sides 
        MergeSort(a, s, mid)
        MergeSort(a, mid +1, e)

       call merge function which will merge the both array x and y into one ordered array
       merge(a, x, y, s, e) 

   } end MergeSort
        
    
create merge function this will take 5 arguments a[], x[], y[], s, and e
merge(a[], x[], y[], s, e)
{
        using mid formula again
        mid = (s + e) / 2

       create 3 variables as an indecies for the arrays x, y, and a
       i = s where s = 0 this index for the array x
       j = mid + 1  while j is for the array y
       k = 0 this index for the merged array a[]

      loop and compare
      while( i <= m && j <= e)
      {
         check if x[i] < y[j] then copy the element of x into a[]
         if(x[i] < y[j])
         {
            a[k] = x[i]
            i++
            k++
         } end if
         otherwise copy the element of y into a
        else{
           a[k] = y[j]
           j++
           k++  
        } end else

    }end while

    merge both array x[] and y[] into a[]

    while(i <= m )
    {
       a[k] = x[i]
       k++
       i++
    } end while
   
   while(j <= e)
   {
     a[k] = x[i]
     k++
     j++
   }

} end merge
      
