#include <iostream>

using namespace std;

struct diakok
{
    int azonosito;
    double media;
    string nev;
    string osztaly;
};

int main()
{
    struct diakok diak[10];
    for(int i =0; i<6; i++)
    {
        cout << "Az " << i << ". diak neve:";
        cin >> diak[i].nev;
        cout << "Az " << i << ". diak mediaja:";
        cin >> diak[i].media;
        cout << "Az " << i << ". diak azonositoja:";
 cin >> diak[i].azonosito;
    }
    int min = 11; int azonosito = -1;
    for(int i =0; i<6; i++)
    {
        if (diak[i].media < min) {
            min = diak[i].media;
            azonosito = diak[i].azonosito;
        }
    }
    cout << azonosito;


    return 0;
}
