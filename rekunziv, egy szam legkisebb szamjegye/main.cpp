#include <iostream>

using namespace std;
int legk(int a, int b){
    if (a<b){
    return a;
    }
    return b;
    }
int legki(int n){
    if(n==0){
    return 10;
    }
return legk(n%10,legki(n/10));}
int main()
{
    int n;
    cout << "Adja meg a szamot:";
    cin>>n;
    cout<< legki(n);
    return 0;
}
