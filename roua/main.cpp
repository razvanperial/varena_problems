#include <bits/stdc++.h>

using namespace std;
ifstream fin("roua.in");
ofstream fout("roua.out");
long long c,n,r,ans,i,j,x;
bool ok,ok2;
char s[10005];
int v[200];
int main()
{
    fin>>c>>n>>r;
    if(c==1){
        fin>>s;
        ans = 0;
        for(i=0; i<=strlen(s)-r; i++){
            cout<<s[i]<<" ";
            v[1] = 0;
            ok=true;
            ok2=false;
            for(j=i; j<i+r && ok; j++){
                x=s[j];
                if(x!=114)
                {
                    v[1]++;
                    ok2=true;
                    if(v[1]>1)
                        ok = false;
                }
            }
            if(ok && ok2)
                ans++;
        }
        fout<<ans;
    }
    else{
        ans = 0;
        long long p = 1;
        while(p <= r){
            long long aux = ((n-p)/r + 1);
            long long c = 1;
            while(aux--){
                c *= 3;
            }
            ans += c;
            p++;
        }
        fout<<ans;
    }
    return 0;
}
