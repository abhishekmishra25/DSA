// using vector to implement insertion opertation operator in c++
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> m{1, 1, 2, 3, 4, 5, 6};
    for (auto i = m.begin(); i != m.end(); ++i)
        cout << *i << " ";
    //cout << m << "  vector before insertion";
    int x, pos;
    cin >> x >> pos;
    m.insert(m.begin() + pos, x);
    // cout << m << "vector afore insertion";
    for (auto i = m.begin(); i != m.end(); ++i)
        cout << *i << " ";
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int inser(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;
    int index = pos - 1;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        arr[index] = x;
        return n + 1;
    }
    return -1;
}
int main()
{
    int n, x, pos, cap;
    cin >> n >> x >> pos >> cap;
    int arr[cap] = {1, 2, 3, 4, 5, 6};
    cout << inser(arr, n, x, cap, pos);
    return 0;
}