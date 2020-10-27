#include <iostream>

using namespace std;

int main()
{
   string str;
   cout << "a szoveg=";
   getline(cin,str);
   cout << "a beolvasott 0. karaktere=" << endl << str[0];
   return 0;
}
