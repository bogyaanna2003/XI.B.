#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define n 1000
using namespace std;

int v[n];
int normal(){
int normal=v[0];
for(int i=1;i<n;i++){
    if(normal<v[i]){
        normal=v[i];
    }

}
return normal;
}
int max(int balindex, int jobbindex)
{
    int balmax, jobbmax, kozep;
    if (balindex==jobbindex) return v[jobbindex];

    kozep = (balindex+jobbindex)/2;
    balmax = max(balindex, kozep);
    jobbmax = max(kozep+1, jobbindex);
    if  (balmax>jobbmax)
    {
        return balmax;
    }

    return jobbmax;

}

int main()
{
    srand(0);
     int v[n];
for(int i = 0; i<n; i++){

v[i]=rand()%10000;
}
normal();
    max(0, n);
    return 0;
}
