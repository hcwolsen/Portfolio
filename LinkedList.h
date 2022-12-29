//A primitive linked list class designed to work well with any primitive type
//Credit to my friend Kai Tamkun (Github @ heimskr) for helping to refresh my memory on some of the intricacies of pointer usage
//LLLibrary.cpp is provided on my Github (@ hcwolsen) to test and demonstrate each member function

#ifndef _LinkedList_h_
#define _LinkedList_h_

template <typename T>
class LinkedList {
public:
	LinkedList();
	LinkedList(const LinkedList<T>& original);
	void append(const T& value);
	void remove(const T& value);
	T getHead();
	T getTail();
	bool contains(const T& value);
	void reverse();
	int getSize();
	void print();

private:
	struct Node {
		T value = T();
		Node* next = nullptr;
	};
	Node* head = new Node{ T(), nullptr };
	int size = 0;
};

template <typename T>
LinkedList<T>::LinkedList() {
	head->value = T();
	head->next = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& original) {

	if (original.size == 0 || original.head == nullptr) {
		return;
	}

	this->size = original.size;

	Node* newHead = this->head;
	Node* originalHead = original.head;

	for (int x = 0; x < original.size; x++) {
		newHead->value = originalHead->value;
		if (x != original.size - 1) {
			newHead->next = new Node{ T(), nullptr };
		}
		originalHead = originalHead->next;
		newHead = newHead->next;
	}
}

template <typename T>
void LinkedList<T>::append(const T& value) {
	Node* h = head;
	Node* a = new Node{ value, nullptr };

	if (head->next == nullptr && size == 0) {
		head->value = value;
		size++;
	}
	else {
		while (h->next != nullptr) {
			h = h->next;
		}
		h->next = a;
		size++;
	}
}

template <typename T>
bool LinkedList<T>::contains(const T& value) {
	Node* h = head;

	if (size == 0) {
		return false;
	}
	else {
		while (h->next != nullptr) {
			if (h->value == value) {
				return true;
			}
			h = h->next;
		}
		if (h->value == value) {
			return true;
		}
		return false;
	}
}

//Removes all instances of a specified value from the linked list
template <typename T>
void LinkedList<T>::remove(const T& value) {
	Node* h = head;
	Node* prev = h;

	if (!contains(value)) {
		return;
	}
	else if (size == 1 && head->value == value) {
		head->value = T();
		size = 0;
		return;
	}
	else {
		while (h->next != nullptr) {
			if (h->value == value) {
				h = h->next;
				prev->next = h;
				size--;
			}
			else {
				h = h->next;
				prev = prev->next;
			}
		}
	}
}

template <typename T>
void LinkedList<T>::reverse() {
	Node* prev = head;
	Node* cur = head->next;
	Node* tempPrev = new Node{ T(), nullptr };
	Node* tempCur = new Node{ T(), nullptr };

	if (size == 0 || size == 1) {
		return;
	}

	prev->next = nullptr;

	while (cur->next != nullptr) {
		tempPrev = cur;
		tempCur = cur->next;

		cur->next = prev;

		cur = tempCur;
		prev = tempPrev;
	}

	cur->next = prev;
	head = cur;
}


template <typename T>
int LinkedList<T>::getSize() {
	return size;
}

template <typename T>
void LinkedList<T>::print() {
	Node* h = head;
	 
	while (h != nullptr) {
		std::cout << h->value;
		if (h->next != nullptr) {
			std::cout << ", ";
		}
		h = h->next;
	}
	std::cout << "\n";
}

template <typename T>
T LinkedList<T>::getHead() {

	if (size == 0) {
		return T();
	}

	return head->value;
}

template <typename T>
T LinkedList<T>::getTail() {
	Node* h = head;

	if (size == 0) {
		return T();
	}

	if (size == 1) {
		return head->value;
	}

	while (h->next != nullptr) {
		h = h->next;
	}

	return h->value;

}

#endif