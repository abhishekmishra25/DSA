#include <bits/stdc++.h>
#include <string>
//#include <stdio.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int lexrank(string str)
{
    int rank = 1;
    int n = str.length();
    int mul = fact(n);
    int count[256] = {0};
    for (int i = 0; i < n; i++)
        count[str[i]]++;
    for (int i = 1; i < 256; i++)
        count[i] = count[i] + count[i - 1];
    for (int i = 0; i < n; i++)
    {
        mul = mul / (n - i);
        rank = rank + count[str[i] - 1] * mul;
        for (int j = str[i]; j < 256; j++)
            count[j]--;
    }
    return rank;
}
int main()
{
    string str;
    str = "abhishek";
    int rank = lexrank(str);
    cout << rank;
    return 0;
}