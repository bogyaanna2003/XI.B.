#include <iostream>
using namespace std;

int negyzet(int x, int n){
    if (n==0){
    return 1;
    }
    return x*negyzet(x, n-1);
    }
int main()
{
    cout << negyzet(3, 3) << endl;
    return 0;
}
