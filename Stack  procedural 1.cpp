#include <iostream>
using namespace std;

const int size = 20;
int a[size];
int top = -1;

bool isFull() {
    return top >= size - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int x) {
    if (isFull()) {
        cout << "Stack is full. Cannot push " << x << endl;
    } else {
        top++;
        a[top] = x;
        cout << "Pushed " << x <<  endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        cout << "Popped " << a[top] << endl;
        top--;
    }
}

void print() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(15);
    push(30);
    push(45);
    push(60);
    print();

    pop();
    pop();
    print();

    return 0;
}
