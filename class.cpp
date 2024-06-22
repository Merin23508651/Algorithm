#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    ofstream fout("class.txt");
    for(int i=0;i<20;i++)
    {
        n=20;
        cout<<rand()%100+1<<endl;
        fout<<rand()%100+1<<endl;
    }
}
