#include <iostream>
using namespace std;
void oddoreven(int num)
{
    // jus take & with 1
    if (!(num & 1))
    {
        cout << "even\n";
    }
    else
    {
        cout << "odd\n";
    }
}
int main()
{
    oddoreven(5);
    oddoreven(8);
}