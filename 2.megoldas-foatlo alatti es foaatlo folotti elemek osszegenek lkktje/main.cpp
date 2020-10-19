#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i, j, m[100][100], n;
    ifstream in("input.txt");
    in >> n;
    for(i=0; i<n; i++){
         for(j=0; j<n; j++){
             in >> m[i][j];
         }
    }
int Sf=0, Sa = 0;
    for(i=0; i<n; i++){
         for(j=0; j<n; j++){
             if (i<j) {
                 Sf+=m[i][j];
             }
             if (i> j) {
                 Sa+=m[i][j];
             }
         }
    }
 int x= Sa, y = Sf;
    while(x!=y){
        if (x>y){
            x-=y;
        } else {
            y-=x;
        }
    }
    cout << Sa*Sf/x << endl;
    return 0;
}
