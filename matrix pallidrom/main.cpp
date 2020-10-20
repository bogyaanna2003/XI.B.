#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N, M, i, j, o, b, c, d;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> N;
    in >> M;
    int v[N][M];
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
        in >> v[i][j];
            b=v[i][j];
            d=0;
            while(b>0){
                c=b%10;
                b=b/10;
                d=d*10+c;

            }
            if(v[i][j]==d){
                out << 1 << " ";
            } else {
                out << 0 << " "; }
        }
        out << endl;
    }



    return 0;
}
