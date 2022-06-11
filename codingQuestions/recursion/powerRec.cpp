#include <bits/stdc++.h>
using namespace std;
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int recCall = power(n - 1);
    int smallCalc = 2 * recCall;
    return smallCalc;
}
int main()
{
    int n = 4;
    int result = power(n);
    cout << result;
}