#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void pattern(string t, string p)
{
    for (int i = 0; i < t.length() - p.length() + 1; i++)
    {
        int j = 0;
        while (j < p.length())
        {
            if (t[i + j] != p[j])
                break;
            j += 1;
        }
        if (j == p.length())
            cout << i;
    }
}
int main()
{
    string t, p;
    t = "geeksforgeeks";
    p = "geek";
    cout << pattern(t, p);
    return 0;
}