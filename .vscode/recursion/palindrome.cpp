#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void palindromes(int i,string &str,int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(str[i],str[n-i-1]);
    palindromes(i+1,str,n);
}

int main()
{
    string str;
    cin>>str;
    int n=str.length();
     string q=str;
    
    palindromes(0,q,n);
    
    if(q==str)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}
