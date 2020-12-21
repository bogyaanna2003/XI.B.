#include <iostream>
using namespace std;
int forditott(int szam, int ujszam){
    if (szam == 0) {return ujszam;}
    ujszam = ujszam*10 + szam%10;
    return forditott(szam/10, ujszam);
}
int main(){
    int x = 0;
    cout << "kerem a szamot:";
    cin >> x;
    if (x == forditott(x, 0)) {
        cout << "pallindrom";
    } else {
        cout << "nem pallindrom";
    }
    //cout << forditott(2021, 0) << endl;
    return 0;
}
