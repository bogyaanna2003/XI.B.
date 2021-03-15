#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    vector<int> a;
    int n = 7, x;
    for(int i = 0; i <n; i++){
        cout << i << ". ertek: ";
        cin >> x;
        a.push_back(x);
    }

    a.pop_back();
    a.pop_back();
    for(int i = 0; i <a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}
