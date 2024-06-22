#include <bits/stdc++.h>
using namespace std;


void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }

}
int main()
{
    int a[6]={10,20,30,40,50,60};

    printArray(a,6);

}
