#include <iostream>
using namespace std;
void clearlastibit(int num, int i)
{
    int bitmask = ~0 << i;
    num = num & bitmask;
    cout << num << endl;
}
int main()
{
    clearlastibit(15, 2);
    return 0;
}