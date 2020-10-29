#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, str1(" ");
    cout << "Kerem a szoveget:";
    getline(cin, str);

    size_t found = str.find(str1);
    int szamlalo = 0;
    while(found!=string::npos){
        szamlalo++;
        found = str.find(str1, found+1);
    }
    cout << "A beolvasott szovegben "<<szamlalo+1 << " db szo szerepel" <<endl;
    return 0;
}
