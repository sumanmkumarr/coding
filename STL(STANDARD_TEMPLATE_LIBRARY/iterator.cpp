#include<bits/stdc++.h>
using namespace std;

// iterator -- it points to the memory address where element is there
// or ,iterator store the address of the element 

// iterator -- begin,end,rbegin(reverse begin),rend(reverse end)

void explain_iterator()
{
    vector<int>v={4,3,2,9,2};

    // iterator
    vector<int>::iterator it=v.begin();// here it is a variable which is a iterator,and store the address of first element of vector v

    cout<<*(it)<<" "; // for access the element of iterator we use *

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it);

    // different iterator
    // vector<int>::iterator it=v.end();
    // vector<int>::iterator it=v.rbegin();
    // vector<int>::iterator it=v.rend();
}
int main()
{
    explain_iterator();

}
