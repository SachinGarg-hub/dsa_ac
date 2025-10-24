#include <iostream>
using namespace std;

void updateithbit(int num, int i, int value)
{
    num = num & ~(1 << i);    // clear ith bit
    num = num | (value << i); // set ith bit according to 'value'
    cout << num << endl;
}

int main()
{
    updateithbit(7, 2, 0);
    updateithbit(7, 3, 1);
    return 0;
}
