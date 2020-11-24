#include <iostream>

using namespace std;

bool tokeletes(int szam){
    int S = 0;
    for(int i = 1; i<szam/2+1; i++){
        if (szam%i == 0){
            S+=i;
        }
    }
    if (szam == S){
        return true;
    }
    return false;
}
int main()
{

    cout << "a 6 tokeletes szam? " << tokeletes(6) << endl;
    cout << "a 8 tokeletes szam? " << tokeletes(8) << endl;
    int x = 10;
    cout << "a 10 tokeletes szam? " << tokeletes(x) << endl;
    cout << "a 28 tokeletes szam? " << tokeletes(28) << endl;
    return 0;
}
