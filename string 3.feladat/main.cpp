#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str, str1;
   cout << "kerem a szoveget:";
   getline(cin,str);
   cout << "kerem a szoveget:";
   getline(cin,str1);
   size_t found=str1.find(" ");
   str.append(str1,0,found);
   cout << str << endl;
    return 0;
}
