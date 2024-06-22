#include <bits/stdc++.h>
using namespace std;


int **createMatrix(int row,int col)
{
int **m=new int*[row];
for(int i=0;i<row;i++)
{
    m[i]=new int[col];
}
return m;
}
void print(int **p,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
}
int main()
{
int **m1=createMatrix(3,3);
print(m1,3,3);

int **m2=createMatrix(5,2);
print(m2,5,2);
}
