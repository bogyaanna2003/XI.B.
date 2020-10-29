#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("fenyofa es lombhullato fa"), str1("fa");
    size_t found = str.find(str1);
    cout << found << endl;
    found = str.find(str1, found+1);
    cout << found << endl;
  //megszamolni az osszes elofirdulasat a fa szonak
    str = "Az erdot fenyofa, tolgyfa, bukkfa, egyeb lombhullato fa,";
    str = str + "koztuk nehany gyumolcsfa is alkotta";
    found = str.find(str1);
    int szamlalo = 0;
    while(found!=string::npos){
        szamlalo++;
        found = str.find(str1, found+1);
    }
    cout << "A fa szo a szovegben "<<szamlalo << " szer szerepel" <<endl;
    return 0;
}
