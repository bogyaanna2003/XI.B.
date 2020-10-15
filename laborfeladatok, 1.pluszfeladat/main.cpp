#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    int n;
    fin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> a[i][j];

        }
    }
int b;
    b=a[0][0];
    bool c;
    for(int z=n; z>0; z--)
    {
        c=true;
        for(int i=z-1; i>0; i--)
        {
            for(int j=z-1; j>0; j--)
            {
                if(a[i][j]!=b)
                {
                    c=false;
                    break;
                }
            }
            if (c == false)
            {
                break;
            }
        }
if(c==true)
        {
                cout << z;
                break;
        }

    }
    return 0;
}
