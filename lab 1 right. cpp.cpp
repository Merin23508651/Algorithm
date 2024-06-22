#include <bits/stdc++.h>
using namespace std;


void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
}
void shift(int *A,int n,int k)
{
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<n;i++)
    {
        A[i]=A[i+1];
    }
    }

    for(int i=n-1;i>=n-k;i--)
    {
        A[i]=0;
    }
}
void left(int *A,int n,int k)
{
    for(int j=0;j<k;j++)
    {
        for(int i=n-1;i>0;i--)
    {
        A[i]=A[i-1];
    }
    }

    for(int i=0;i<k;i++)
    {
        A[i]=0;
    }
}
int main()
{
    int a[6]={10,20,30,40,50,60};
    int b[6]={10,20,30,40,50,60};

    printArray(a,6);
    cout<<endl;
    shift(a,6,2);
    cout<<endl;
    printArray(a,6);
    printArray(b,6);
    cout<<endl;
    left(b,6,2);
    cout<<endl;
    printArray(b,6);

}
