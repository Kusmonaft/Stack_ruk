#include "Stack.h"
// wert - ��� ��������
// ���������� �������� � ����
void Stack::push(int wert)
{
         Node* newNode = new Node;
        newNode->data = wert;
        newNode->next = top;
        top = newNode;
   
}
// ���������� �������� �� �����
void Stack::pop()
{
    if (top == nullptr) {
        cout << "���� ����. �� ������� �������.\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}
// ��������
int Stack::peek()
{
    if (top == nullptr) {
        cout << "���� ����. �������� �� �� ���.\n";
        return -1;
    }
    return top->data;
}