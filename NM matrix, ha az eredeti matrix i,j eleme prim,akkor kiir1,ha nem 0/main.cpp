#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int n, m, i, j, o;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n;
    in >> m;
    int v[n][m];
    for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        in >> v[i][j];
        bool prim=true;
        for(o=2; o<v[i][j]/2+1; o++){
            if(v[i][j]%o==0){
                prim = false;
            }
            }
              if(prim==true){
             out << 1 << " ";
             }else{
             out << 0 << " ";
        }
        }
        out << endl;
        }

    return 0;
}
