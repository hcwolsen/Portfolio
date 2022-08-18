#ifndef _LinkedList_h_
#define _LinkedList_h_

template <typename T>
class LinkedList {
public:
	LinkedList();
	LinkedList(const LinkedList<T>& original);
	void append(const T& value);
	void remove(int index);
	void reverse();
	bool find(const T& value);

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
	
	while (h->next != nullptr) {
		h = h->next;
	}
	h->next = a;
	size++;
}

template <typename T>
T LinkedList<T>::operator[](const T& index) const {

}

template <typename T>
T& LinkedList<T>::operator[](const T& value) {

}

#endif