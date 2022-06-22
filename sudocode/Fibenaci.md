***This sudo code will prove how to calculate Fibenaci using the PMI Recursion
   First let's write the formula of Fibenaci. 
   Fibenaci is the sum of previous numbers, starting from 2 numbers; 0, 1 and then we add those 2 numbers 
   which gives 1, so sequence will become: 0, 1, 1 and we add 1 to the previous two numbers which gives 2 (0 + 1 + 1)
   and so on. 
    
   The Formula:  F(n) = F(n-1) + F(n-2)

***

create a function we call it fib that takes 1 argument

fib(n)
{
   //1th step Base Case we'll have base case otherwise we'll end up in a segmentation fault

    if(n == 0) return 0; //first base case
    
    if(n == 1) return 1; //second base case

    //2th step Recursion
    output1 = f(n-1);
    output2 = f(n-2);

    //Finally calculation
    sum = output1 + output2
    
    return sum
} //end fib

int main()
{
    cout<< fib(3)  //expecting 2 to be return 
}
