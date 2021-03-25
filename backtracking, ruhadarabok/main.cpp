#include <iostream>
#include <string>

using namespace std;

string ruha[] = {"ing", "nyakkendo", "nadrag", "zako", "zokni", "cipo"};

bool lehet(string felvett[], int n, string ruhadarab){
    for(int i=0; i<n; i++){
        if(felvett[i] == ruhadarab){
            return false;
        }
        if(ruhadarab == "ing" && felvett[i] == "nyakkendo"){
            return false;
        }
        if(ruhadarab == "nyakkendo" && felvett[i] == "zako"){
            return false;
        }
        if((ruhadarab == "zokni" || ruhadarab == "nadrag") && felvett[i] == "cipo"){
            return false;
        }
    }
    return true;
}

void kiir(string felvett[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << felvett[i] << " " ;
    }
    cout << endl;
    return;
}

void backtrack(string felvett[], int n)
{
    if (n == 6)
    {
        kiir(felvett, n);
        return;
    }
    for(int i = 0; i<6; i++)
    {
        if (lehet(felvett, n, ruha[i]))
        {
            string tempfelvett[6];
            for(int j = 0; j<n; j++)
            {
                tempfelvett[j] = felvett[j];
            }
            tempfelvett[n] = ruha[i];
            backtrack(tempfelvett, n+1);
        }
    }
}

int main()
{
    string felvett[] = {""};
    backtrack(felvett, 0);
    return 0;
}
