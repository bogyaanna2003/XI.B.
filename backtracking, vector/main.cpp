#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<int>valami;
  valami.push_back(1);
  valami.push_back(2);
  valami.push_back(3);
  for(int i = 0; i < valami.size(); i++){
      cout << valami[i] << " ";
  }

  return 0;
}
