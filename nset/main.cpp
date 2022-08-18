#include <bits/stdc++.h>

using namespace std;
ifstream fin("nset.in");
ofstream fout("nset.out");
long long n,k=0,v[10];
void nset(int n){
    if(!n)
        return;
    if(!v[n%10]){
        k++;
        v[n%10]++;
    }
    nset(n/10);
}
int main()
{   fin>>n;
    nset(n);
    fout<<k;
    return 0;
}
