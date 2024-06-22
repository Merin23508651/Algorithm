#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    ofstream fout("Ludu.txt");
    for(int i=0;i<40;i++)
    {
        n=rand();
        cout<<rand()%6+1<<endl;
        fout<<rand()%6+1<<endl;
    }
}
