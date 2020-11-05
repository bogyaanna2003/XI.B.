#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream vez("vezetekes.txt");
    ofstream vodafone("vodafone.txt");
    ofstream orange("orange.txt");
    ofstream digi("digi.txt");
    string szam;
    string mobil = "00407";
    string vezetekes = "0040260";
    while(in >> szam)
    {
        if (szam.size() < 7)
        {
            szam.insert(0, vezetekes);
            vez << szam << endl;}
        else
        {
            szam.insert(0, mobil);
            if (szam[5] == '2')
            {
                vodafone << szam << endl;
            }
            if (szam[5] == '4')
            {
                orange << szam << endl;
            }
            if (szam[5] == '7')
            {
                digi << szam << endl;
            }
        }
    }

return 0;

}
