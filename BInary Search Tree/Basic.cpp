#pragma GCC Optimzation("Ofast")
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
void traverse(Node *root)
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
/*
               9
              / \
             /   \
            5     7
           / \   / \
          2   4  6  8
         / \
        1   3

*/
int main()
{
    Node *root = new Node(9);
    root->left = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(3);
    root->right = new Node(7);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    traverse(root);
    return 0;
}