#include <iostream>

using namespace std;
bool lehet(int szam)
{
    int szamjegy = 10, prev_szamjegy = szamjegy;
    while(szam>0)
    {
        prev_szamjegy = szamjegy;
        szamjegy = szam%10;
        szam = szam/10;
        if(prev_szamjegy<szamjegy)
        {
            return false;
        }
    }
    return true;
}
void backtrack(int index)
{


    if (index > 100001)
    {
        return;
    }
    if (lehet(index))
    {
        cout << index << endl;
    }
    backtrack(index+1);
}
int main()
{
    backtrack(10000);
    return 0;
}
