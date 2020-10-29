#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("fenyo"), str1("erdo");
    str.append(str1);
    cout << str << endl;
    string str3 = "luc";
    str3.append(str, 0, 5);
    cout << str3 << endl;
    str3.append(str, 5);
    cout << str3 << endl;
    return 0;
}
