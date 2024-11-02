#include <iostream>
using namespace std;

int arr[9];
int top = -1;

void push(int data) {
    if (top >= 9 - 1) {
        cout << "Stack overflow." << endl;
    } else {
        top += 1;
        arr[top] = data;
        cout << data << " pushed into the stack." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
    } else {
        cout << arr[top] << " popped from the stack." << endl;
        top -= 1;
    }
}

void peek() {
    if (top != -1) {
        cout << "Top element is: " << arr[top] << endl;
    } else {
        cout << "Stack is empty." << endl;
    }
}

bool is_empty() {
    return top;
}

bool is_full() {
    return top;
}

int main() {
    push(44);
    push(55);
    pop();
    peek();
    int val = is_empty();
    if (val == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    int val2 = is_full();
    if (val2 == 9 - 1) {
        cout << "Stack is full." << endl;
    } else {
        cout << "Stack is not full." << endl;
    }
    
    return 0;
}
