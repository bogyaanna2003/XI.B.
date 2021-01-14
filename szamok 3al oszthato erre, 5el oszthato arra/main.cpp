#include <iostream>
using namespace std;
int main()
{
   int n,i;
    cout << "n = ";
    cin >> n;
    for(i=1; i<=n; i++){
        if(i%3!=0 && i%5!=0){
            cout << i << endl;
        }
        else if(i%3==0 && i%5==0){
            cout << "ErreArra" << endl;
        }
        else if(i%3==0){
            cout << "Erre" << endl;
        }
        else if(i%5==0){
            cout << "Arra" << endl;
        }
    }
    return 0;
}
