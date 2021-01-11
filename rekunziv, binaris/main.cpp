#include <iostream>

using namespace std;

int binaris(int v[], int balindex, int jobbindex, int szam)
{
    if (balindex <= jobbindex)
    {
        int kozep = (balindex + jobbindex) / 2;
        if (v[kozep] == szam)
        {
            return kozep;
        }
        if (v[kozep] > szam)
        {
            return binaris(v, balindex, kozep-1, szam);
        }

        if (v[kozep] < szam)
        {
            return binaris(v, kozep+1, jobbindex, szam);
        }
    }
    return -1;
}
int main()
{
    int v[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};

    cout << binaris(v, 0, 10, 4) << endl;
    return 0;
}
