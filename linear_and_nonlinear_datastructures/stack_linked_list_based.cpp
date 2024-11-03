#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
};

class Stack
{
public:
    node *head, *curr;
public:
    Stack()
    {

        head = NULL;
        curr = NULL;
    }
    void push(int data){
        node *newnode = new node;
        newnode->data = data;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void pop(){
        node *temp;
        temp = head;
        head = head->next;
        delete temp;
    }

    void displayQueue()
    {
        curr = head;
        while (curr != NULL)
        {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack q1;
    q1.push(55);
    q1.push(65);
    q1.push(75);
    q1.push(85);
    q1.displayQueue();
    q1.pop();
    q1.pop();
    q1.displayQueue();

    return 0;
}