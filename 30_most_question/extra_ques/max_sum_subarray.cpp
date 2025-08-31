// find maximum sum of subarray , in this we will use dynamic programming

// following solution is known as kedane algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,-2,3,-3,5,8,1};
    int n = arr.size();

    int current_sum = arr[0];
    int max_sum = arr[0];

    for(int i=1;i<n;i++)
    {
        current_sum = max(arr[i],current_sum + arr[i]);
        max_sum = max(current_sum,max_sum);
    }
    cout<<max_sum;
}