#include <iostream>

using namespace std;
int binary(int v[], int balindex, int jobbindex, int keres){
    int tampont = (balindex + jobbindex) / 2;
    if (v[tampont] == keres) {
        return tampont;
    }
    if (balindex >= jobbindex) {
        return -1;
    }

    if (keres < v[tampont]) {
        return binary(v, balindex, tampont-1, keres);
    } else {
        return binary(v, tampont+1, jobbindex, keres);
    }
}
int main()
{
int v[10]={1,2,3,4,6,8,9,10,11,12};
cout<<binary(v,0,9,12)<<endl;
    return 0;
}
