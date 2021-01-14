#include <iostream>
using namespace std;
int verif(int n, int a){
    int b=0, i=0,j=0;
    while(n>0){
        b=n%10;
        n =n/10;
        i++;
        if(b<=a){
           j++;
        }
    }
    if(i==j) {
            return 1; }
    else {
        return 0;
    }
}
int main()
{
    cout << verif(1234, 2);
    return 0;
}
