#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("Teszt karakterlanc");
    cout<<"Az str hossza: "<<str.length()<<endl;
    cout<<"Az str hossza: "<<str.size()<<endl;
    cout<<"Az str max hossza: "<<str.max_size()<<endl;
    return 0;
}
