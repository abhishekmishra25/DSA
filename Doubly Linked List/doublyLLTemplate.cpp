#include <bits/stdc++.h>
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
Node *insertENd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    temp->next = head;
    head->prev = temp;
    return temp;
}

int main()
{
    Node *head = new Node(3);
    head = insertENd(head, 5);
    head = insertENd(head, 11);
    head = insertENd(head, 20);
    // create function call

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    return 0;
}