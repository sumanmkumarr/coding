// find repeated character and divide the string into two equal distinct letter part,if it is possible then print yes otherwise no

#include<iostream>
using namespace std;
int main()
{
     string str;
     cin>>str;
     int t=str.length();

     int arr[128]={0};
     for(int i=0;i<t;i++)
     {
        int a=str[i];
        arr[a]++;
     }
     int sum=0;
     for(int i=0;i<127;i++)
     {
        if(arr[i]>0)
        {
            char c=i;
            cout<<c<<arr[i]<<" ";
            sum=sum+arr[i];
        }
        
     }
     int y=0;
     for(int i=0;i<128;i++)
     {
         if((arr[i]>0 && arr[i]>2) || sum%2!=0)
         {
              y=1;
              break;
         }
     }

     if(y==1)
     {
        cout<<"\n not possible";
     }
     else{
        cout<<"\n yes,possible";
     }


}