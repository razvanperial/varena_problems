#include <bits/stdc++.h>

using namespace std;
ifstream in("siruri_concatenate.in");
ofstream out("siruri_concatenate.out");
int main()
{
    char s[5005];
    int n,k=0,i;
    bool ok;
    in>>n;
    while(n--){
        in>>s;
        ok=true;
        if(strlen(s)%2==0){
            for(i=0; i<=strlen(s)/2-1 && ok; i++){
                if(s[i]!=s[i+strlen(s)/2])
                    ok=false;
            }
        if(ok)
            k++;

        }
    }
    out<<k;
    return 0;
}
