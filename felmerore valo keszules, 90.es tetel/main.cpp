#include <iostream>

using namespace std;

int main()
{

    int i,j,sz1=0,sz2=0,n;
    double m1 ,m2;
    cout << "n=";
    cin >> n;
    int v[n][n];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
     for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            if(i>j && v[i][j]>0){
                m2=m2+v[i][j];
                sz2++;
            }
            if(i<j && v[i][j]>0){
                m1=m1+v[i][j];
                sz1++;
            }
        }
    }
    m1=m1/sz1;
    m2=m2/sz2;
    cout << m1 << " " << m2 << endl;
    cout << m1-m2 << endl;
    return 0;
}
