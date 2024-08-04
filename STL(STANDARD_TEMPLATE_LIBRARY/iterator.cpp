#include<bits/stdc++.h>
using namespace std;

// iterator -- it points to the memory address where element is there
// or ,iterator store(point) the address of the element 
// iterator does not store the addrees of the element ,it point the address of element

// iterator -- begin,end,rbegin(reverse begin),rend(reverse end)
// begin() -- it point to the memory address of first element
// end() -- it point to the memory address of just after the last element
// rbegin() -- it point to the memory address of last element
// rend() -- it point to the memory address of just before the first element

void explain_iterator()
{
    vector<int>v={4,3,2,9,2};

    // iterator
    vector<int>::iterator it=v.begin();// here it is a variable which is a iterator,and store the address of first element of vector v

    cout<<*(it)<<" "; // for access the element of iterator we use *

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    // different iterator
    vector<int>::iterator it2=v.end();
    vector<int>::reverse_iterator it3=v.rbegin();
    vector<int>::reverse_iterator it4=v.rend();


    cout<<v.back()<<" ";//back()-- it is used to access last element


    // print all element of a vector using iterator
    cout<<endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }

    // instead of writing vector<int>::itertor ,we can use auto also,it automatic detect that begin is a iterator
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++) // here auto is a iterator datatype
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;
    //
    for(auto i:v)// here auto is int datatype
    {
        cout<<i<<" ";
    }
}
int main()
{
    explain_iterator();

}
