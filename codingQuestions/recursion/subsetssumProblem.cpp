#include <bits/stdc++.h>
using namespace std;
bool subsets(int arr[], int temp, int n, int i, int sum)
{
    if (sum == temp)
    {
        return true;
    }
    if (i >= n)
    {
        return false;
    }

    int reccall1 = subsets(arr, temp + arr[i], n, i + 1, sum);
    int reccall2 = subsets(arr, temp, n, i + 1, sum);
    return reccall1 || reccall2;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int temp = 0;
    cout << subsets(arr, temp, n, 0, sum);
}