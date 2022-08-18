#include <bits/stdc++.h>

using namespace std;
ifstream fin("cod.in");
ofstream fout("cod.out");
char c,s[1000005];
int p,n,i,i1,i2,k=0,j,l,nr,sumc,ok,knum=1;
long long sum;
int main()
{
    fin>>p>>n;
    if(p == 1){
        while(fin>>c){
            i=0;
            sum=0;
            if(knum<n){
                knum++;
                i=0;
                s[i]=c;
                while(s[i]!='#'){
                    sum+=s[i]-48;
                    i++;
                    fin>>s[i];
                }
                s[i]='\0';
            }
            else{
                i=1;
                s[0]=c;
                sum+=s[0]-48;
                while(fin>>s[i]){
                    sum+=s[i]-48;
                    i++;
                }
                s[i]='\0';
            }
            if(s[i-1]!= '5' && sum%3!=0 && s[i-1]%2==1){
                sumc = 0;
                ok=1;
                for(j=strlen(s)-1;j>=0;j--){
                    if(j-2>=0){
                        nr=0;
                        for(l=j-2; l<=j; l++){
                            nr = nr*10 + (s[l]-48);
                        }
                        j-=2;
                        if(ok){
                            sumc+=nr;
                            ok=0;
                        }
                        else {
                            sumc-=nr;
                            ok=1;
                        }
                    }
                    else break;
                }
                if(j>=0){
                    nr=0;
                    for(l=0; l<=j; l++){
                        nr = nr*10 + (s[l]-48);
                    }
                }
                if(ok)
                    sumc+=nr;
                else
                    sumc-=nr;
                sumc = abs(sumc);
                if(sumc % 7 != 0 && sumc % 11 != 0 && sumc % 13 != 0){
                    k++;
                }
            }
        }
        fout<<k;
    }
    return 0;
}
