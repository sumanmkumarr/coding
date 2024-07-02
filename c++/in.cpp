#include <iostream>
using namespace std;
#include<string>
int main() 
{
    string c;
    cin>>c;
    int arr[128]={0};
    for(int i=0;i<c.length();i++)
    {
        int a=c[i];
        arr[a]++;
    }
    
    for(int i=0;i<128;i++)
    {
        if(arr[i]>0){
             char t=i;;
            cout<<t<<" "<<arr[i];
        }
    }
    return 0;
}