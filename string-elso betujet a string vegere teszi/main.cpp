#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, str1;
    cout << "kerem a szoveget:";
    getline(cin,str);
    str1.append(str,1,str.size());
    str1.append(str,0,1);
    cout << str1;
    return 0;
}
