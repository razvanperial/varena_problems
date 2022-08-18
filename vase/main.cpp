#include <bits/stdc++.h>

using namespace std;
ifstream in("vase.in");
ofstream out("vase.out");
int v[100005];
char s[100005];
int main()
{   long long n,i,x;
    long long sum=0;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>v[i]>>s[i];
        sum+=v[i];
    }
    in>>x;
    long long sd=0, ss=0, si=0;
    for(i=1;i<x;i++)
        si+=v[i];
    if(s[x]=='D')
        ss=si;
    else
        sd=si;
    for(i=x+1;i<=n;i++)
    {
        if(i!=x)
            if(s[i]=='D')
                sd+=v[i];
            else
                ss+=v[i];
    }
    out<<sum/2<<'\n';
    if(sum/2-ss>0)
    {
        out<<sum/2-ss<<" S"<<'\n';
        if(sum/2-ss-v[x]>0)
            out<<sum/2-ss-v[x]<<" S";
        else
            out<<0-(sum/2-ss-v[x])<<" D";
    }
    else
    {
        out<<sum/2-sd<<" D"<<'\n';
        out<<sum/2-sd-v[x]<<" D";
    }
    return 0;
}
