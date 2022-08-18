#include <bits/stdc++.h>

using namespace std;
ifstream fin("combinari.in");
ofstream fout("combinari.out");
int n,k,c,i,s[20];
void afisare() {
    for(i=1;i<=k;i++){
        fout<<s[i]<<" ";
    }
    fout<<'\n';
}
void comb(int c){
    int i;
    if(c==k+1)
        afisare();
    else{
        for(i=1;i<=n;i++){
            if(i > s[c-1]){
                s[c] = i
                ;
                comb(c+1);
            }
        }
    }
}
int main()
{
    fin>>n>>k;
    comb(1);
    return 0;
}
