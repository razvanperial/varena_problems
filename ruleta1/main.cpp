#include <bits/stdc++.h>
using namespace std;
ifstream fin("ruleta1.in");
ofstream fout("ruleta1.out");
long long n,i,p=0,k=0;
long long v[10005];
bool ok=false;
int main()
{   fin>>n;
    for(i=1;i<=n;i++){
        fin>>v[i];
    }
    for(i=1;i<=n;i++){
        if(i==n){
            p++;
            if(v[i]<=v[1] && v[1] && v[i]){
                ok=true;
                v[1]-=v[i];
            }
            if(ok){
                ok=false;
                i=0;
            }
            else{
                break;
            }
        }
        else{
            if(v[i]<=v[i+1] && v[i] && v[i+1]){
                v[i+1]-=v[i];
                ok=true;
            }
        }
    }
    for(i=1;i<=n;i++)
        if(v[i]){
            k++;
        }
    fout<<p<<" "<<k;
    return 0;
}
