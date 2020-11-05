#include <iostream>
#include <string>

using namespace std;

int main()
{
    int found;
  string str,str1="aeiou",str2="mpm",str3="p", str4="z";
  cout <<"kerem a szoveget:";
  getline (cin,str);

  for(int i=0;i<= str1.size();i++){
   found = str.find(str1[i]);
   while(found!=string::npos){
         str=str.replace(found,1,str2);
        found = str.find(str1[i],found+3);
    }
}
   found = str.find(str3);
  while(found!=string::npos){
  str.insert(found+1,str4);
  found = str.find(str3,found+1);
    cout << str;
  }
    return 0;
}
