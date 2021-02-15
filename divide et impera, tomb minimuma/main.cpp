#include <iostream>
#include <stdlib.h>

using namespace std;
int n=10;
int v[10]={70,2,3,4,5,6,7,8,9,19};
int min(int balindex, int jobbindex){
    int balmin, jobbmin, kozep;
    if (balindex==jobbindex) return v[jobbindex];

    kozep = (balindex+jobbindex)/2;
    balmin = min(balindex, kozep);
    jobbmin = min(kozep+1, jobbindex);
    if  (balmin>jobbmin){
        return jobbmin;
    }
   return balmin;
}
int main()
{
     cout<<"min="<<min(0,9);
    return 0;
}
