#include <iostream>

using namespace std;
int lnko(int &a, int &b){
while(a!=b){
    if(a>b){
        a=a-b;
    }else{
    b=b-a;
    }
}
return a;
}
int lkkt(int &a, int &b){
 return a*b/lnko(a,b);
}
int main(){
    int a,b;
     a=16;
     b=25;
     cout<<lkkt(a,b)<<endl;
    cout<<lnko(a,b)<<endl;
    return 0;
}
