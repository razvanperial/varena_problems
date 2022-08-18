#include <bits/stdc++.h>

using namespace std;
ifstream fin("peridia.in");
ofstream fout("peridia.out");
int a[1000][1000];
int v[100000];
int main()
{
    int n,x,y,z,k,i=1,j=1,sus,fata,stn,imax=1,jmax=1,aux;
    char c;
    fin>>n>>x>>y>>z>>k;
    sus=x;
    fata=z;
    stn=y;
    a[1][1]+=7-sus;
    while(k--)
    {
        fin>>c;
        if(c=='E' && j<n)
        {
            aux=sus;
            sus=stn;
            stn=7-aux;
            j++;
            a[i][j]+=7-sus;
        }
        else if(c=='S' && i<n)
        {
            aux=sus;
            sus=7-fata;
            fata=aux;
            i++;
            a[i][j]+=7-sus;
        }
        else if(c=='V' && j>1)
        {
            aux=sus;
            sus=7-stn;
            stn=aux;
            j--;
            a[i][j]+=7-sus;
        }
        else if(c=='N' && i>1)
        {
            aux=sus;
            sus=fata;
            fata=7-aux;
            i--;
            a[i][j]+=7-sus;
        }
    }
    int l=1;
    for(i=1; i <= n; i++)
        for(j=1; j <= n; j++)
            if(a[i][j])
            {
                v[l]=a[i][j];
                l++;
            }
    sort(v+1,v+l);
    for(i=1; i<l; i++)
        fout<<v[i]<<" ";
    return 0;
}
