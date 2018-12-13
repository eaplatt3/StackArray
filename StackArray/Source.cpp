//Earl Platt III
//12/13/2018
//BCS 370
//
//A Program That Creates A Stack 
//From An Array & Then Copies Its Self
//
//Input: Numbers From 1 - 10
//
//Output: Displays Numbers In Both Stacks

#include <iostream>
#include "arrayStack.h"

using namespace std;

int main()
{
	//Variables
	int nums = 1;
	int ctn = 0;

	//Creating Stack Objects
	stackType<int> stack(10);
	stackType<int> stack2;

	//Initialize Stack 1
	stack.initializeStack();

	cout << endl;
	cout << "Stack 1: " << endl;

	//Populating The Stack With Data
	do {

		if (!stack.isFullStack()) {
			stack.push(nums);
			nums++;
		}

		else
			cout << "Stack Full" << endl;

		ctn++;

	} while (ctn != 10);

	//Deep Copy Stack 1 into Stack 2
	stack2 = stack;

	//Displaying Stack 1 
	while (!stack.isEmptyStack()) {
		cout << stack.top() << endl;
		stack.pop();

	}

	cout << endl;
	cout << "Stack 2: " << endl;

	//Displaying Copied Stack
	while (!stack2.isEmptyStack()) {

		cout << stack2.top() << endl;
		stack2.pop();
	}

	cout << endl;

	system("pause");

	return 0;
}
