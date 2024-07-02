// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<math.h>

int bin_to_dec(int r){
         int temp=r;
         int t=0,i=0;
         while(temp>0)
         {
             int rem;
             rem=temp%10;
             t=t+rem*pow(2,i);
             temp=temp/10;
             i++;
          }
          return t;     
 }
int main() 
{
    int n1,n2;
    cin>>n1>>n2;
    int x1=bin_to_dec(n1);
    int x2=bin_to_dec(n2);
    int sub=x1-x2;
    cout<<sub;
    
    
    return 0;
}