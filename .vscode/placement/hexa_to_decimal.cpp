#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int t=0;
   for(int i=0;i<n;i++)
   {
        if(str[i]>='0' && str[i]<='9')
        {
             t=t+(int(str[i]) -48)*pow(16,n-i-1);
        }
        else if(str[i]>='A' && str[i]<='F')
        {
             t=t+(int(str[i])-55)*pow(16,n-i-1);
        }
   }
    
    cout<<t;   
}