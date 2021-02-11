#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct filmek{
    string cim;
    int kiadasiev;
    string rendezo;
    string foszereplo;
    double ertekeles;
};
int main()
{
    struct filmek film[100];
    ifstream in("film.txt");
    for(int i=0;i<10;i++){
        in>>film[i].cim;
        in>>film[i].kiadasiev;
        in>>film[i].rendezo;
        in>>film[i].foszereplo;
        in>>film[i].ertekeles;
        }
        for(int i=0; i<9; i++){
            for(int j=i+1; j<10; j++){
                if(film[i].ertekeles<film[j].ertekeles){
                   swap(film[i].ertekeles,film[j].ertekeles);
                   swap(film[i].cim,film[j].cim);
                }
            }

        }
        for(int i=0; i<10; i++){
            cout<<film[i].cim<<endl;

        }
    return 0;
}
