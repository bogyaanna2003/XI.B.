#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string str, str_transform, str_aux, str_final;
    cout << "A szoveg";
    getline(cin, str);
    istringstream iss(str);
    while(iss >> str_transform)
{
        if (str_transform.size() >= 3)
        {
            str_aux.append(str_transform, 1, str_transform.size()-1);
            str_aux.append(str_transform, 0, 1);
            str_final.append(" ");
            str_final.append(str_aux);
            str_aux = "";
        }
        else
        {
            str_final.append(str_transform);
        }
    }
    cout << str_final;

    return 0;
}
