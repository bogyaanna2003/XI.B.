#include <iostream>
#include <vector>

using namespace std;

vector<int>penz = {1, 5, 10, 50, 100};
vector<int>elegendo = {5, 2, 3, 5, 2};
int osszeg = 25;

vector<int>leghosszabb_megoldas;

vector<int>legrovidebb_megoldas(1000);

bool lehet(int S, int ertek, int hanyvan)
{
    if(S + ertek > osszeg)
    {
        return false;
    }
    if (hanyvan < 1)
    {
        return false;
    }
    return true;
}

void backtracking(int temposszeg, int index, vector<int>eddigi_osszeg, vector<int>eleg)
{
    if(temposszeg == osszeg)
    {
        if(leghosszabb_megoldas.size()<eddigi_osszeg.size())
        {
            leghosszabb_megoldas = eddigi_osszeg;
        }
        if(legrovidebb_megoldas.size()>eddigi_osszeg.size())
        {
            legrovidebb_megoldas = eddigi_osszeg;
        }
        return;
    }
    for(int tempindex=index; tempindex<penz.size(); tempindex++)
    {
        if(lehet(temposszeg, penz[tempindex], eleg[tempindex]))
        {
            vector<int>temp_eddigi_osszeg = eddigi_osszeg;
            temp_eddigi_osszeg.push_back(penz[tempindex]);
            vector<int>tempeleg = eleg;
            tempeleg[tempindex] --;
            int temp_temposszeg = temposszeg;
            temp_temposszeg = temp_temposszeg + penz[tempindex];
            backtracking(temp_temposszeg, tempindex, temp_eddigi_osszeg, tempeleg);
        }
    }
    return;
}

int main()
{
    vector<int>vektor;
    backtracking(0, 0, vektor, elegendo);
    cout << "Leghosszabb megoldas: ";
    for(int i=0; i<leghosszabb_megoldas.size(); i++)
    {
        cout << leghosszabb_megoldas[i] << " ";
    }
    cout << endl << "Legrovidebb megoldas: ";
    for(int i=0; i<legrovidebb_megoldas.size(); i++)
    {
        cout <<legrovidebb_megoldas[i] << " ";
    }
    return 0;
}
