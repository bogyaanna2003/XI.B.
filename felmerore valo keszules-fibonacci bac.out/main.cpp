#include <iostream>
#include <fstream>

using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return -1;
    }
    return 1 - 2*f(n-1) - f(n-2);
}

int main()
{
    int n;
    ofstream out("bac.out");
    cout << "n = ";
    cin >> n;
    while(n>0){
        out << f(n) << " ";
        n--;
    }
    return 0;
}
