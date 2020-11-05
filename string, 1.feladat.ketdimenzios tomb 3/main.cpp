#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int n, i, j;
    in >> n;
    string szavak[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            in >> szavak[i][j];
if (i < j) {
                transform(szavak[i][j].begin(), szavak[i][j].begin()+2, szavak[i][j].begin(), ::toupper);
            }

            if (i > j){
                transform(szavak[i][j].end()-2, szavak[i][j].end(), szavak[i][j].end()-2, ::toupper);
            }
        }
    }
for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << szavak[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
