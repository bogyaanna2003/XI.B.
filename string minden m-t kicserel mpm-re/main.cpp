#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cout << "kerem a beolvasando stringet ";
    getline(cin, s1);
    size_t hely;
    //megkeresi az elso helyet, ahol az "a" karakter elofordul
    hely = s1.find("m");
    //ciklusosan ismeteljuk a fenti utasitasokat,
    //vigyazva arra, hogy mindig a mar talalt hely utan keressuk a keresendo karaktert
    while(hely!=string::npos)
    {
        s1.replace(hely, 1, "mpm");
        hely = s1.find("m"
        hely = s1.find("m", hely+3);
    }
    cout << s1 << endl;
    return 0;
}
