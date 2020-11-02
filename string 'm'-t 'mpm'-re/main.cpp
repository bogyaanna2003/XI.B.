#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str,str1="m",str2="mpm";
  cout << "kerem a szoveget:";
  getline (cin,str);

  size_t found = str.find(str1);
  while(found!=string::npos){
         str.replace(found,1,str2);
        found = str.find(str1,found+3);
    }
    cout << str <<endl;
    return 0;
}

