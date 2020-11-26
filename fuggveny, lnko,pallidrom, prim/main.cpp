#include <iostream>


using namespace std;

bool prim(int szam){
    for(int oszto=2; oszto<szam/2+1; oszto++){
        if (szam%oszto == 0) {
            return false;
        }
    }
    return true;
}

bool pallindrom(int szam){
    int tukor = szam, ujszam = 0;
    while(tukor > 0) {
        ujszam= ujszam*10 + tukor%10;
        tukor /= 10;
    }
    return (ujszam == szam);
}

int lnko(int szam1, int szam2){
    while(szam1 != szam2) {
        if (szam1> szam2){
            szam1-=szam2;
        } else {
            szam2-=szam1;
        }
    }
}
int main()
{

    int x=5;
    while(x!=0)
    {
        cout << "Menu" << endl;
        cout << endl;
        cout << "  Mit szeretnel csinalni?" << endl;
        cout << " 1. Megvizsgalni, hogy egy szam prim-e" << endl;
        cout << " 2. Megvizsgalni, hogy egy szam pallindrom-e" << endl;
        cout << " 3. Megkeresni ket szam legnagyobb kozos osztojat" << endl;
        cout << endl;
        cout << " 0. Kilepni" << endl;

        cin >> x;

if (x==1) {
            int szam;
            cout << "Kerem a szamot";
            cin >> szam;
            if (prim(szam)) {
                cout << "a szam prim";
            } else {
                cout << "a szam nem prim";
            }
        }

        if (x == 2) {
        int szam;
            cout << "Kerem a szamot";
            cin >> szam;
            if (pallindrom(szam)) {
                cout << "a szam pallindrom";
            } else {
                cout << "a szam nem pallidrom";}}
if (x==3) {
            int szam1, szam2;
            cout << "Kerem az elso szamot";
            cin >> szam1;
            cout << "Kerem a masodik szamot";
            cin >> szam2;
            cout << "lnko " << lnko(szam1, szam2) << endl;

        }
 cout << endl;

    }


    return 0;
}
