#include <iostream>

using namespace std;

int paros(int n);

int paratlan(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+paros(n-1);
}
int paros(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+paratlan(n-1);
}
int main()
{ int n;
cout<<"kerem a szamot:";
cin>>n;
    cout << paros(n);

    return 0;
}
