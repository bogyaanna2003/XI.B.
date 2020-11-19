#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string str, str1;
    cout << "Kerem a mondatot:"<< endl;
    getline(cin, str);
    istringstream iss(str);
    while(iss >> str1) {
        cout << str1 << endl;
    }
    return 0;
}
