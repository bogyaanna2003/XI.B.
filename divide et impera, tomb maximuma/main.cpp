#include <iostream>
#include <stdlib.h>

using namespace std;
int n=10;
int v[10]={1,2,3,4,5,6,7,8,9,19};
int max(int balindex, int jobbindex){
    int balmax, jobbmax, kozep;
    if (balindex==jobbindex) return v[jobbindex];

    kozep = (balindex+jobbindex)/2;
    balmax = max(balindex, kozep);
    jobbmax = max(kozep+1, jobbindex);
    if  (balmax>jobbmax){
        return balmax;
    }
   return jobbmax;
}
int max(){
int max=v[0];
for(int i=1;i<n;i++){
    if(max<v[i]){
        max=v[i];
    }
}
return max;
}
int main()
{
     cout<<"max="<<max(0,n);
    return 0;
}
