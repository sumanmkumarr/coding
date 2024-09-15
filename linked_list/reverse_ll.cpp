#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int data1,node* next1)
    {
        data=data1;
        next=next1;
    }
};

// convert arr to linked list
node *convertArr2LL(vector<int>&arr)
{
    node *head=new node(arr[0],nullptr);
    node *mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node *temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}



// print linked list element
void print(node *head)
{
    node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// reverse the linked list
node *reverse_ll(node *head)
{
    node *prev=NULL;
    node *current=head;
    node *nxtptr;

    while(current)
    {
        nxtptr=current->next;
        current->next=prev;

        prev=current;
        current=nxtptr;
    }

    return prev;
}



int main()
{
    vector<int>arr={4,8,2,6,45,12};
    node *head=convertArr2LL(arr);
    print(head);
    cout<<endl;


    node *head1=reverse_ll(head);
    print(head1);
}