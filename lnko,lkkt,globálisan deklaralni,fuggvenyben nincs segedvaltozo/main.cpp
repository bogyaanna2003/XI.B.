#include <iostream>
using namespace std;
int a, b;
int lnko(){
while(a!=b){
    if(a>b){
        a=a-b;
    }else{
    b=b-a;
    }
}
return a;
}
int lkkt(){
    return a*b/lnko();
}
int main(){
     a=16;
     b=25;
    cout<<lkkt()<<endl;
   cout<<lnko()<<endl;

    return 0;
}
