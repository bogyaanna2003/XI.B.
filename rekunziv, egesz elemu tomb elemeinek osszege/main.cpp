#include <iostream>

using namespace std;
int osszeg(int v[], int i, int n){
    if(i>=n){
     return 0;
    }
     return v[i]+osszeg(v, i+1, n);
     }
int main()
{
    int v[5]={1, 2, 3, 4, 5};
    cout<< osszeg(v, 0, 5);
    return 0;
}
