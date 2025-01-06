#include "Stack.h"
// wert - это значение
// добовление элемента в стек
void Stack::push(int wert)
{
         Node* newNode = new Node;
        newNode->data = wert;
        newNode->next = top;
        top = newNode;
   
}
// достование элемента из стека
void Stack::pop()
{
    if (top == nullptr) {
        cout << "Стек пуст. Не удается открыть.\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}
// просмотр
int Stack::peek()
{
    if (top == nullptr) {
        cout << "Стек пуст. смотреть не на что.\n";
        return -1;
    }
    return top->data;
}