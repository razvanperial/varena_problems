#include <bits/stdc++.h>

using namespace std;
ifstream in("loto.in");
ofstream out("loto.out");
int v[10000];
int a[10];
int f[10000];
int main()
{
    int i,n,x,mini=INT_MAX,maxi=0,dmin1=INT_MAX,dmin2=INT_MAX,c1,c2;
    in>>n;
    for(i=1; i<=n; i++)
        in>>v[i];
    for(i=1; i<=6; i++)
    {
        in>>a[i];
        f[a[i]]++;
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(!f[v[i]])
        {
            if(fabs(v[i]-mini)<dmin1)
            {
                c1=i;
                dmin1=fabs(v[i]-mini);
            }
            else if(fabs(v[i]-mini) == dmin1)
                if(v[i]>v[c1])
                    c1=i;
            if(fabs(v[i]-maxi)<dmin2)
            {
                c2=i;
                dmin2=fabs(v[i]-maxi);
            }
            else if(fabs(v[i]-maxi) == dmin2)
                if(v[i]>v[c2])
                    c2=i;
            cout<<v[i]<<" "<<fabs(v[i]-mini)<<" "<<fabs(v[i]-maxi)<<" "<<c1<<" "<<c2<<'\n';
        }
    }
    if(c1==c2)
    {
        f[v[c1]]++;
        dmin2=INT_MAX;
        for(i=1; i<=n; i++)
        {
            if(!f[v[i]])
                if(fabs(v[i]-maxi)<dmin2)
                {
                    c2=i;
                    dmin2=fabs(v[i]-maxi);
                }
                else if(fabs(v[i]-maxi) == dmin2)
                    if(v[i]>v[c2])
                        c2=i;
        }
    }
    sort(a+1,a+7);
    a[1]=v[c1];
    a[6]=v[c2];
    sort(a+1,a+7);
    for(i=1; i<=6; i++)
    {
        out<<a[i]<<" ";
    }
    return 0;
}
