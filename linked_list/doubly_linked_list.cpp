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
        mover->next=temp;
        temp->back=mover;
        mover=mover->next;
    }
    return head;
}
int main()
{
    vector<int>arr={4,9,6,2};
    node *head=convertArr2DoubleLL(arr);
    cout<<head->next->back->next->data;

}