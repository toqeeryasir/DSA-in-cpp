#include <iostream>
#include <string>
using namespace std;

struct node {
    char prio;
    int data;
    node *next = NULL;
};

class Queue {
public:
    node *head;

    Queue() {
        head = NULL;
    }

    void insertNode(int data, char prio) {
        node *newnode = new node;
        newnode->data = data;
        newnode->prio = prio;
        newnode->next = NULL;
        if (head == NULL || head->prio < newnode->prio) {
            newnode->next = head;
            head = newnode;
        } else {
            node *curr = head;
            while (curr->next != NULL && curr->next->prio >= newnode->prio){
                curr = curr->next;
            }
            newnode->next = curr->next;
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
            cout<<curr->data<<""<< curr->prio <<"->";
            curr = curr->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {
    Queue q1;
    q1.insertNode(244, 'r');
    q1.insertNode(344, 'r');
    q1.insertNode(144, 'p');
    q1.insertNode(444, 'r');
    q1.displayQueue();
    q1.deletion();
    q1.displayQueue();
    return 0;
}
