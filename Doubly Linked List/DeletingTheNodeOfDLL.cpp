#include <bits/stdc++.h>
using namespace std;
// craring blue print for Doubly linked list
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
// creating a function which insert node at the end of DLL
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
// creting a function which insert at the begin of DLL
Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    temp->next = head;
    head->prev = temp;
    return temp;
}
// crating a function to delete the starting node of DLL
// this is my code in this memory is not deallocated
//so it works at a cost of memory
Node *delBeg(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        //delete head;
        return NULL;
    }
    Node *curr = head;
    //Node *temp = head;
    curr = curr->next;
    curr->prev = NULL;
    // delete temp;
    return curr;
}
// eficient approach to in which memory is deallocated
Node *deleteBegin(Node *head)
{
    if (head == NULL)
        return NULL;
    // some time it is not easy to understand the problem
    //with this code i fuckedup my day for using "=" sign
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}
Node *delend(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}
Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        int y = head->data;
        Node *curr = head;
        temp->next = curr->next;
        curr->next = temp;
        temp->data = y;
        curr->data = x;
    }
    return head;
}
int main()
{
    Node *head = new Node(3);
    head = insertENd(head, 5);
    head = insertENd(head, 11);
    head = insertENd(head, 20);
    //head = delBeg(head);
    //head = deleteBegin(head);

    // head = delend(head);
    head = insertBeg(head, 25);
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    return 0;
}