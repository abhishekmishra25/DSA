#include <bits/stdc++.h>
using namespace std;

char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }

    return c;
}

int main()
{
    std::string str = "ABHISHEK";

    for (char &c : str)
    {
        c = to_lowercase(c);
    }

    std::cout << str;

    return 0;
}