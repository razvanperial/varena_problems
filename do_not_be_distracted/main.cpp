#include <bits/stdc++.h>

using namespace std;
char s[55];
long long n,t,x,i,k=0;
int v[100];
bool ok;
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        fill(v+1,v+100,0);
        cin>>s;
        ok=true;
        for(i=0;i<n && ok;i++){
            x=s[i];
            if(v[x]==0){
                v[x]=1;
                while(s[i]==x)
                    i++;
                i--;
            }
            else{
                ok=false;
            }
        }
        if(!ok)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    return 0;
}
