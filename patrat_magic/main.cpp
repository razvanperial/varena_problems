#include <bits/stdc++.h>
using namespace std;
long long n;
void Even4kMagicSquare(int n)
{
    int a[100][100];
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = num;
            num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 4 == 0 && abs(i - j) % 4 == 0)
            {
                for (int k = 0; k < 4; k++)
                {
                    a[i + k][j + k] = abs(n*n + 1 - a[i + k][j + k]);
                }
            }
            if (i % 4 == 3 && (i + j) % 4 == 3)
            {
                for (int k = 0; k < 4; k++)
                {
                    a[i - k][j + k] = abs(n*n + 1 - a[i - k][j + k]);
                }
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}

int main()
{   cin>>n;
    Even4kMagicSquare(n);
    return 0;
}
