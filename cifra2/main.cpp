#include <bits/stdc++.h>

using namespace std;
ifstream fin("cifra2.in");
ofstream fout("cifra2.out");
long long n,cmin=9,aux,nr,p,cmax1=0,cmax2=0;
bool ok=true;
int main()
{   fin>>n;
        aux=n;
        while(aux){
            cmin=min(cmin,aux%10);
            if(aux%10>cmax1){
                cmax2=cmax1;
                cmax1=aux%10;
            }
            else if ( aux%10 > cmax2)
                cmax2=aux%10;
            aux/=10;
        }
        if(ok)
            fout<<cmin<<'\n';
        aux=n;
        nr=0;
        p=1;
        while(aux){
            if(aux%10>cmin){
                nr=nr+(aux%10-cmin)*p;
                p*=10;
            }
            aux/=10;
        }
        if(ok){
            ok=false;
            fout<<nr<<'\n';
        }
    fout<<cmax1-cmax2;
    return 0;
}
