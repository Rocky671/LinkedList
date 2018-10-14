/* 
Rocky Vargas
09/23/2017
Linked List
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList<int> newList;
	
	newList.insert(5);
	newList.insert(6);
	newList.insert(7);
	newList.insert(8);
	newList.insert('A');
	newList.insert('B');

	int userInput;
	cout << "Enter a number: ";
	cin >> userInput;

	newList.insert(userInput);
	
	cout << "This is the list" << endl;
	newList.display();

	cout << endl << "The minimum is = " << newList.min() << endl;
	cout << "The maximum is = " << newList.max() << endl << endl;

	cout << "This will remove the number 7" << endl;
	newList.remove(newList.find(7));
	newList.display();

	cout << "This will find the address of the number 6" << endl;
	cout << "The address of the number 6 is: " << newList.find(6) << endl << endl;


	system("pause");
	return 0;
}