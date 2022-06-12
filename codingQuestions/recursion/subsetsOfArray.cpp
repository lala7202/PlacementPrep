#include <bits/stdc++.h>
using namespace std;
void subsets(int arr[], vector<int> temp, int n, int i)
{

    if (i == n)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            cout << temp[j];
        }
        cout << " ";
        return;
    }

    temp.push_back(arr[i]);
    subsets(arr, temp, n, i + 1);
    temp.pop_back();
    subsets(arr, temp, n, i + 1);
    return;
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
    vector<int> temp;
    subsets(arr, temp, n, 0);
}