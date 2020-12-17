#include <iostream>
using namespace std;
int fakt(int n){
  if (n==0){
  return 1;
  }
  return n*fakt(n-1);
}

int main(){
  int n;
  cout << "kerem a szamot:"  ;
  cin >> n;
  cout << "a faktorialis " << fakt(n);
  return 0;
  }

