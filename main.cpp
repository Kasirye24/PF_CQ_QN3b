#include <iostream>
#include <algorithm>

using namespace std;

int reduce(int num, int denom)
{
    if (num <= 0 || denom <= 0)
    {
        return 0;
    }

    int gcd = __gcd(num, denom);
    num /= gcd;
    denom /= gcd;
    cout << "Greatest Common divisor for num is:" << num << endl;
    cout << "Greatest Common divisor for denom is:" << denom << endl;
    return 1;
}

int main()
{
    int denom = 36;
    int num = 60;

    int result = reduce(num, denom);

    if (result == 1)
    {
        cout << "Reduction successfully" << endl;
    }
    else
    {
        cout << "Reduction failed." << endl;
    }

    return 0;
}
