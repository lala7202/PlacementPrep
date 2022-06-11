#include <bits/stdc++.h>
using namespace std;
int countWays(int n)
{
    // base case => beacuse if we have one stair we only have one way
    // to climb same for 2 we have 2 ways two climb

    if (n == 1 || n == 2)
    {
        return n;
    }

    // recursive call
    int recCall1 = countWays(n - 1);
    int recCall2 = countWays(n - 2);

    // small calcn

    int result = recCall1 + recCall2;
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << countWays(n);
}