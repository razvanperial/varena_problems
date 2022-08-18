#include <bits/stdc++.h>

using namespace std;
ifstream fin("circular2.in");
ofstream fout("circular2.out");
int main()
{
    int n,i,j,ok=0,l;
    char s[20005],d[20005];
    fin>>n>>s>>d;
    for(l=0; l<n && ok==0; l++)
    {
        cout<<l<<'\n';
        i=l;
        j=0;
        while(s[i]==d[j] && i<n)
        {
            j++;
            i++;
        }
        if(i==n && s[i-1]==d[j-1])
        {
            if(l==0)
            {
                ok=1;
                fout<<0;
            }
            else
            {
                i=0;
                while(s[i]==d[j])
                {
                    i++;
                    j++;
                }
                if(j==n && s[i-1]==d[j-1])
                {
                    ok=1;
                    fout<<l;
                }
            }
        }
    }
    if(!ok)
        fout<<-1;
    return 0;
}
