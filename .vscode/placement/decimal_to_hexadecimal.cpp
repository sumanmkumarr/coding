#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int deci;
    cin>>deci;
    int len=(log(deci)/log(16))+1;
    string str[len];
    for(int i=0;i<len;i++)
    {
        int rem=deci%16;
        if(rem>=10 && rem<=15)
        {
            str[len-i-1]=char(rem+55);
        }
        else{
            str[len-i-1]=char(rem+48);
        }

        deci=deci/16;
    }
    for(int i=0;i<len;i++)
    {
        cout<<str[i];
    }
}