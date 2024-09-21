#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
    node *back;

    node(int data1,node *next1,node *back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
};

node *convertArr2DoubleLL(vector<int>&arr)
{
    node *head=new node(arr[0],nullptr,nullptr);
    node *mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node *temp=new node(arr[i],nullptr,nullptr);
        temp->back=mover;
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}



// print all element of linked list
void print(node *head)
{
    node *temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


// delete the head of double linked list
node *deleteh(node *head)
{
    node *temp=head;

    if(temp == NULL || temp->next == NULL)
    {
        return NULL;
    }
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    free(temp);

    return head;
}
int main()
{
    vector<int>arr={4,9,6,2,9,4,2};
    node *head=convertArr2DoubleLL(arr);
    cout<<head->next->back->next->data;
    cout<<endl;
    print(head);
    cout<<endl;

    // delete the head
    head=deleteh(head);
    print(head);

}