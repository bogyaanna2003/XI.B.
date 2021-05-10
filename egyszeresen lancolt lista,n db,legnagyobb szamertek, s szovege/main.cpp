#include<iostream>
#include<climits>

using namespace std;

struct lista
{
    int ertek;
    string szo;
    lista * kov;
};


int main()
{
    lista * mutato = NULL;
    int i, n, szam,szo;
    cout << "n = ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        lista * ujelem = new lista;
        cout << "szam=" ;
        cin >>ujelem->ertek ;

        ujelem->kov  = mutato;
        mutato = ujelem;
        cout << "szo= " ;
        cin >> ujelem->szo;


    }
    int legnagyobb = -INT_MAX;


    string ujszo="";
    while(mutato)
    {
        if(mutato->ertek > legnagyobb)
        {
            legnagyobb = mutato->ertek;
            ujszo=mutato->szo;
        }
        mutato = mutato->kov;
    }
    cout << endl << ujszo;
    return 0;
}
