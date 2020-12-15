#include <iostream>

using namespace std;
int szorzat(int n){
 if(n==0){
    return 0;
}
 return n%10+szorzat(n/10);
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    cout<<szorzat(n);

    return 0;
}
