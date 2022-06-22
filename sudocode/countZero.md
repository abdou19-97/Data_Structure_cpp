This sudo code explain how to count zeros in a digit using recursion.
For example, given 2002 there are 2 zeros.To do this we must split 2002 4times where each time we split 
we divide by 10 till there's a zero left. 

                             200|2
                              |
                              | by 10
                              20|0
                              |
                              | by 10
                              2|0
                              |
                              | by 10
                             0|2
                              |
                              | by 10
                              0
The formula would be: ans = sumZero(n/10)  //sumZero is recursive function
Wehn n become 0 we return 0 by going back up. Each we check the last digit if it's zero we add to ans otherwise we return ans.


//create a function call it sumZero that take n and n is positive intger

sumZero(n)
{
    First base case
    if( n == 0) return 0;
 
    Second Recursion
    ans = sumZero(n/10);

    Finally calculation
    last_digit = n % 10;
   
    if(last_digit == 0){ 1 + ans} increase ans by 1

    else{ return ans}

} //end sumZero

int main()
{
   cout << sumZero(2002);  //it should print 2

}
                                   
