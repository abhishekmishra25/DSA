#include <bits/stdc++.h>
using namespace std;
/*
int findindex(string str)
{
    int fi[256];
    for (int i = 0; i < 256; i++)
        fi[i] = -1;
    int res = INT_MAX;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (fi[str[i]] == -1)
            fi[str[i]] = i;
        else
            res = fi[str[i]];
    }
    return (res == INT_MAX) ? -1 : res;
}
*/
int indexfind(string str)
{
    int fi[256];
    int res = INT_MAX;
    for (int i = 0; i < 256; i++)
        fi[i] = -1;
    for (int i = 0; i < str.length(); i++)
    {
        if (fi[str[i]] == -1)
            fi[str[i]] = i;
        else
            fi[str[i]] = -2;
    }
    for (int i = 0; i < 256; i++)
        if (fi[i] >= 0)
            res = min(res, fi[i]);
    return res;
}
int main()
{
    string s = "geeksforgeeks"; // "abhishek";
    int index = indexfind(s);   // findindex(s);
    cout << index;
    return 0;
}