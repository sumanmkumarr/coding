#include<bits/stdc++.h>
using namespace std;



// container

//pair
void explain_pair()
{
    pair<int,int>p={3,5};

    cout<<p.first<<" "<<p.second<<endl;

    // nested pair
    pair<int,pair<int,int>>pq={2,{6,8}};

    cout<<pq.first<<" "<<pq.second.first<<" "<<pq.second.second<<endl;


    // pair and array
    pair<int,int>arr[]={{12,4},{6,8},{4,3}};

    cout<<arr[0].first<<" "<<arr[1].second<<" "<<arr[2].first<<endl;
}

void explain_vector()
{
    vector<int> arr;
    arr.push_back(9);
    arr.emplace_back(7);// emplace is similar to push_back,but emplace_back is faster than push_back

    // vector with pair
    vector<pair<int,int>>vec;
    vec.push_back({3,4});
    vec.emplace_back(5,3);// here we no need to use {},in case of emplace_back

    //
    vector<int>b(7);//7 is the size of vector b

    //
    vector<int>r(3,9);//here size of vector is 3 and at every index vector r store 9


    //copy another vector
    vector<int>q(r);//vector q stote all element of r vector

    // how to increse  size of vector after declaring the size of vector also
    vector<int>e(7);
    e.push_back(2);// now size of vector e is 8 because one more element we inserted that is 2
}


int main()
{
    explain_pair();
}