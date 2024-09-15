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


// insert element at the beginning
node *insertbegin(node* head,int val)
{
    node *temp=new node(val,nullptr);
    temp->next=head;
    return temp;
}


// insert at tail
node *inserttail(node *head,int val)
{
    node *temp=head;
    node *valnode=new node(val,nullptr);
    if(temp==NULL)
    {
        return valnode;
    }
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=valnode;
    return head;
}


// insert at position 
node *insertpos(node *head,int k,int val)
{
    node *temp=head;
    node *newnode=new node(val,nullptr);
    if(head==NULL)
    {
        if(k==1)
        {
            return newnode;
        }
    }
    if(k==1)
    {
        newnode->next=head;
        return newnode;
    }
    int c=0;
    while(temp)
    {
        c=c+1;
        if(c==k-1)
        {
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
    return head;
}


// insert value before specific number
node *insertbefore(node *head,int val,int llval)
{
   node *temp=head;
   node *newnode=new node(val,nullptr);
   if(temp==NULL)
   {
     return NULL;
   }
   if(temp->data==llval)
   {
      node *newnode=new node(val,nullptr);
      newnode->next=temp;
      return newnode;
   }
   node *prev=NULL;
   while(temp->data != llval)
   {
        prev=temp;
        temp=temp->next;
   }
   newnode->next=temp;
   prev->next=newnode;
   return head;

}

int main()
{
    vector<int>arr={4,8,2,6,45,12};
    node *head=convertArr2LL(arr);
    print(head);
    cout<<endl;


    // // insert at beginning
    // int val;
    // cin>>val;
    // head=insertbegin(head,val);
    // print(head);
    // cout<<endl;


    // // insert at tail
    // int val1;
    // cin>>val1;
    // head=inserttail(head,val1);
    // print(head);
    // cout<<endl;


    // insert at position
    // int k1,val2;
    // cin>>k1>>val2;
    // head=insertpos(head,k1,val2);
    // print(head);
    // cout<<endl;

    // insert value before specific number
    head=insertbefore(head,100,6);
    print(head);
}