#include <iostream>

using namespace std;
int lnko(int &a, int &b){
    int a1=a;
    int b1=b;
while(a1!=b1){
    if(a1>b1){
        a1=a1-b1;
    }else{
    b1=b1-a1;
    }
}
return a1;
}
int lkkt(int &a, int &b){
 return a*b/lnko(a,b);
}
int main(){
    int a,b;
     a=6;
     b=8;
    cout<<lnko(a,b)<<endl;
    cout<<lkkt(a,b)<<endl;
    return 0;
}
