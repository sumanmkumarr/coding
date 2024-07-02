#include<iostream>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    
    int m=str1.length();
    int n=str2.length();
    int t=0;
   
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
      {
         if(str1[i]==str2[j])
         {
            t++;
            break;
         }
      }
   }
    
    if(t==m)
    {
        cout<<"anagram";
    }
    else if( m!=n  || t!=m)
    {
        cout<<"not anagram";
    }
    
}