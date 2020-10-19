#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int  c, n, i, j, E=0, K=0, D=0, NY=0;
    ifstream in("input.txt");
    in >> n;
    int m[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> m[i][j];
            if(i<j && i+j < n-1)
            {
                E = E + m[i][j];
            }
            if(i<j && i+j > n-1)
            {
                K = K + m[i][j];
            }
            if(i>j && i+j > n-1)
            {
                D = D + m[i][j];
            }
            if(i>j && i+j < n-1)
            {
                NY = NY + m[i][j];
            }
        }
        }
        while(E!=D){
            if(E>D){
               E=E-D;
               }else{
               D=D-E;
               }
               }
               c= K*NY;
       while(K!=NY){
            if(K>NY){
               K=K-NY;
               }else{
               NY=NY-K;
               }
               }

    cout << "E es D haromszogek osszegenek lnkoja=" << E << endl;
    cout << "K es NY haromszogek osszegenek lkktje=" << c/K << endl;
    return 0;
}
