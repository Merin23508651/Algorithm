#include <iostream>
using namespace std;
struct Node {
    int data;
    int pri;
    Node* next;
};
Node* createNode(int data, int pri) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->pri = pri;
    newNode->next = nullptr;
    return newNode;
}
bool isEmpty(Node* f) {
    return f == nullptr;
}
void en(Node*& f, int data, int pri) {
    Node* newNode = createNode(data, pri);
    if (isEmpty(f) || f->pri > pri) {
        newNode->next = f;
        f = newNode;
    } else {
        Node* temp = f;
        while (temp->next != nullptr && temp->next->pri <= pri) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void de(Node*& f) {
    if (isEmpty(f)) {
        cout << "pri queue is empty. Cannot de." << endl;
        return;
    }
    Node* temp = f;
    f = f->next;
    delete temp;
}
int frontElement(Node* f) {
    if (isEmpty(f)) {
        cout << "pri queue is empty." << endl;
        return -1;
    }
    return f->data;
}
void print(Node* f) {
    if (isEmpty(f)) {
        cout << "pri queue is empty." << endl;
        return;
    }
    Node* temp = f;
    while (temp != nullptr) {
        cout << "(" << temp->data << ", " << temp->pri << ") ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* f = nullptr;

    en(f, 10, 3);
    en(f, 20, 1);
    en(f, 30, 2);
    en(f, 55, 4);
    en(f, 88, 0);
    en(f, 5, 2);
    en(f, 19, 1);
    en(f, 66, 5);
    en(f, 100, 3);

    cout << "pri queue elements: ";
    print(f);

    de(f);
    de(f);
    cout << "pri queue elements after de: ";
    print(f);

    de(f);
    de(f);
    de(f);
    de(f);
    de(f);
    cout << "pri queue elements after de: ";
    print(f);

    return 0;
}
