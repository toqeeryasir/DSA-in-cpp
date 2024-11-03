#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct node {
    int data;
    node *next = NULL;
};

class LinkedList {
public:
    node *head, *curr;

public:
    LinkedList() {
        head = NULL;
        curr = NULL;
    }

    void insert_at_end(int data) {
        node *newnode = new node;
        newnode->data = data;
        if (head == NULL) {
            curr = head = newnode;
        } else {
            curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = newnode;
        }
    }

    void insert_at_head(int data) {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }

    void insert_at_kth(int data, int pos) {
        if (pos == 1) {
            insert_at_head(data);
            return;
        }
        
        int x = 1;
        curr = head;
        while (x != pos - 1 && curr != NULL) {
            curr = curr->next;
            x++;
        }
        
        if (curr == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        node *newnode = new node;
        newnode->data = data;
        newnode->next = curr->next;
        curr->next = newnode;
    }

    void delete_at_head() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    void delete_at_kth(int pos) {
        if (head == NULL || pos == 1) {
            delete_at_head();
            return;
        }

        int x = 1;
        curr = head;
        while (x != pos - 1 && curr->next != NULL) {
            curr = curr->next;
            x++;
        }

        if (curr->next == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        node *del = curr->next;
        curr->next = del->next;
        delete del;
    }

    void delete_at_end() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        curr = head;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
    }

    void display_list() {
        curr = head;
        while (curr != NULL) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList List_1;
    List_1.insert_at_end(12);
    List_1.insert_at_end(15);
    List_1.insert_at_head(17);
    List_1.insert_at_kth(44, 2);
    List_1.display_list();
    List_1.delete_at_head();
    List_1.display_list();
    List_1.delete_at_end();
    List_1.display_list();
    List_1.delete_at_kth(2);
    List_1.display_list();
    return 0;
}
