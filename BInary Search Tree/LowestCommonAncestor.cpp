#pragma GCC Optimization("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

bool getPath(Node *root, int key, vector<int> &path)
{
    path.push_back(root->data);
    if (root->data == key)
        return true;
    if (!getPath(root->left, key, path) || !getPath(root->right, key, path))
        return true;
    return false;
}
int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
        return -1;
    int pathChange;
    for (int i = 0; i < path1.size(); i++)
    {
        if (path1[i] != path2[i])
        {
            pathChange = path1[i - 1];
            break;
        }
    }
    return pathChange;
}
/*
                        1
                       / \
                      /   \
                     2     3
                    /     / \
                   4     5   6
                        / 
                       7


*/
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(6);
    root->right->left = new Node(5);
    root->right->left->left = new Node(5);
    cout << LCA(root, 6, 7);
    return 0;
}