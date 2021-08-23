// initilising the master directory
#include <bits/stdc++.h>
using namespace std;
// intilizing linked list
struct Node
{
    //initlising data variable
    int data;
    // creating self refrential node
    Node *next;
    // parametarised constructor
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// creating a function which will gone takes valuse of head pointer and data to be inserted
Node *insetpos(Node *head, int data)
{
    // create a variable called temp to create a node
    Node *temp = new Node(data);
    // now we will intialize the current pointer of linked list which will pooint to the current node
    Node *curr = head;
    // cheching whether this function is NULL or not
    //if null then return the temp pointer
    if (head == NULL)
        return temp;
    // if data is smaller than head
    // then will insert at he end;
    if (data < head->data)
    {
        temp->next = head;
        return temp;
    }
    while (curr->next != NULL)
    {
        if (data < curr->next->data && data > curr->data)
        {
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        else
            curr = curr->next;
    }
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);
    head->next->next->next = new Node(25);
    Node *p = insetpos(head, 5);
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
