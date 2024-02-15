#include <iostream>
using namespace std;

class Node {
public:
    int id;
    string name;
    double salary;
    Node* left;
    Node* right;

    Node(int id, string name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    void Insert(int id, string name, double salary)
    {
        Node* newNode = new Node(id, name, salary);
        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            Node* current = root;
            while (true) {
                if (id < current->id) {
                    if (current->left == NULL) {
                        current->left = newNode;
                        break;
                    } else {
                        current = current->left;
                    }
        }
        else if (id > current->id) {
                    if (current->right == NULL) {
                        current->right = newNode;
                        break;
                    } else {
                        current = current->right;
                    }
                } else {
                    cout << "Teacher with ID " << id << " already exists." << endl;
                    break;
                }
            }
        }
    }

    Node* searchRecursive(int id, Node* node) {
        if (node == NULL) {
            return NULL;
        } else if (node->id == id) {
            return node;
        } else if (id < node->id) {
            return searchRecursive(id, node->left);
        } else {
            return searchRecursive(id, node->right);
        }
    }

    Node* searchIterative(int id) {
        Node* current = root;
        while (current != NULL) {
            if (id == current->id) {
                return current;
            } else if (id < current->id) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return NULL;
    }
};

int main() {
    BST bst;
    bst.Insert(101, "John", 50000);
    bst.Insert(102, "Alice", 60000);
    bst.Insert(103, "Bob", 55000);
    bst.Insert(104, "Mary", 45000);
    bst.Insert(105, "David", 70000);
    bst.Insert(106, "Sarah", 65000);
    bst.Insert(107, "Alex", 75000);
    bst.Insert(108, "Lisa", 40000);
    bst.Insert(109, "Tom", 80000);
    bst.Insert(110, "Jane", 55000);

    Node* node1 = bst.searchRecursive(105, bst.root);
    if (node1 != NULL) {
        cout << "Teacher found (recursive search): ID=" << node1->id << ", Name=" << node1->name << ", Salary=" << node1->salary << endl;
    } else {
        cout << "Teacher not found (recursive search)" << endl;
    }
 }
