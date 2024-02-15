#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertion (int data) {
        Node* new_node;
        new_node=(struct Node*)malloc (sizeof(struct Node));
        new_node->data = data;
        new_node->prev = tail;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }
    void add_begin(int data) {
        Node* new_node = (struct Node*)malloc (sizeof(struct Node));
        new_node->data = data;
        new_node->next = head;
        new_node->prev = NULL;
        if (head == NULL) {
            tail = new_node;
        }
        else {
            head->prev = new_node;
        }
        head = new_node;
    }
    void add_end(int data) {
        Node* new_node = (struct Node*)malloc (sizeof(struct Node));
        new_node->data = data;
        new_node->next = NULL;
        new_node->prev = tail;
        if (tail == NULL) {
            head = new_node;
        }
        else {
            tail->next = new_node;
        }
        tail = new_node;
    }


    void print_forward() {
        Node* current_node = head;
        while (current_node != NULL) {
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout << endl;
    }

    void print_backward() {
        Node* current_node = tail;
        while (current_node != NULL) {
            cout << current_node->data << " ";
            current_node = current_node->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList D;
    D.insertion(11);
    D.insertion(20);
    D.insertion(30);
    D.insertion(40);
    D.insertion(50);
    D.add_begin(10);
    D.add_end(55);

    cout << "Printing Forward: ";
    D.print_forward();

    cout << "Printing Backward: ";
    D.print_backward();

    return 0;
}
