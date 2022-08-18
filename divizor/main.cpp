#include <bits/stdc++.h>

using namespace std;
ifstream fin("divizor.in");
ofstream fout("divizor.out");
long long n,p=1,nr,s=1,aux,nrdiv,nrdivmax=0,l=0,i,divmax = 0;
int v[10];
int main()
{
    fin>>n;
    aux=n;
    while(aux){
        p*=10;
        aux/=10;
    }
    while(p>1){
        nr = n/p + n%p*s;
        nrdiv = 0;
        for(i=2; i*i <= nr; i++){
            if(nr%i == 0){
                if(nr/i == i)
                    nrdiv++;
                else
                    nrdiv+=2;
                if(nr/i > divmax){
                    divmax = nr/i;
                }
            }
        }
        if(nrdiv > nrdivmax){
            l = 1;
            v[1] = nr;
            nrdivmax = nrdiv;
        }
        else if(nrdiv == nrdivmax){
            l++;
            v[l]=nr;
        }
        p/=10;
        s*=10;
    }
    for(i=1; i<=l; i++){
        fout<<v[i]<<" ";
    }
    fout<<'\n'<<divmax;
    return 0;
}
