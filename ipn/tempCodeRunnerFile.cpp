
// consistent

#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str) {
    int n = str.length();
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
    string str;
    cout << "Enter a string: ";
    cin >> str;
    printSubsequences(str);
    return 0;
}
