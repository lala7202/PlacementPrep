#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int start, int end)
{
    int temp;
    if (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        return reverseArray(arr, start + 1, end - 1);
    }
    return 0;
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
    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}