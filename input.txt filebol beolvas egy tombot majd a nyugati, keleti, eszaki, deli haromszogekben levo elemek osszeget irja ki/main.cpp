#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m, i, j, E=0, K=0, D=0, NY=0;
    ifstream in("input.txt");
    in >> n;
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> a[i][j];
      if(i<j && i+j < n-1)
            {
                E = E + a[i][j];
            }
            if(i<j && i+j > n-1)
            {
                K = K + a[i][j];
            }
            if(i>j && i+j > n-1)
            {
                D = D + a[i][j];
            }
            if(i>j && i+j < n-1)
            {
                NY = NY + a[i][j];
            }
 }
    }
    cout << "eszaki haromszog elemeinek osszege = " << E << endl;
    cout << "keleti haromszog elemeinek osszege = " << K <<endl;
    cout << "deli haromszog elemeinek osszege = " << D << endl;
    cout << "nyugati haromszog elemeinek osszege = " << NY << endl;


return 0;
}
