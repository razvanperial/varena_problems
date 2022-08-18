#include <bits/stdc++.h>

using namespace std;
ifstream fin("sumad
             iv.in");
ofstream fout("sumadiv.out");
int sumd(int n, int d){
    if(n==d*d)
        return d;
    else if (d*d>n)
        return 0;
    else if (n%d==0){
        return sumd(n,d+1)+d+n/d;
    }
    else
        return sumd(n,d+1);
}
int main()
{
    int n;
    fin>>n;
    fout<<sumd(n,1);
    return 0;
}
