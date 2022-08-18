#include <bits/stdc++.h>

using namespace std;
ifstream fin("atlantis.in");
ofstream fout("atlantis.out");
int n,c,x,k,i,ans=0;
int v[100010];
int w[100010];
int a[100010];
int main()
{
    fin>>c>>n>>k;
    if(c==1) {

        for(i=1;i<=n;i++) {
            fin>>v[i];
            if(v[i]<k)
                ans++;
        }

        fout<<ans;

    } else if (c==2) {
        for(i=1;i<=n;i++) {
            fin>>v[i];
            w[v[i]]=i;
            cout<<v[i]<<" "<<w[v[i]]<<'\n';
        }
        sort(v+1, v+n+1);
        for(i=1;i<=n;i++) {
            fout<<w[v[i]]<<" ";
        }
    } else {
         for(i=1;i<=n;i++) {
            fin>>v[i];
            a[i]=v[i];
        }
        sort(v+1, v+n+1);
        for(i=1;i<=n;i++){
            w[v[i]]=i;
        }
        for(i=1;i<=n;i++){
            fout<<w[a[i]]<<" ";
        }

    }
    return 0;
}
