#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int n, m, i, j;
    ifstream in("input.txt");
    in >> m;
    in >> n;
    int a[n][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> a[i][j];
        }
    }
bool szimmetrikus = true;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] != a[i][n-j-1])
                szimmetrikus = false;
        }
    }
if(szimmetrikus)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
