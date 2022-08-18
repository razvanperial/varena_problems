#include <bits/stdc++.h>
using namespace std;
ifstream in("extraprime.in");
ofstream out("extraprime.out");
bool ciur[10000005];
int a,b,nr,cate,s,maxim = INT_MIN, minim = INT_MAX,i,j,cif[10];
void ciurerat()
{
    ciur[0] = 1;
    ciur[1] = 1;
    for(i=4;i<=10000000;i+=2)
        ciur[i] = 1;
    for(i=3;i*i<=10000000;i+=2)
        if(ciur[i]==0)
            for(j=i*i;j<=10000000;j+=2*i)
                ciur[j] = 1;
}
int extra(int x)
{
    if(ciur[x])
        return 0;
    cate=1;
    while(x!=0)
    {
        cif[cate++]=x%10;
        x/=10;
    }
    for(int i=cate;i>=1;i--)
    {
        x = 0;
        for(j=cate;j>=1;j--)
            if(i!=j)
                x = x * 10 + cif[j];
        if(ciur[x])
            return 0;
    }
    return 1;
}
int main()
{
    in>>a>>b;
    ciurerat();
    for(i = a ; i <= b ; i++)
    {
        if(extra(i))
        {
            s++;
            minim=min(minim,i);
            maxim=max(maxim,i);
        }
    }
    out<<s<<'\n'<<minim<<'\n'<<maxim;
    return 0;
}
