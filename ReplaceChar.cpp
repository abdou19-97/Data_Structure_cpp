//Replace charachter
//The purpose of this program is to replace a charachter in a array with a given one 
//For example, let say we have a,b,c,b,a,d and we want to replace a with x so the array 
//would be x,b,c,b,x,d. This problem will be solved using recursion

#include <iostream>
using namespace std;

//replaceChar this function takes 1 argument which the array of input charachter
//Basic approach
/*
void replaceChar(char input[])
{
	//base case
	if(input[0] == '\0')
		return;

	if(input[0] == 'a')
		input[0] = 'x';

	//recursion
	replaceChar(input + 1);

}//end replaceChar
*/
//General approach
void replaceChar(char input[], char x, char y)
{
        //base case
        if(input[0] == '\0')
                return;

        if(input[0] == x)
                input[0] = y;

        //recursion
        replaceChar(input + 1, x, y);

}//end replaceChar

int main()
{
	char input[100];
	char x;
	char y;
	cout << "Enter the array of charachters"<<endl;
	cin>> input;

	cout<<"Enter the charachter that you want to change"<<endl;
	cin>>x;

	cout << "Enter the new charachter" <<endl;
	cin>>y;

        cout <<"Before: "<<input <<endl;

	replaceChar(input, x, y);
	cout <<"After: " <<input << endl;

	return 0;
}//end main
