#include <bits/stdc++.h>

using namespace std;
ifstream in("vanatoare.in");
ofstream out("vanatoare.out");
int main()
{
    long long ka,kb,x1=1,x2=1,r,aux,ok=1;
    in>>ka>>kb;
    r=1;
    while(ok)
    {
        if(ka-x2/2-1>=0 && kb-x2/2>=0)
        {
            if(x2%2)
            {
                ka-=x2/2+1;
                kb-=x2/2;
            }
            else
            {
                ka-=x2/2;
                kb-=x2/2;
            }
            aux=x2;
            x2+=x1;
            x1=aux;
            r++;
        }
        else
            ok=0;
        cout<<ka<<" ";
    }
    r--;
    out<<r<<'\n'<<ka<<'\n'<<kb;
    return 0;
}
