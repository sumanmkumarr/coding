#include<bits/stdc++.h>
using namespace std;

class teacher
{
    private:
    string name;
    public:
    int age;
};
class ta:public teacher
{
    
};


int main()
{
    ta t;
    t.age=10;
    cout<<t.age;
    
}