#include"Stack.h"

int main() {
	setlocale(LC_ALL, "Rus");

	// ���������� �����
	Stack stack;
	stack.push(2);
	stack.push(4);
	stack.push(1000);

	// �����
	cout << "����� ������� � �����: " << stack.peek() << '\n';

	stack.pop();

	cout << "������� ������� ����� ����� ����������: " << stack.peek() << '\n';

	return 0;
}