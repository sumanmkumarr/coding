#include<bits\stdc++.h>
#include<vector>
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

node* convertArr2ll(vector<int> &arr)
{
    node* head=new node(arr[0],nullptr);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main()
{
    vector<int> arr={19,4,2,7};
    node* head=convertArr2ll(arr);
    cout<<head->data;


    //traverse the linked list
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}