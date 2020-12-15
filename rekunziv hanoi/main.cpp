#include <iostream>
using namespace std;

int hanoi(int n){
    if(n==0){
        return 0;
    }
    if(n==2){
        return 3;
    }
    return 2*hanoi(n-1)+1;
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    cout << hanoi(n) << endl;
    return 0;
}
