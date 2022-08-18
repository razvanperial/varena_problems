#include <bits/stdc++.h>

using namespace std;
ifstream fin("minute1.in");
ofstream fout("minute1.out");
long long h1,m1,h2,m2,t,hans,mans,i;
int main()
{
    fin>>h1>>m1>>h2>>m2;
    t=h2*60+m2;
    hans=h1;
    mans=m1;
    for(i=1;i<=t;i++){
        if(hans == 13)
            hans=1;
        if(mans==hans*5)
            i+=5;
        if (mans == 60){
            mans=0;
            hans++;
        }
        mans++;
    }
    fout<<hans<<" "<<mans;
    return 0;
}
