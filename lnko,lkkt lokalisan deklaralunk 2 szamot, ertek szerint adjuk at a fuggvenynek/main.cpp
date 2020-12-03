#include <iostream>

using namespace std;
int lnko(int a, int b){
while(a!=b){
    if(a>b){
        a=a-b;
    }else{
    b=b-a;
    }
}
return a;
}
int lkkt(int a, int b){
int c=a*b;
while(a!=b){
    if(a>b){
        a=a-b;
    }else{
    b=b-a;
    }
}
 return c/a;
}
int main(){
    int a=16;
    int b=25;
    cout<<lnko(a,b)<<endl;
    cout<<lkkt(a,b)<<endl;
    return 0;
}
