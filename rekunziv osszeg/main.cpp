#include <iostream>

using namespace std;

int ossz(int n){
    if(n==0){
        return 0;
    }
    return n+ossz(n-1);
}
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "osszeg = " << ossz(n);
    return 0;
}
