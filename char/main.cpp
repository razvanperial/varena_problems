#include <bits/stdc++.h>

using namespace std;
ifstream fin("char.in");
ofstream fout("char.out");
int n,nrcif,p[123],i,x,val,pmax=0,sum=0,v[105],j,inc=0,pmin=INT_MAX,ans=0,uf,fnl;
char s[10005];
bool ok1=true,ok;
int main()
{
    fin>>n>>s>>nrcif;
    for(i=0; i<strlen(s); i++){
        x=s[i];
        p[x]++;
    }
    for(i=97; i<=122; i++){
        if(p[i]){
            fin>>x;
            v[x]++;
            if(x>pmax){
                val=p[i];
                pmax=x;
            }
            if(x<pmin)
                pmin=x;
            p[i]=x;
        }
    }
    uf=-pmin;
    ok=false;
    for(i=pmin; i<strlen(s); i+=0){
        cout<<i<<" ";
        if(i==strlen(s)-1)
            fnl=strlen(s)-1;
        else
            fnl=i-pmin;
        cout<<fnl<<'\n';
        for(j=inc; j<=fnl; j++){
            if(j-p[s[j]]>=uf && j+p[s[j]]==i){
                cout<<j<<'\n';
                inc+=pmin*2+1;
                uf=j+p[s[j]];
                ans++;
                cout<<uf<<" "<<inc<<'\n';
                ok=true;
                break;
            }
        }
        cout<<'\n';
        if(ok){
            if(i+pmin*2+1>=strlen(s)){
                if(ok1){
                    i=strlen(s)-1;
                    ok1=false;
                }
                else
                    i=strlen(s);
            }
            else
                i+=pmin*2+1;
        }
        else{
            i++;
        }
    }
    fout<<val<<'\n'<<ans;
    return 0;
}
