#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    bool tukor = false;
    string str, str1, str_aux, str_final = "";
    cout << "Kerem a szoveget" << endl;
    getline(cin, str);
    istringstream szoveg(str);
    while (szoveg >> str1)
    {
        str_aux = str1;
        if (str_aux.size()%2 > 0)
        {
for(int i = 0; i< str1.size(); i++)
            {
                str_aux[i] = str1[str1.size()-1-i];
            }
            if (str_aux != str1)
            {
                tukor = true;
            }
            if (str_final.size() > 0)
            {
                str_final.append(" ");
            }
            str_final.append(str_aux);
        }
else
        {
            if (str_final.size() > 0)
            {
                str_final.append(" ");
            }
            str_final.append(str1);
        }
    }
    if (tukor)
    {
        cout << str_final;
    }
    else
    {
        cout << "nu exista";
    }
    return 0;
}
