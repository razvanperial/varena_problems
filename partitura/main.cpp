#include <bits/stdc++.h>

using namespace std;

ifstream in("partitura.in");
ofstream out("partitura.out");

int n,a,b,c,cr=0,ds=0,s=0,val,i,maj=0,minor=0;
int v[100000];
bool ok=true;

int main()
{
    in>>n>>v[1];
    if(v[1]>1)
        s+=v[1];
    for(i=2; i<=n; i++)
    {
        in>>v[i];
        if(v[i]>1)
            s+=v[i];
    }
    for(i=2;i<=n;i++)
    {
        if(v[i]!=1 && v[i-1]!=1)
        {
            if(v[i]>=v[i-1])
            {
                val=v[i-1];
                while(v[i]>=v[i-1] && v[i]!=1)
                {
                    i++;
                    in>>v[i];
                }
                cr+=v[i-1]-val;
                cout<<val<<" "<<v[i-1]<<'\n';
                i--;
            }
            else
            {
                val=v[i-1];
                while(v[i]<v[i-1] && v[i]!=1)
                {
                    i++;
                    in>>v[i];
                }
                ds+=val-v[i-1];
                i--;
            }
        }
    }
    for(i=3;i<=n;i++){
        if(v[i-2]!=1 && v[i-1]!=1 && v[i]!=1){
            if(v[i-2]+3==v[i-1] && v[i-1]+2==v[i])
                maj++;
            else if (v[i-2]+2==v[i-1] && v[i-1]+3==v[i])
                minor++;
        }
    }
    out<<s<<'\n'<<abs(ds-cr)<<'\n'<<maj<<" "<<minor;
    return 0;
}
