#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


    Node* top;

    Stack()
    {
        top = NULL;
    }

    void push(int value) {
        Node* new_node = new Node;
        new_node->data = value;
        new_node->next = top;
        top = new_node;
        cout << "Pushed value " << value << " onto the stack" << endl;
    }

    int pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int popped_value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        cout << "Popped value " << popped_value << " from the stack" << endl;
        return popped_value;
    }


    int peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    int Size() {
        int Count = 0;
        Node* current = top;
        while (current != NULL) {
            Count++;
            current = current->next;
        }
        return Count;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack contents: ";
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
int main()
{
    push(5);
    push(6);
    push(8);
    push(10);
    push(81);
    push(100);
    display();
    pop();
    display();
}
