//Tower of Hanoi

#include <iostream>
using namespace std;

int towerSteps(int n)
{
	//Base Case
	if(n == 0) return 0;
       
        //Recursion
	return  2 * towerSteps(n - 1) + 1;

}//end Tower of Hanoi

void printSteps(int n, char s, char d, char h)
{
	//base case
	if(n == 0) return;

	//Recursion
	printSteps(n -1, s, h, d);

	cout << "Moving " << n << " from " << s << " -> " << d<<endl;
        
	printSteps(n -1, h, d, s);

}//end printSteps

int main()
{
	int input;
	cout << "Enter a number ";
	cin>>input;
	printSteps(input, 'A', 'C', 'B');
	//cout << "The number of steps are: " << towerSteps(input)<<endl;

	return 0;
}
