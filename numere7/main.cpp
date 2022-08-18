#include <bits/stdc++.h>

using namespace std;
ifstream fin("numere7.in");
ofstream fout("numere7.out");
int v[60005];
int main()
{
    int n,maxi=0,x,cop;
    fin>>n;
    cop=n*n;
    cout<<cop<<" ";
    if(cop > 60000)
        cop=60000;
    cout<<cop;
    n=n*n;
    while(n--)
    {
        fin>>x;
        if(x<=60005)
            v[x]=1;
    }
    int i=1;
    while(v[i])
    {
        i++;
    }
    fout<<i<<" ";
    while(!v[i] && i<=cop)
        i++;
    fout<<i-1;
    return 0;
}
