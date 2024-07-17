#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
bool isEmpty(Node* f) {
    return f == nullptr;
}
void enqueue(Node*& f, Node*& r, int data) {
    Node* newNode = createNode(data);
    if (r == nullptr) {
        f = r = newNode;
    } else {
        r->next = newNode;
        r = newNode;
    }
}
void dequeue(Node*& f, Node*& r) {
    if (isEmpty(f)) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }
    Node* temp = f;
    f = f->next;
    if (f == nullptr) {
        r = nullptr;
    }
    delete temp;
}
int f(Node* f) {
    if (isEmpty(f)) {
        cout << "Queue is empty." << endl;
    }
    return f->data;
}
void print(Node* f) {
    if (isEmpty(f)) {
        cout << "Queue is empty." << endl;
        return;
    }
    Node* temp = f;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* f = nullptr;
    Node* r = nullptr;

    enqueue(f, r, 10);
    enqueue(f, r, 20);
    enqueue(f, r, 30);
    enqueue(f, r, 55);
    enqueue(f, r, 88);
    enqueue(f, r, 5);
    enqueue(f, r, 19);
    enqueue(f, r, 66);
    enqueue(f, r, 100);

    cout << "Queue elements: ";
    print(f);

    dequeue(f, r);
    dequeue(f, r);
    cout << "Queue elements after dequeue: ";
    print(f);

    dequeue(f, r);
    dequeue(f, r);
    dequeue(f, r);
    dequeue(f, r);
    dequeue(f, r);
    cout << "Queue elements after dequeue: ";
    print(f);
}
