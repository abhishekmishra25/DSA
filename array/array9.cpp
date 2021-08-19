#include <bits/stdc++.h>
using namespace std;
/*bool find_triplet(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        int k = arr[i];
        while (l < r)
        {
            int sum = k + arr[l] + arr[r];
            if (sum == 0)
                return true;
            else if (sum < 0)
                l++;
            else
                r--;
        }
    }
    return false;
}*/
int main()
{
    int arr[10] = {1, 0, 2, -3, -1};
    int n = 5;
    int c = 25 ^ 2;
    cout << c;
    //cout << find_triplet(arr, n);
}
