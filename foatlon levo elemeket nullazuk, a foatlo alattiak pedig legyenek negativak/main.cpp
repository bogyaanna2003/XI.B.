#include <iostream>

using namespace std;

int main()
{
    int sor, oszlop;
    int N, m[100][100];
    cout << "Kerem a matrix meretet:";
    cin >> N;
    for(sor=0; sor<N; sor++){
        for(oszlop = 0; oszlop < N; oszlop++){
            cout<< "m[" << sor << "][" << oszlop << "]=";
            cin >> m[sor][oszlop];
            if(sor>oszlop){
                 m[sor][oszlop]=- m[sor][oszlop];
            }
            if(sor==oszlop){
                m[sor][oszlop]=0;
            }

        }
    }
    for(sor=0; sor<N; sor++){
        for(oszlop = 0; oszlop < N; oszlop++){
            cout << m[sor][oszlop] << " ";
        }
        cout << endl;


        }


    return 0;
}
