#include <bits/stdc++.h>
using namespace std;
long long int fibonacci(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    // recursive call
    long long int recCall1 = fibonacci(n - 1);
    long long int recCall2 = fibonacci(n - 2);

    // small calculation/result
    int result = recCall1 + recCall2;
    return result;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << "\n";
    }
}