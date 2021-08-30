#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

int getCount(Node *root, int l, int h)
{
    if (!root)
        return 0;
    if (root->key < l)
        return getCount(root->right, l, h);
    if (root->key > h)
        return getCount(root->left, l, h);
    return 1 + getCount(root->left, l, h) + getCount(root->right, l, h);
}
/*
                10
               /  \
              8    12   
             / \   / \
            5   9 11  14
           / \       / \
          4  7      13  17
*/
int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->left->left->left = new Node(4);
    root->left->left->right = new Node(7);
    root->right = new Node(12);
    root->right->left = new Node(11);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);
    root->right->right->right = new Node(17);
    cout << getCount(root, 6, 14);
    return 0;
}