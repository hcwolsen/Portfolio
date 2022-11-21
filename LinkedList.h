#ifndef _LinkedList_h_
#define _LinkedList_h_

template <typename T>
class LinkedList {
public:
	LinkedList();
	LinkedList(const LinkedList<T>& original);
	void append(const T& value);
	void remove(const T& value);
	bool contains(const T& value);
	/*
	void reverse();
	T operator[](const int index) const;
	T& operator[](const int index);
	int getSize();
	std::string print();
	*/
	private:
		struct Node {
			T value;
			Node* next;
		};
		Node head;
		int size = 0;
};

template <typename T>
LinkedList<T>::LinkedList() {
	head.value = T();
	head.next = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& original) {

	head.value = original.head.value;
	head.next = original.head.next;
	Node *cur = head.next;
	Node *ogCur = original.head.next;


	for (int x = 0; x <= original.size; x++) {

		if (ogCur == nullptr) {
			break;
		}
		else {
			cur->value = ogCur->value;
			cur->next = ogCur->next;
			if (ogCur->next = nullptr) {
				break;
			}
		}
		
		size++;
	}
}

template <typename T>
void LinkedList<T>::append(const T& value) {
	Node *h = &head;
	Node *a = ( value, nullptr );
	
	if (size == 0) {
		head.value = value;
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
	Node* h = &head;

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


template <typename T>
void LinkedList<T>::remove(const T& value) {
	Node* h = &head;
	Node* prev = h;

	if (size == 1 && head.value == value) {
		delete head;
	}

	if (!contains(value)) {
		return;
	}
	else {
		while (h.next != nullptr) {
			if (h->value == value) {
				
				size--;
			}
		}
	}
}

/*
template <typename T>
void LinkedList<T>::reverse() {

}
 
template <typename T>
int LinkedList<T>::getSize() {
	return size;
}

template <typename T>
std::string LinkedList<T>::print() {
	std::string printableList;
	Node *h = &head;

	while (h != nullptr) {
		printableList.append(h->value);
		if (h->next != nullptr) {
			printableList.append(", ");
		}
		h = h->next;
	}
	
	return printableList;
}

template <typename T>
T LinkedList<T>::operator[](const int index) const {
	//const& T indexVal = T();
	Node* h = &head;
	int count = 0;

	if (index >= size) {
		return T();
	}

	while (h != nullptr) {

		if (count == index) {
			return h->value;
		}

		h = h->next;

		count++;
	}
}

template <typename T>
T& LinkedList<T>::operator[](const int index) {
	//const& T indexVal = T();
	Node* h = &head;
	int count = 0;

	if (index >= size) {
		return T();
	}

	while (h != nullptr) {

		if (count == index) {
			return h->value;
		}

		h = h->next;

		count++;
	}
}
*/
#endif