#include <bits/stdc++.h>

using namespace std;
ifstream fin("cifre3.in");
ofstream fout("cifre3.out");
int v1[15];
int v2[15];
int main()
{   int a,b,ok=0;
    fin>>a>>b;
    while(a)
    {
        v1[a%10]++;
        a/=10;
    }
    while(b)
    {
        v2[b%10]++;
        b/=10;
    }
    for(int i=0;i<=9;i++){
        if(v1[i]>0 && v2[i]==0){
            fout<<i<<" ";
            ok=1;
        }
    }
    if(!ok)
        fout<<-1;
    fout<<'\n';
    ok=0;
    for(int i=9;i>=0;i--)
        if(v1[i] && v2[i]){
            fout<<i;
            ok=1;
        }
    if(!ok)
        fout<<-1;

    return 0;
}
