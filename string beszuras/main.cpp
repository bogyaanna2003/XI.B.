#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("alma"), str1("fa");
    str.insert(4, str1);
    cout << str << endl;

    str = "alma";
    str1 = "fas liget";
    str.insert(4, str1, 2);
    cout << str << endl;

    str = "alma";
    str1 = "fas liget";
    str.insert(4, str1, 0, 2);
    cout << str << endl;

    return 0;
}
