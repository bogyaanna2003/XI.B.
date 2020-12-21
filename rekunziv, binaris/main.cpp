#include <iostream>

using namespace std;
int binaris(int t[], int bal, int jobb, int keres){
    if (bal==jobb){
        if(t[bal]==keres){
        return bal;
        }
        return -1;
    }
    int kozep=(bal+jobb)/2;
    if (t[kozep]<keres){return binaris(t, kozep+1, jobb, keres);
    }
    if(t[kozep]==keres){
    return kozep;
    }
    return binaris(t, bal, kozep-1, keres);
}
int main()
{
    int t[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<binaris(t, 0, 9, 3);
    return 0;
}
