#include <iostream>

using namespace std;
void hanoi(int n, char from, char to, char temp)
{

    if (n==1)
    {
        cout << n << " szamu korong "<< from << " rudrol " << to << " rudra" << endl;
        return;
    }
    hanoi(n-1, from, temp, to);
    cout << n << " szamu korong "<<from << " rudrol " << to << " rudra" << endl;
    hanoi(n-1, temp, to, from);
}
int main()
{
   hanoi(2, 'A', 'C', 'B');
    return 0;
}
