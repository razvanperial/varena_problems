#include <bits/stdc++.h>

using namespace std;
ifstream fin("joc3.in");
ofstream fout("joc3.out");
long long n,x,y,vb[40005],vr[40005],v[40005],s=0,b,r,naux;
int main()
{
    fin>>n>>x>>y;
    naux=n;
    b=x+1;
    r=1-y;
    vb[1]=1;
    vr[1]=1;
    v[1]=1;
    naux--;
    r=n+r;
    while(b!=r && !vb[b] && !vr[r]){
        cout<<b<<" "<<r<<'\n';
        if(!v[b]){
            naux--;
            v[b]=1;
        }
        if(!v[r]){
            naux--;
            v[r]=1;
        }
        s++;
        vb[b]=1;
        vr[r]=1;
        b+=x;
        r-=y;
        if(b>n)
            b-=n;
        if(r<=0)
            r+=n;
    }
    if(!v[b]){
        naux--;
        v[b]=1;
    }
    if(!v[r]){
        naux--;
        v[r]=1;
    }
    fout<<naux<<" "<<s+1<<" "<<b<<" "<<r<<" ";
    return 0;
}
