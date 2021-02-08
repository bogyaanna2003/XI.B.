#include <iostream>

using namespace std;

 struct diakok{
    int azonosito;
    double media;
    string nev;
    string osztaly;
          };

int main()
{
    struct diakok diak1, diak2, diak3;
    diak1.nev = "Peter";
    diak2.nev = "Alma";
    diak3.nev = "Viktor";
    diak1.media = 9.65;
    diak2.media = 9.5;
    diak3.media = 9.7;
    diak1.azonosito = 1;
    diak2.azonosito = 2;
    diak3.azonosito = 3;

    if (diak1.media >= diak2.media && diak1.media >= diak3.media) {

        cout << diak1.azonosito;
    } else if (diak2.media >= diak3.media )
    {
       cout << diak2.azonosito;
    } else {
       cout << diak3.azonosito;
    }

    return 0;
}
