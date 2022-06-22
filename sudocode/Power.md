***Power using Recursion
   power is a number that is multiplied itself n times. 
   example 2^3 = 2 * 2 * 2. Here n = 3 and x = 2
   we can write this formula as x^n = x*x^n-1
   or using the recursion p(x, n) = p(x, x^n-1) * x
***

create a function called pow(x, n) that takes 2 arguments

pow(x, n)
{
   //Base case
   if(n == 0) return 1;  //since x^0 is 1

   //recursion
   ans = pow(x, x^n-1)
   
   //calculation
    return ans * x
}end pow

int main()
{
  cout<< pow(2, 3)   ///expected answer is 8
 
}
