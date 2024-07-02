#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    temp=n;
    int rev=0;
    while(temp>0)
    {
        int rem;
        rem=temp%10;
        rev=rev*10 + rem;
        temp=temp/10;

    }
    if(rev==n)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}