
// consistent

#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(int n) {
    string str="";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            str=str+'0';
        }
        else
        {
            str=str+'1';
        }
    }
    unsigned int total = 1 << n; // Total number of subsequences: 2^n
    int v=0;
    for (int i = 1; i < total; ++i) {
        string subseq = "";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subseq += str[j];
            }
        }
        int u=0;
        for(int y=0;y<subseq.length()-1;y++)
        {
            if(subseq[y]==subseq[y+1])
            {
                u=1;
                break;
            }
        }
        if(u!=1)
        {
            v=v+1;
        }
        cout << subseq << endl;
    }
    cout<<v;
}

int main() {
    int n;
    cin>>n;
    printSubsequences(n);
    return 0;
}
