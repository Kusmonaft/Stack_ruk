#pragma once
#include"Node.h"

class Stack
{
private:
	Node* top;

public:
	Stack() { top = nullptr; }
	void push(int value) {};
	void pop() {};
	int peek() {};
	// проверка на пустату
	bool empty() { return top == nullptr; }

};