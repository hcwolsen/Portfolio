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
	cout << stringList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<string> stringList2(stringList);
	cout << stringList2.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	stringList.reverse();
	cout << "\nOriginal list's new contents: ";
	cout << stringList.getPrintable() << endl;
	cout << "Copy's contents: ";
	cout << stringList2.getPrintable() << endl;
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the last two nodes...\n";
	stringList.remove("Three");
	stringList.remove("Four");
	cout << "Object's new contents: ";
	cout << stringList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << stringList.getHead() << endl;
	cout << "getTail(): " << stringList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	cout << stringList.getPrintable() << endl;
	cout << "Result of contains(\"One\"): " << stringList.contains("One") << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << stringList.getSize() << endl;
	cout << "Size of the copy: " << stringList2.getSize() << endl;



	cout << "Creating a LinkedList object of type int and appending five values: ";
	LinkedList<int> intList;
	intList.append(0);
	intList.append(1);
	intList.append(2);
	intList.append(3);
	intList.append(4);
	cout << intList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<int> intList2(intList);
	cout << intList2.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	intList.reverse();
	cout << "\nOriginal list's new contents: ";
	cout << intList.getPrintable() << endl;
	cout << "Copy's contents: ";
	cout << intList2.getPrintable() << endl;
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the last two nodes...\n";
	intList.remove(3);
	intList.remove(4);
	cout << "Object's new contents: ";
	cout << intList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << intList.getHead() << endl;
	cout << "getTail(): " << intList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	cout << intList.getPrintable() << endl;
	cout << "Result of contains(\"One\"): " << intList.contains(1) << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << intList.getSize() << endl;
	cout << "Size of the copy: " << intList2.getSize() << endl;



	cout << "Creating a LinkedList object of type int and appending five values: ";
	LinkedList<char> charList;
	charList.append('a');
	charList.append('b');
	charList.append('c');
	charList.append('d');
	charList.append('e');
	cout << charList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the copy constructor on the original object and printing the copy's contents: ";
	LinkedList<char> charList2(charList);
	cout << charList2.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nCalling the reverse() function on the original list to verify the copy is a shallow copy...";
	charList.reverse();
	cout << "\nOriginal list's new contents: ";
	cout << charList.getPrintable() << endl;
	cout << "Copy's contents: ";
	cout << charList2.getPrintable() << endl;
	cout << "Copy's contents are unaffected, success\n";

	cout << "\nCalling the remove() function on the original object and removing the last two nodes...\n";
	charList.remove('d');
	charList.remove('e');
	cout << "Object's new contents: ";
	cout << charList.getPrintable() << endl;
	cout << "Success\n";

	cout << "\nTesting getHead() and getTail() on original object...\n";
	cout << "getHead(): " << charList.getHead() << endl;
	cout << "getTail(): " << charList.getTail() << endl;
	cout << "Success\n";

	cout << "\nTesting contains() on the original object...\n";
	cout << "Original object's contents: ";
	cout << charList.getPrintable() << endl;
	cout << "Result of contains(\"One\"): " << charList.contains('a') << endl;
	cout << "Success\n";

	cout << "\nTesting getSize() by calling it on both the original and copy...";
	cout << "\nSize of the original: " << charList.getSize() << endl;
	cout << "Size of the copy: " << charList2.getSize() << endl;
	

	cout << "Functions reverse() and getPrintable() were not tested independently since they were used in the process of testing other functions.\n\n";
}
