#include <bits/stdc++.h>
using namespace std;


void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " " << (A + i) << " " << *(A + i) << " " << A[i] << endl;
    }
}

void rightShift(int *A, int n, int k) {

    for (int j = 0; j < k; j++) {
        int last = A[n - 1];
        for (int i = n - 1; i > 0; i--) {
            A[i] = A[i - 1];
        }
        A[0] = last;
    }
}

int main() {
    int a[6] = {10, 20, 30, 40, 50, 60};
    printArray(a, 6);
    cout << endl;
    rightShift(a, 6, 2);
    cout << endl;
    printArray(a, 6);

    return 0;
}
