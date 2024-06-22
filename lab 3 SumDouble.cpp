#include <bits/stdc++.h>
using namespace std;

void printList(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}


int SumList(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int* doubleList(int *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i] *= 2;
    }
    return p;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    cout << "Main list ";
    printList(a, 5);

    cout << "Sum: " << SumList(a, 5) << endl;

    int *b = doubleList(a, 5);
    cout << "Doubled list: ";
    printList(b, 5);

    return 0;
}
