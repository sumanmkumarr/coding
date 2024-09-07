#include<bits/stdc++.h>
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

node* convertarr2ll(vector<int>&arr)
{
    node *head=new node(arr[0],nullptr);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
        // or
        // mover=mover->next;
    }
    return head;
}
int main()
{
   vector<int>arr={3,5,5,2};
   node* y=new node(arr[0],nullptr);
   cout<<y->data<<endl;

   node *head=convertarr2ll(arr);
   cout<<head->data<<endl;

   // traversal in ll
   node* temp=head;
   while(temp)
   {
     cout<<temp->data<<" ";
     temp=temp->next;
   }
   cout<<endl;


   // length of ll
   node* temp2=head;
   int l=0;
   while(temp2)
   {
      l=l+1;
      temp2=temp2->next;
   }
   cout<<l<<endl;
}