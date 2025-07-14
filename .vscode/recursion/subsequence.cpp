// subsequence  -- a contiguous and non contiguous sequence which follow the order

// subarray -- a contiguous sequence which follow the order

// follow the order means ,let's take example for getting this point
// if arr ={2,4,6,1} then ,if 2 is there in any subsequence then priority of 2 is first only because it is at first index

// if 6 is there in any subsequence then it should be before 1 and after 2,4 only 

// time complexity of subsequence is N(2^N)




#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequence_print(int index,int arr[],vector<int> &brr,int n)
{
    if(index == n)
    {
        for(auto it:brr)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    // pick element condition
    brr.push_back(arr[index]);
    subsequence_print(index + 1,arr,brr,n);

    // not pick element condition
    brr.pop_back();
    subsequence_print(index + 1,arr,brr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> brr;
    int index = 0;
    subsequence_print(index,arr,brr,n);

}




















// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void subsequence(int index,int arr[],vector<int> &brr,int n)
// {
//     if(index==n)
//     {
//         for(auto it :brr)
//         {
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     // this is pick condition
//     brr.push_back(arr[index]);

//     subsequence(index+1,arr,brr,n);
    

//     // this is not pick condition
//     brr.pop_back();
//     subsequence(index+1,arr,brr,n);


// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     vector<int>brr;

//     subsequence(0,arr,brr,n);

//     return 0;

// }

