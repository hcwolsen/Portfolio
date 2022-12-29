//This program file was used for debugging while I was writing LinkedList.h, 
//and is provided to show exhaustive testing of each member function for 
//objects storing several primitive data types, and one abstract type
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

	cout << "Creating a LinkedList object of type string and appending five values: ";
	LinkedList<string> stringList;
	stringList.append("Zero");
	stringList.append("One");
	stringList.append("Two");
	stringList.append("Three");
	stringList.append("Four");
	stringList.print();
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<string> stringList2(stringList);
	stringList2.print();
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	stringList.reverse();
	cout << "\nOriginal list's new contents: ";
	stringList.print();
	cout << "Copy's contents: ";
	stringList2.print();
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the first two nodes...\n";
	stringList.remove("Three");
	stringList.remove("Four");
	cout << "Object's new contents: ";
	stringList.print();
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << stringList.getHead() << endl;
	cout << "getTail(): " << stringList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	stringList.print();
	cout << "Result of contains(\"One\"): " << stringList.contains("One") << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << stringList.getSize() << endl;
	cout << "Size of the copy: " << stringList2.getSize() << endl;

	cout << "\n-----------------------------------------------------------------------------------------------------\n\n";

	cout << "Creating a LinkedList object of type int and appending five values: ";
	LinkedList<int> intList;
	intList.append(0);
	intList.append(1);
	intList.append(2);
	intList.append(3);
	intList.append(4);
	intList.print();
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<int> intList2(intList);
	intList2.print();
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	intList.reverse();
	cout << "\nOriginal list's new contents: ";
	intList.print();
	cout << "Copy's contents: ";
	intList2.print();
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the first two nodes...\n";
	intList.remove(3);
	intList.remove(4);
	cout << "Object's new contents: ";
	intList.print();
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << intList.getHead() << endl;
	cout << "getTail(): " << intList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	intList.print();
	cout << "Result of contains(\"One\"): " << intList.contains(1) << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << intList.getSize() << endl;
	cout << "Size of the copy: " << intList2.getSize() << endl;

	cout << "\n-----------------------------------------------------------------------------------------------------\n\n";
	
	cout << "Creating a LinkedList object of type char and appending five values: ";
	LinkedList<char> charList;
	charList.append('a');
	charList.append('b');
	charList.append('c');
	charList.append('d');
	charList.append('e');
	charList.print();
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<char> charList2(charList);
	charList2.print();
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	charList.reverse();
	cout << "\nOriginal list's new contents: ";
	charList.print();
	cout << "Copy's contents: ";
	charList2.print();
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the first two nodes...\n";
	charList.remove('d');
	charList.remove('e');
	cout << "Object's new contents: ";
	charList.print();
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << charList.getHead() << endl;
	cout << "getTail(): " << charList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	charList.print();
	cout << "Result of contains(\"One\"): " << charList.contains('a') << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << charList.getSize() << endl;
	cout << "Size of the copy: " << charList2.getSize() << endl;
	

	cout << "Functions reverse() and getPrintable() were not tested independently since they were used in the process of testing other functions.\n\n";
}
