#include <iostream>
using namespace std;

struct Node {
    Node *left = NULL;
    int data;
    Node *right = NULL;
};

class Tree {
public:
    Node *root;

    Tree() {
        root = NULL;
    }

    void insert(int data) {
        Node *newnode = new Node;
        newnode->data = data;

        if (root == NULL) {
            root = newnode;
        } else {
            Node *parent = root;
            Node *current = NULL;

            while (parent != NULL) {
                current = parent;

                if (data < parent->data) {
                    parent = parent->left;
                } else {
                    parent = parent->right;
                }
            }

            if (data < current->data) {
                current->left = newnode;
            } else {
                current->right = newnode;
            }
        }
    }

    void search(Node *findnode, int data){
        if (findnode == NULL) {
            cout << "Element is not present in this tree." << endl;
            return;
        }
        else if (data == findnode->data) {
            cout << "Element is found." << endl;
            return;
        }
        else if (data < findnode->data) {
            search(findnode->left, data);
        }
        else {
            search(findnode->right, data);
        }
    }

    void preOrder(Node* node){
        if (node == NULL){
            return; 
        } else {
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void inOrder(Node* node){
        if (node == NULL) {
            return; 
        } else {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void postOrder(Node* node){
        if (node == NULL) {
            return; 
        } else {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->data << " ";
        }
    }
};

int main() {
    Tree obj1;
    obj1.insert(244);
    obj1.insert(44);
    obj1.insert(344);
    obj1.insert(144);

    cout << "BST preOrder: ";
    obj1.preOrder(obj1.root);
    cout << endl;

    cout << "BST inOrder: ";
    obj1.inOrder(obj1.root);
    cout << endl;

    cout << "BST postOrder: ";
    obj1.postOrder(obj1.root);
    cout << endl;

   obj1.search(obj1.root, 144);
   cout<<endl;
    return 0;
}
