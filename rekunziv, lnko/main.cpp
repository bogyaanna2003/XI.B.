#include <iostream>

using namespace std;
int lnko(int x, int y){
    if(x==y){
        return x;
    }
    if(x<y){
        return lnko(x,y-x);
    }
        return lnko(x-y,y);
    }
int main()
{   cout<<lnko(9,6)<<endl;
    return 0;}
