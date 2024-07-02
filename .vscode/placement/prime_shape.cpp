#include<iostream>
using namespace std;
#include<vector>
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n;
}

int main()
{
    
   vector<int>nums;
   for(int i=2;i<17;i++)
   {
       int result=prime(i);
       if(result!=0)
       {
         nums.push_back(result);
       }
   }
   for(int i=0;i<nums.size();i++)
   {
      for(int j=0;j<=i;j++)
      {
           cout<<nums[j]<<" ";
      }
      cout<<"\n";
    
   }

}