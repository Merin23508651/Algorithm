#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    private:
        int row;
    int col;
    int **m;
    public:
        Matrix()
        {
            row=5;
            col=5;
            m=new int*[row];
            for(int i=0;i<row;i++)
            {
                m[i]=new int [col];
            }
        }
        Matrix(int row,int col)
        {
            this->row=row;
            this->col=col;
            m=new int*[row];
            for(int i=0;i<row;i++)
            {
                m[i]=new int[col];
            }
        }
    void print()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
}
};



int main()
{
    Matrix *m1= new Matrix();
    m1->print();

}
