#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter the array element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the value to be searched : ";
    cin >> x;
    cout << "index of elemnt : " << search(arr, n, x);
}