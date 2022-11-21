#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

	LinkedList<string> stringList;
	LinkedList<string> stringList2(stringList);
	stringList.append("Hello!");
	stringList.append("Hello again!");
	stringList.contains("Hello!");
	stringList.contains("Hola!");



	/*
	int llSize;
	string val;

	cout << "Enter linked list size: ";
	cin >> llSize;
	LinkedList<string> ll;

	for (int x = 0; x < llSize; x++) {
		cout << "Enter a new value: ";
		cin >> val;
		ll.append(val);
	}

	cout << ll.print();
	ll.remove(val);
	cout << ll.print();
	*/
}
