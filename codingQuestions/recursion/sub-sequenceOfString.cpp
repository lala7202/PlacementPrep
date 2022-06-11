#include <bits/stdc++.h>
using namespace std;
void sequenceFinder(string s, string temp, int i)
{
    if (s.size() == i)
    {
        cout << temp << " ";
        return;
    }
    // take
    sequenceFinder(s, temp + s[i], i + 1);
    sequenceFinder(s, temp, i + 1);

    return;
}
int main()
{
    string s;
    cin >> s;
    sequenceFinder(s, "", 0);
}