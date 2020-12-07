#include <iostream>
using namespace std;
int tukorkep(int &a){
    int d = 0;
    int b=a;
    while(b>0){
        d = d*10 + b%10;
        b = b/10;
    }
    return d;
}
int main()
{
   int a = 251;
    if (a==tukorkep(a)) {
        cout << "pallindrom";
    } else {
        cout << "nem pallindrom";
    }
    return 0;
}
