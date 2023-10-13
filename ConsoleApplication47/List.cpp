#include "List.h"

using namespace std;

List::List() {
	Head = Tail = NULL;
	count = 0;
	top = EMPTY;
}
List::~List() {
	DelAll();
}

void List::Push(int d) {
	if (!IsFull()) {
		Element* temp = new Element(d);
		temp->next = 0;
		temp->prev = Tail;

		if (Tail != 0)
			Tail->next = temp;

		if (count == 0)
			Head = Tail = temp;
		else
			Tail = temp;

		count++;
		top++;
	}
}
void List::Pop() {
	Element* del = Tail;
	Element* temp = Tail;

	temp = temp->prev;
	temp->next = NULL;
	Tail = temp;

	delete del;

	--count;
	--top;
}
void List::Clear() {
	top = EMPTY;

	DelAll();
}

bool List::IsEmpty() { return top == EMPTY; }
bool List::IsFull() { return top == FULL; }
int List::GetCount() { return count; }

void List::Print() {
	Element* temp = Head;
	while (temp->next != 0) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data;
}
void List::PrintLastElement() {
	Element* temp = Tail;
	cout << temp->data;
}

void List::DelAll() {
	while (count != 0) {
		int i = 1;

		Element* Del = Head;
		Element* PrevDel = Del->prev;
		Element* AfterDel = Del->next;

		if (PrevDel != 0 && count != 1)
			PrevDel->next = AfterDel;
		if (AfterDel != 0 && count != 1)
			AfterDel->prev = PrevDel;

		Head = AfterDel;
		Tail = PrevDel;

		delete Del;
		count--;
		top--;
	}
}