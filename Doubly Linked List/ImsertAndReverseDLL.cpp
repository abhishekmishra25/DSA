#include <bits/stdc++.h>
#pragma GCC optimise("Ofast")
#pragma GCC target("avx", "avx2", "fma")
using namespace std;
#define int long long

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
Node *revDll(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev;
}
signed main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Node *head = new Node(20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = revDll(head);
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    return 0;
}