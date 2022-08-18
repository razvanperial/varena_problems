#include <bits/stdc++.h>

using namespace std;
ifstream fin("hanoi.in");
ofstream fout("hanoi.out");
int n,sparePeg,toPeg,auxPeg,numDisks;

void solveHanoi(int numDisks, int fromPeg, int toPeg, int auxPeg){
    if(numDisks == 1){
        fout<<1<<" "<<fromPeg<<" "<<toPeg<<'\n';
        return;
    }
    solveHanoi(numDisks-1, fromPeg, auxPeg, toPeg);
    fout<<numDisks<<" "<<fromPeg<<" "<<toPeg<<'\n';
    solveHanoi(numDisks-1, auxPeg, toPeg, fromPeg);

}
int main()
{   fin>>numDisks;
    solveHanoi(numDisks, 1, 2, 3);
    return 0;
}
