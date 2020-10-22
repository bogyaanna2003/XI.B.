#include<iostream>
using namespace std;
int main()
{
    int i, j,n, m1[10][10], m2[10][10], sum[10][10], mul[10][10],k;
    cout<<"n=";
    cin>>n;

    for ( i = 0; i<n; i++ )
    {
        for ( j = 0; j < n; j++ )
        {   cout<<"m1["<<i<<"]["<<j<<"]=";
            cin>>m1[i][j];
        }
    }

    for ( i = 0; i<n; i++ )
    {
        for ( j = 0; j<n; j++ )
        { cout<<"m2["<<i<<"]["<<j<<"]=";
            cin>>m2[i][j];
        }
    }
    cout<<"A+B = " << endl;
    for ( i = 0; i<n; i++ )
    {
        for ( j = 0; j<n; j++ )
        {
            sum[i][j]=m1[i][j]+m2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"A*B = " << endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            mul[i][j]=0;
            for(k=0; k<n; k++)
            {
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
                 cout<<mul[i][j]<<" ";
            }
            cout<<endl;
    }

    return 0;
}
