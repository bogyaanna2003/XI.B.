#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int  c, n, i, j, S=0, P=0;
    ifstream in("input.txt");
    in >> n;
    int m[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in >> m[i][j];
            if(i<j){
                S = S + m[i][j];
            }
            if(i>j){
                P = P + m[i][j];
            }
        }
        }
            c= S*P;
            while(S!=P){
            if(S>P){
               S=S-P;
               }else{
               P=P-S;
               }
               }

    cout << "a foatlo alatti es a foatlo folotti elemek osszegenek lkktje=" << c/S << endl;
    return 0;
}
