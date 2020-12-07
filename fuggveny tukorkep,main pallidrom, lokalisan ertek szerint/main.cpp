#include <iostream>
using namespace std;
int tukorkep(int a){
    int d = 0;
    while(a>0){
        d = d*10 + a%10;
        a = a/10;
    }
    return d;
}
int main()
{
   int a = 151;
    if (a==tukorkep(a)) {
        cout << "pallindrom";
    } else {
        cout << "nem pallindrom";
    }
    return 0;
}
