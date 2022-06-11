#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    // base case => iske baad humare function ko rukna hai agar ye true hai to
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // recursive call
    int recursiveCall = factorial(n - 1);
    // small calculation
    int result = n * recursiveCall;
    // returning the result to main function
    return result;
}
int main()
{
    int n = 5;
    int result = factorial(n);
    cout << result;
}
