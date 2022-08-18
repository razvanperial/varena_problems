#include <bits/stdc++.h>

using namespace std;
ifstream in("cub1.in");
ofstream out("cub1.out");

int n,i,frmax=0,cmax=0,l,k=0,val,lmax=0,j,lp,lcmax,ok;
int v[55];
int f[10];
int m[55];
int p[55];
int main()
{
    in>>n;
    for(i=1; i<=n; i++)
    {
        in>>v[i];
        f[v[i]]++;
        if(f[v[i]]==1)
            k++;
        if(f[v[i]]>frmax)
        {
            frmax=f[v[i]];
            l=1;
            m[l]=v[i];
        }
        else if(f[v[i]]==frmax)
        {
            l++;
            m[l]=v[i];
        }
    }
    out<<k<<'\n';
    sort(m+1,m+l+1);
    for(i=1; i<=l; i++)
    {
        out<<m[i]<<" ";
    }
    out<<'\n';
    for(i=1; i<=n; i++)
    {
        lcmax=0;
        for(j=1; j<=n; j++)
        {
            if(j!=i)
            {
                ok=0;
                val=j;
                l=0;
                while(v[j]==v[val] && j<=n)
                {
                    j++;
                    if(j==i)
                    {
                        j++;
                        ok=1;
                    }
                }
                if(j>n)
                    j=n;
                else
                    j--;
                l=j-val+1;
                if(ok)
                    l--;
                lcmax=max(lcmax,l);
            }
        }
        cout<<lcmax<<'\n';
        if(lcmax>lmax)
        {
            lmax=lcmax;
            lp=1;
            p[lp]=i;
        }
        else if(lcmax==lmax)
        {
            lp++;
            p[lp]=i;
        }

    }
    out<<lmax<<'\n';
    for(i=1; i<=lp; i++)
        out<<p[i]<<" ";
    return 0;
}
