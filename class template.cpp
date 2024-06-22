#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack {
private:
    int n = 5;
    int top;
    T *s;

public:
    Stack(int n) {
        this->n = n;
        top = -1;
        s = new T[n];
    }

    bool isFull() {
        return top >= n - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(T x) {
        if (isFull()) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            s[top] = x;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            top--;
        }
    }

    int Findtop() {
        return top;
    }

    void printStack() {
        for (int i = top; i >= 0; i--) {
            cout << s[i] << endl;
        }
        cout << "========================" << endl;
    }
};

int main() {
    Stack<string> *a= new Stack<string>(5);
    a->push("1");
    a->push("50");
    a->push("23");
    a->push("200");
    a->printStack();
    cout<<endl;
    Stack<int> *s= new Stack<int>(5);
    s->push(44);
    s->push(9);
    s->push(84);
    s->push(675);
    s->printStack();

    delete a;
    return 0;
}
