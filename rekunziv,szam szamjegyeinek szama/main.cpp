#include <iostream>

using namespace std;
int szm(int n){
 if(n==0){
    return 0;
 }
 return 1+szm(n/10);
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    cout<<szm(n);

    return 0;
}
