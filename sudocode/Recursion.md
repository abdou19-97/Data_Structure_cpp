//Sudo code for factorial using Recusion

The goal is to write a sudo code that gives the result of factorial number using recusion 

Breif introductions about Recursion and Factorial:
   Recusrsion it's a function that call itself.
   Factorial formula is: n! = n*n-1*n-2*n-3......*2*1
   and could reduced as: n! = n*(n-1)!

First create a function that takes a parameter n and return the result of factorial of n and n is a positive integer

//create function let call fact() as factorial

fact(n)
{
  //create a variable that stores the recursion we call it R as Recursion
   R = fact(n -1)  //each time we get to this line the function will call itself and decrease by 1
   //For example, if n= 4 then R = 3 and so on...
   
   //Now we'll come with if statement to prevent segmentation feault. Segmentation is basically an infinit loop!
   //For example, if we get to n = 0 and 0! = 1 instead of returning 1 the function will continue calling itself and n = -1??
    
    if(n == 0)
      return 1

   //After avoiding this issue now we can return the result of fact(n)
    return n * R
} //end fact(n)

//Create the main function which we call the fact(n) by taking user input as integer

int main()
{
   userInput = 0 //set zero
   
   cin>>userInput //accepting userInput (c++)

   //Finally we call the function fact(userInput) by passing it the user input and then printing it
   cout << fact(userInput) 

} // end main

When turning this to code (any programming language) and giving an input such 3! it should return 6
