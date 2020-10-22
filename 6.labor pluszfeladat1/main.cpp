#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout << "n = ";
    cin >> n;
    int v[n], a[n][n];
    for(i=0; i<n; i++)
    {
        cout << "v[" << i << "]= ";
        cin >> v[i];
    }
for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j%2!=0)
            {
                a[i][j] = v[i];
            }
            if(j%2==0)
            {
                a[i][j] = v[n-i-1];
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
