#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("almafa"), str1("s"), str2("teszta");
    str.replace(4, 0, str1);
    cout << str << endl;
    str.replace(5, 2, str2);
    cout << str << endl;
    return 0;
}
