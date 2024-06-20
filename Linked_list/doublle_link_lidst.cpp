#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
    node *prev = NULL;
};
class LinkedList
{
    node *head, *temp;
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
        LinkedList::display_list_FWD();
        LinkedList::display_list_REV();
    }

    void insert_node(int data) // same as adding a node at the at the end of the list
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    void insert_at_head(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;

        head->prev = newnode;
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
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
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
        del->next->prev = temp;
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

    void display_list_FWD()
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
    void display_list_REV()
    {
        cout << "Backword treversing\n";

        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        while (temp != NULL)
        {
            cout << temp->data << "<-";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int LinkedList::count = 0;

int main()
{
    LinkedList List_1;
    List_1.creat_linked_list();
    List_1.insert_at_head(206);
    List_1.display_list_FWD();
    List_1.display_list_REV();
    List_1.insert_at_kth(4, 244);
    List_1.display_list_FWD();
    List_1.display_list_REV();
    List_1.delete_at_kth(4);
    List_1.display_list_FWD();
    List_1.display_list_REV();
    return 0;
}