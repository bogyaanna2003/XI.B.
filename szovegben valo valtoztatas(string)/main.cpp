#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "A szoveg: ";
    //cin >> str;
    getline(cin, str);
    str[0] = 'x';
    cout << "A beolvasott szoveg :" << endl << str;
    return 0;
}
