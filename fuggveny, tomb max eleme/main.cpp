#include <iostream>

using namespace std;

int max(int v[], int hossz){
int i;
int max=v[0];
for(i=1; i<hossz; i++)
   if(v[i]>max)
      max=v[i];
return max;
}


int main()
{
    int v[10] = {9, 8, 7, 6, 5, 4, 3, 11, 2, 1};
    cout << max(v, 10) << endl;
    return 0;
}
