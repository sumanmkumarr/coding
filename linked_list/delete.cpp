#include<iostream>
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



// convert the array into linked list
node* convertArr2LL(vector<int>&arr)
{
   node* head=new node(arr[0],nullptr);
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


// delete head
node* deletehead(node* head)
{
    if(head == NULL) return head;
    node* temp=head;
    head=head->next;
    free(temp);
    // or
    // delete temp;
    return head;
    
}


// print element of linked list
// void print(node* head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }



// print data of linked list
void print(node* head)
{
    node *temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}



// delete the tail of linked list
node* deletetail(node* head)
{
    node* temp=head;
    if(temp==NULL || temp->next==NULL)
    {
        return NULL;
    }
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;

    return head;
}



// delete kth element
node *deletek(node *head,int k)
{
    node* temp=head;
    if(temp==NULL) return NULL;
    if(k==1)
    {
        head=head->next;
        free(temp);
        return head;
    }
    node *prev=NULL;
    int c=0;
    while(temp)
    {
       c=c+1;
       if(c==k)
       {
          prev->next=prev->next->next;
          free(temp);
          break;
       }
       prev=temp;
       temp=temp->next;
    }
    return head;
}



// delete specific value from list
node *deletev(node *head,int val)
{
    node *temp=head;
    if(temp==NULL)
    {
        return NULL;
    }
    if(head->data==val)
    {
        head=head->next;
        free(temp);
        return head;
    }
    node *prev=NULL;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
   vector<int>arr={8,3,2,9,3,8,4,67};
   node* head=convertArr2LL(arr);
   cout<<head->data<<endl;
   print(head);
   cout<<endl;
   

   // delete head node
   node* head2=deletehead(head);
   cout<<head2->data<<endl;
   print(head2);
   cout<<endl;


   // delete tail node
   node* head3=deletetail(head2);
   print(head3);
   cout<<endl;


   // delete kth element
   int k;
   cin>>k;
   node *head4=deletek(head3,k);
   print(head4);
   cout<<endl;



   // delete value
   int val;
   cin>>val;
   node *head5=deletev(head4,val);
   print(head5);
   cout<<endl;
   
}