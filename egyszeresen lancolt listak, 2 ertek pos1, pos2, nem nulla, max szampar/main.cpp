#include<iostream>
#include<climits>

using namespace std;

struct lista
{
    int pos1;
    int pos2;
    lista * kov;
};
int main()
{
    lista * mutato = NULL;
    int szam1, szam2;
    do
    {
        lista * ujelem = new lista;
        cout << "szam1 = ";
        cin >> szam1;
        cout << "szam2 = ";
        cin >> szam2;
        cout << endl;
        ujelem->pos1 = szam1;
        ujelem->pos2 = szam2;
        ujelem->kov  = mutato;
        mutato = ujelem;
    }while(szam1 != 0 || szam2 != 0);
 int maxosszeg = INT_MIN, legnagyobb1, legnagyobb2;
    while(mutato)
    {
        int osszeg = mutato->pos1 + mutato->pos2;
        if(maxosszeg < osszeg){
            maxosszeg = osszeg;
            legnagyobb1 = mutato->pos1;
            legnagyobb2 = mutato->pos2;
        }
        mutato = mutato->kov;
    }
    cout << endl << "legnagyobb szampar: " << legnagyobb1 << " " << legnagyobb2;
    return 0;
}
