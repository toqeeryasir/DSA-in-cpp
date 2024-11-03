#include <iostream>
#include <string>
using namespace std;

struct node {
    int data;
    node *next = NULL;
};

class Queue {
public:
    node *head;

    Queue() {
        head = NULL;
    }

    void insertNode(int data) {
        node *newnode = new node;
        newnode->data = data;
        if (head == NULL) {
            head = newnode;
        } else {
            node *curr = head;
            while (curr->next != NULL){
                curr = curr->next;
            }
            curr->next = newnode;
        }
    }

    void deletion(){
        node *temp;
        temp = head;
        head = head->next;
        delete temp;
        cout<<"Node has been deleted successfully"<<endl;
    }

    void displayQueue() {
        node *curr = head;
        while (curr != NULL) {
            cout<<curr->data<<"->";
            curr = curr->next;
        }
        cout<<endl;
    }
};

int main() {
    Queue q1;
    q1.insertNode(213);
    q1.insertNode(365);
    q1.insertNode(194);
    q1.insertNode(404);
    cout<<endl;
    q1.displayQueue();
    q1.deletion();
    q1.displayQueue();
    return 0;
}
