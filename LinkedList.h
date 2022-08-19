#ifndef _LinkedList_h_
#define _LinkedList_h_

template <typename T>
class LinkedList {
public:
	LinkedList();
	LinkedList(const LinkedList<T>& original);
	void append(const T& value);
	void remove(const T& value);
	void reverse();
	bool contains(const T& value);
	int getSize();
	std::string print();

private:
	struct Node {
		T value;
		Node* next;
	};
	Node head;
	int size;
	T operator[](const T& index) const;
	T& operator[](const T& value);
};

template <typename T>
LinkedList<T>::LinkedList() {
	head.value = T();
	head.next = nullptr;
	size = 0;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& original) {
	head.value = original.head.value;
	Node *o = original.head.next;
	for (int x = 0; x < original.size; x++) {
		append(o.value);
		o = o.next;
		size++;
	}
}

template <typename T>
void LinkedList<T>::append(const T& val) {
	Node *h = &head;
	Node *a = new Node{ val, nullptr };
	
	if (size == 0) {
		head = *a;
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
void LinkedList<T>::remove(const T& value) {

}

template <typename T>
void LinkedList<T>::reverse() {

}

template <typename T>
bool LinkedList<T>::contains(const T& value) {

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
T LinkedList<T>::operator[](const T& index) const {

}

template <typename T>
T& LinkedList<T>::operator[](const T& value) {

}

#endif