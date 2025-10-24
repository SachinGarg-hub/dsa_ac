#include <iostream>
using namespace std;
int countSetbit(int num)
{
    int count = 0;
    while (num > 0)
    {
        int lastDig = num & 1;
        count += lastDig;
        num = num >> 1;
    }
    cout << count << endl;
    return count;
}
int main()
{
    countSetbit(10);
}