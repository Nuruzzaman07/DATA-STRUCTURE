#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string key;
    Node *left;
    Node *right;

    Node(string key) {
        this->key = key;
        left = right = nullptr;
    }
};

class BST {
public:
    Node *root;

    BST() {
        root = nullptr;
    }

    void insert(string key) {
        root = insertHelper(root, key);
    }

    Node* insertHelper(Node* node, string key) {
        if(node == nullptr) {
            return new Node(key);
        }

        if(key < node->key) {
            node->left = insertHelper(node->left, key);
        } else if(key > node->key) {
            node->right = insertHelper(node->right, key);
        }

        return node;
    }

    bool search(string key) {
        return searchHelper(root, key);
    }

    bool searchHelper(Node* node, string key) {
        if(node == nullptr) {
            return false;
        }

        if(key == node->key) {
            return true;
        } else if(key < node->key) {
            return searchHelper(node->left, key);
        } else {
            return searchHelper(node->right, key);
        }
    }

    void inorderTraversal() {
        inorderTraversalHelper(root);
        cout << endl;
    }

    void inorderTraversalHelper(Node* node) {
        if(node == nullptr) {
            return;
        }

        inorderTraversalHelper(node->left);
        cout << node->key << " ";
        inorderTraversalHelper(node->right);
    }

    void preorderTraversal() {
        preorderTraversalHelper(root);
        cout << endl;
    }

    void preorderTraversalHelper(Node* node) {
        if(node == nullptr) {
            return;
        }

        cout << node->key << " ";
        preorderTraversalHelper(node->left);
        preorderTraversalHelper(node->right);
    }

    void postorderTraversal() {
        postorderTraversalHelper(root);
        cout << endl;
    }

    void postorderTraversalHelper(Node* node) {
        if(node == nullptr) {
            return;
        }

        postorderTraversalHelper(node->left);
        postorderTraversalHelper(node->right);
        cout << node->key << " ";
    }
};

int main() {
    BST bst;

    bst.insert("hello");
    bst.insert("world");
    bst.insert("this");
    bst.insert("is");
    bst.insert("a");
    bst.insert("test");

    cout << "Inorder traversal: ";
    bst.inorderTraversal();

    cout << "Preorder traversal: ";
    bst.preorderTraversal();

    cout << "Postorder traversal: ";
    bst.postorderTraversal();

    if(bst.search("test")) {
        cout << "Found 'test' in BST" << endl;
    } else {
        cout << "Could not find 'test' in BST" << endl;
    }

    if(bst.search("foo")) {
        cout << "Found 'foo' in BST" << endl;
    } else {
        cout << "Could not find 'foo' in BST" << endl;
    }

    return 0;
}
