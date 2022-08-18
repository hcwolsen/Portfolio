#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	int llSize, val;

	cout << "Enter linked list size: ";
	cin >> llSize;
	LinkedList<int> ll;

	for (int x = 0; x < llSize; x++) {
		cout << "\nEnter a new value: ";
		cin >> val;
		ll.append(val);
	}

}
