#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string s1,s2;
  cout << "kerem a szoveget:";
  getline (cin,s1);
  cout << "kerem a szoveget:";
  getline (cin,s2);

  size_t found = s1.find(s2);
  while(found!=string::npos){
         transform(s1.begin()+found,s1.begin()+found+s2.size(),s1.begin()+found, ::toupper);
           found = s1.find(s2,found+1);
    }
    cout << s1 <<endl;
    return 0;
}

