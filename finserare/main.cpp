#include <bits/stdc++.h>

using namespace std;
void inserare(int &n){
    long long nr=0,aux=n,dif,p=1;
    while(aux/10){
        nr=nr+aux%10*p;
        p*=10;
        dif = abs(aux/10%10-aux%10);
        nr=nr+dif*p;
        p*=10;
        aux/=10;
    }
    nr=nr+aux*p;
    n=nr;
}
int main()
{   int n;
    cin>>n;
    inserare(n);
    cout<<n;
    return 0;
}
