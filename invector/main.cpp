#include <bits/stdc++.h>

using namespace std;
ifstream fin("invector.in");
ofstream fout("invector.out");
int v[100005],n,i;
void inv(int primul, int ultimul, int v[]){
    if(primul>=ultimul)
        return;
    else{
        swap(v[primul], v[ultimul]);
        inv(primul+1, ultimul-1, v);
    }
}
int main()
{
    fin>>n;
    for(i=0;i<n;i++){
        fin>>v[i];
    }
    inv(0,n-1,v);
    for(i=0;i<n;i++)
        fout<<v[i]<<" ";
    return 0;
}
