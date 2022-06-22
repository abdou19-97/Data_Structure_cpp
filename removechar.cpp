//Remove Charachter Recursuvly
//Given an array of charachters and the goal is to remove a specific charchter using recursion
//For example, given an a[] = {a,b,c,a,d} and we want to remvoe a, so the output would be 
//a[] = {b,c,d}
#include <iostream>
using namespace std;

//First approach 
//creating a function called removeChar(input[]) with an array of charachter as an input
/*
void removeChar(char input[])
{
	//Base Case
	if(input[0] == '\0')
		return;

	if(input[0] == 'a')
		for(int i=0; input[i] != '\0'; i++)
                         input[i] = input[i + 1];

	//Recursion		 
	if(input[0] != 'a')
		removeChar(input + 1);

}//end removeChar
*/
//Second Approach
void removeChar(char input[], char x)
{
        //Base Case
        if(input[0] == '\0')
                return;
      /*
        if(input[0] == 'a')
                input[0] = input[1];
        */
        if(input[0] == x)
                for(int i=0; input[i] != '\0'; i++)
                         input[i] = input[i + 1];

	//Recursion
        if(input[0] != x)
                removeChar(input + 1, x);

}//end removeChar


int main()
{
	char input[100];
	char x;
	cout << "Enter the charchters "<<endl;
	cin>>input;
	cout << "Enter the charachter that you want to remove"<<endl;
	cin>>x;
	cout << "Before Modification: " <<input << endl;
	removeChar(input, x);

	cout << "After Modification: "<<input <<endl;

	return 0;
}
