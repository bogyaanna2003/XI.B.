#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str,str1="aeiou",str2="mpm",str3="p", str4="Z";
    cout << "kerem a szoveget:";
    getline (cin,str);
    for(int i=0; i<=str1.size(); i++)
    {
       int found = str.find(str1[i]);
        while(found!=string::npos)
        {
            str = str.replace(found,1,str2);
            found = str.find(str1[i],found+1);
        }
    }
     int found = str.find(str3);
    while(found!=string::npos)
    {
        str.insert(found+1,str4);
        found = str.find(str3,found+1);
    }
      cout<<str;
    return 0;
}
