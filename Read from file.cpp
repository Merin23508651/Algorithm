#include <bits/stdc++.h>
using namespace std;
void print(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<"  ";
        if(i==9||i==19||i==29)
        {
            cout<<endl;
        }
    }
}
void avg(int *p,int n)
{
        int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];

    }
    cout<<"Avg ="<<sum/n;
}
void bonus(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i]<=95)
        {

        cout<<p[i]<<"+"<<5<<"="<<p[i]+5<<"  ";
        if(i==9||i==19||i==29)
        {
            cout<<endl;
        }
        }

    }
}
int main()
{

    int n=20;
    int *a =new int[n];
    ifstream fin("class.txt");
    for(int i=0;i<n;i++)
    {
    fin>>a[i];
    }
    cout<<endl;
    print(a,n);
    cout<<endl;
    avg(a,n);
    cout<<endl;
    cout<<"Bonus mark: "<<endl;
    bonus(a,n);
    return 0;
}
