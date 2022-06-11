#include <bits/stdc++.h>
using namespace std;
int checkIt(string s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (s[start] != s[end])
    {
        return 0;
    }

    return checkIt(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    int sizeOfString = s.size() - 1;
    cout << checkIt(s, 0, sizeOfString);
}