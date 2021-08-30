#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

node *arrTOBST(int arr[], int s, int e)
{
    if (s > e)
        return NULL;
    int m = (s + e) / 2;
    node *root = new node(arr[m]);
    root->left = arrTOBST(arr, s, m - 1);
    root->right = arrTOBST(arr, m + 1, e);
    return root;
}

void traverse(node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        traverse(root->left);
    cout << root->key << " ";
    if (root->right != NULL)
        traverse(root->right);
    //cout << root->key << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 9, 6, 7, 8};
    node *pt = arrTOBST(arr, 0, 8);
    traverse(pt);
    return 0;
}