#include<iostream>
using namespace std;
int main()
{
    int function gcdc(int e,int f)
    {
        while(f !=0)
        {
            int temp=f;
            f=(e)%(f);
            e=temp;
        }
        return e;
    }

    int d;
    int b;
    cin>>d;
    cin>>b;
    int c;
    c=gcdc(d,b);
    cout<<c;

}