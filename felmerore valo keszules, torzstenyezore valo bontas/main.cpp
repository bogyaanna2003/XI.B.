#include <iostream>

using namespace std;
int minDivPrim(int n){
    int oszto;
    int szam = 1;
    for(oszto=2; oszto<=n; oszto++){
        if (n%oszto == 0) {
            szam = szam*oszto;
        }
        while (n%oszto == 0) {
            n = n / oszto;

        }
    }
    return szam;

}
int main()
{
cout<< minDivPrim(124)<<endl;
    return 0;
}
