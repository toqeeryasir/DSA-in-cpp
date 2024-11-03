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
public:
    node *head, *temp;
    node *pointer;
    int static count;
    int value, len;

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
    }

    void insert_node(int data) // same as adding a node at the end of the list
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    void insert_at_head(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;

        newnode->next = head;
        head = newnode;
    }

    void insert_at_kth(int pose, int data)
    {
        int x = 2;
        temp = head;
        while (x != pose)
        {
            temp = temp->next;
            x++;
        }
        node *newnode = new node;
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void delete_at_kth(int pose)
    {
        int x = 2;
        temp = head;
        while (x != pose)
        {
            temp = temp->next;
            x++;
        }
        node *del = temp->next;
        temp->next = del->next;
        delete del;
    }

    void deleting_at_end()
    {
        temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void display_list()
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int LinkedList::count = 0;
int main()
{
    LinkedList List_1;
    List_1.creat_linked_list();
    List_1.display_list();
    List_1.insert_at_kth(5, 244);
    List_1.display_list();
    List_1.delete_at_kth(5);
    List_1.display_list();
    List_1.insert_at_head(206);
    List_1.display_list();
    List_1.deleting_at_end();
    List_1.display_list();

    return 0;
}