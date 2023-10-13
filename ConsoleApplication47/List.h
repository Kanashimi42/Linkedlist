#pragma once
#include <iostream>
#include "Element.h"

class List {
	Element* Head, * Tail;
	int count;
	int top;
	enum { EMPTY = 0, FULL = 5 };
public:
	List();
	~List();
	void Push(int d);
	void Clear();
	void Pop();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Print();
	void PrintLastElement();
	void DelAll();
};
