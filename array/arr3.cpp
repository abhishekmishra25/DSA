#include <bits/stdc++.h>
using namespace std;

int findindex(string &s)
{
    int res = INT_MAX;
    int fi[256];
    for (int i = 0; i < 256; i++)
        fi[i] = -1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (fi[s[i]] == -1)
        {
            fi[s[i]] = i;
        }
        else
        {
            res = fi[s[i]];
        }
    }
    return res; //== INT_MAX) ? -1 : res;
}
/*
#define NO_OF_CHARS 256

int findindex(string &str)
{
    // Initialize leftmost index of every
    // character as -1.
    int firstIndex[256];
    for (int i = 0; i < 256; i++)
        firstIndex[i] = -1;

    // Traverse from left and update result
    // if we see a repeating character whose
    // first index is smaller than current
    // result.
    int res = INT_MAX;
    for (int i = 0; i < str.length(); i++)
    {
        if (firstIndex[str[i]] == -1)
            firstIndex[str[i]] = i;
        else
            res = min(res, firstIndex[str[i]]);
    }

    return (res == INT_MAX) ? -1 : res;
}*/
int main()
{
    string s;
    s = "geeksforgeeks";
    cout << findindex(s);
}