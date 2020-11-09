#include <iostream>
#include <string>
using namespace std;
//hol van a stringbe space
int main()
{
string str, str1(" ");
cout << "kerem a szoveget:";
getline(cin, str);
size_t found= str.find(str1);
while(found!=string::npos){
 cout << found<< endl;
 found=str.find(str1,found+1);
}

   return 0;
}
