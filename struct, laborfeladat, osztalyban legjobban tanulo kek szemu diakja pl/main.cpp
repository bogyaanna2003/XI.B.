#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct osztaly
{
    string nev;
    int magyar;
    int roman;
    int matek;
    int fizika;
    string szemszin;
    int eletkor;
};

int main()
{
    int i,j;
    ifstream nev("nev.txt");
    ifstream szem("szemszin.txt");
    ifstream magyar("magyar.txt");
    ifstream roman("roman.txt");
    ifstream matek("matek.txt");
    ifstream fizika("fizika.txt");
    ifstream eletkor("eletkor.txt");
    struct osztaly diak[100];
    for(i =1; i<=29; i++){
        getline (nev,diak[i].nev);
        getline (szem ,diak[i].szemszin);
    }
    int atlag[100];
    for(i=1; i<=29; i++){
        magyar >> diak[i].magyar;
        roman>> diak[i].roman;
        matek>> diak[i].matek;
        fizika>> diak[i].fizika;
        eletkor>> diak[i].eletkor;
    }
    for(i=1; i<=29; i++){
        atlag[i]= (diak[i].magyar+diak[i].roman+diak[i].matek+diak[i].fizika)/4;
    }
    for(i=1; i<=28; i++){
        for(j=i+1; j<=29; j++){
            if(atlag[i] < atlag[j] ){
                swap(atlag[i],atlag[j]);
                swap(diak[i].nev, diak[j].nev);
                swap(diak[i].fizika, diak[j].fizika);
            }
        }
    }
    cout << diak[1].nev <<"    "<<diak[1].fizika;
    cout<<endl;
    for(i=1; i<=28; i++){
        for(j=i+1; j<=29; j++){
            if(diak[i].eletkor > diak[j].eletkor){
                swap(diak[i].eletkor, diak[j].eletkor);
                swap(diak[i].nev, diak[j].nev);
                swap(diak[i].szemszin, diak[j].szemszin);
                swap(diak[i].magyar, diak[j].magyar);
            }
        }
    }
    cout << diak[1].nev <<"    "<<diak[1].szemszin<<"     "<<diak[1].magyar;
    cout<<endl;
    for(i=1; i<=28; i++){
        for(j=i+1; j<=29; j++){
            if(diak[i].magyar < diak[j].magyar){
                swap(diak[i].magyar, diak[j].magyar);
                swap(diak[i].szemszin, diak[j].szemszin);
                swap(diak[i].eletkor, diak[j].eletkor);
            }
        }
    }
    cout << diak[1].eletkor <<"    "<<diak[1].szemszin;
    return 0;
}
