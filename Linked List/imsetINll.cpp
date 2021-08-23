
//using GCC 14 version and master directiory
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    //using self refrential structure to store address
    Node *next;
    Node(int x)
    {
        data = x;
        // inetelising the next node address as null
        next = NULL;
    }
};

// in this function i will insert a node at a particular position
Node *insetatpos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    // if head of linked list is null
    if (head == NULL)
    {
        return temp;
    }
    // if pos is 1 then we need to change only the head of the pointer
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    // in case if head is greater than one
    int count = 1;
    Node *curr = head;
    //finding the corect position to insertthe node
    while (count != pos - 1)
    {
        //incrementing the count
        count++;
        // incrementing the next pointer or refference of node
        curr = curr->next;
    }
    // changing the reffernece of temp to point current node's next refference
    temp->next = curr->next;
    // now changing the current nodes's next address to temp
    curr->next = temp;
    return head;
}
int main()
{
    // inetialising new node pointer as head
    Node *head = new Node(10);
    // this line is used to store next address of next pointing node and so on
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node *p = insetatpos(head, 1, 35);
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}