#include <iostream>
#include <fstream>
using namespace std;
//N * N es mátrix
//kiszámolni és kiírni a fő, illetve a mellékátlón levő elemek összegét
int main()
{
    int n,sor, oszlop, S=0,P=0;
    ifstream input("input.txt");
    input>>n;
    int m[n][n];
    for(sor=0; sor <n; sor++)
    {
        for(oszlop=0; oszlop<n; oszlop++)
        {
            input>>m[sor][oszlop];
            if(sor==oszlop)
            {
                S=S+m[sor][oszlop];
            }
 if(sor+oszlop==n-1)
            {
                P=P+m[sor][oszlop];
            }
        }
    }
    cout<<"foatlo osszeg="<<S<<endl;
    cout<<"mellekatlo osszeg="<<P<<endl;

    return 0;
}
