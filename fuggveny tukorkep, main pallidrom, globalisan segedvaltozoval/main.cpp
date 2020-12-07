#include <iostream>
int a;
using namespace std;
int tukorkep(){
int d=0;
int b=a;
int c;
while(b>0){
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
return d;
}
int main(){
    a=151;
    if(a==tukorkep()){
        cout<<" pallidrom";
    }else{
    cout<<"nem pallidrom";
    }
    return 0;
}
