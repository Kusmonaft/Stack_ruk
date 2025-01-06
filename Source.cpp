#include"Stack.h"

int main() {
	setlocale(LC_ALL, "Rus");

	// заполнение стека
	Stack stack;
	stack.push(2);
	stack.push(4);
	stack.push(1000);

	// вывод
	cout << "Самый верхний в стеке: " << stack.peek() << '\n';

	stack.pop();

	cout << "Верхний элемент стека после доставания: " << stack.peek() << '\n';

	return 0;
}