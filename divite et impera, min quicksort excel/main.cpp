#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define n 100
using namespace std;

int v[n];
int normal(){
int normal=v[0];
for(int i=1;i<n;i++){
    if(normal>v[i]){
        normal=v[i];
    }

}
return normal;
}

int min(int balindex, int jobbindex)
{
    int balmin, jobbmin, kozep;
    if (balindex==jobbindex) return v[jobbindex];

    kozep = (balindex+jobbindex)/2;
    balmin = min(balindex, kozep);
    jobbmin = min(kozep+1, jobbindex);
    if  (balmin<jobbmin)
    {
        return balmin;
    }

    return jobbmin;

}
int main()
{
    srand(0);
    int v[n];
for(int i = 0; i<n; i++){

v[i]=rand()%10000;
}
 //cout<< normal();
    cout << min(0, n);

    return 0;}

