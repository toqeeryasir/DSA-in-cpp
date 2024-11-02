#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
};
class LinkedList
{
    node *head, *temp;
    int static count;
    int value, len, turn = 0;

public:
    LinkedList()
    {

        head = NULL;
        temp = NULL;
        count++;
    }
    void creat_linked_list()
    {
        cout << "How many values u wanna input ?" << endl;
        cin >> len;
        for (int i = 1; i <= len; i++)
        {
            cout << "Input value for node no. " << i << endl;
            cin >> value;
            LinkedList::insert_node(value);
        }
        cout << "Values of list no. " << count << " are" << endl;
        LinkedList::display_list();
    }

    void insert_node(int data)
    {
        turn++;
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        if (turn == len)
        {
            temp = head;
            newnode->next = temp;
        }
    }

    void display_list()
    {
        temp = head;
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp->next != head->next);
        cout << endl;
    }
};

int LinkedList::count = 0;

int main()
{
    LinkedList List_1;
    List_1.creat_linked_list();
    return 0;
}