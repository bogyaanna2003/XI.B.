#include <iostream>

using namespace std;

int main()
{
    int sor, oszlop;
    int n, m[100][100];
    cout << "Kerem a matrix meretet:";
    cin >> n;
    for(sor=0; sor<n; sor++){
        for(oszlop = 0; oszlop < n; oszlop++){
            cout << "m[" << sor << "][" << oszlop << "]="; //m[0][0]
            cin >> m[sor][oszlop];
        }
    }


    for(sor=0; sor<n; sor++){
        for(oszlop = 0; oszlop < n; oszlop++){
            cout << m[sor][oszlop] << " ";
        }
        cout << endl;
    }
    return 0;
}
