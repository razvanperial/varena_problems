#include <bits/stdc++.h>

using namespace std;
ifstream fin("stalpi10.in");
ofstream fout("stalpi10.out");
int a[2000005];
int b[2000005];
int main()
{   int n,mini=INT_MAX, maxi=0,d,cd,i,lmax=0,k=0,it=0;;
    fin>>n;
    while(n--)
    {
        fin>>d>>cd;
        b[1000000+d-cd]+=1;
        b[1000000+d+cd]-=1;
        mini=min(1000000+d-cd,mini);
        maxi=max(1000000+d+cd+1,maxi);
    }
    for(i=mini;i<=maxi-2;i++)
    {
        a[i] = a[i-1] + b[i];
        if(a[i]>lmax)
        {
            k=1;
            lmax=a[i];
        }
        else if(a[i]==lmax)
            k++;
        if(a[i]==0)
            it++;
    }
    fout<<lmax<<" "<<k<<" "<<it;

    return 0;
}
