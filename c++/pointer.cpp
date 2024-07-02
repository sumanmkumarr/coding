#include<iostream>
using namespace std;
int main()
{
    // //pointer is a variable  which is used to store the address of another variable
    // //&----m percent
    // int a=10;
    // int *aptr;
    // aptr=&a;
    // cout<<a<<endl;
    // cout<<aptr<<endl;//it will give address of a
    // cout<<&a<<endl;//it will give address of a
    // cout<<*aptr<<endl;//it will give value of a


    // // we can use pointer to modify the value,eample
    // *aptr=20;
    // cout<<a;



//------------------------------------------------------------------
    // //pointer arithmetic
    // int c=40;
    // int *cptr;
    // cptr=&c;
    // cout<<cptr<<endl;
    // cptr++;
    // cout<<cptr<<endl;// in these case incrementing  by 4 because int size is 4 bytes
    // cptr++;
    // cout<<cptr<<endl;





//------------------------------------------
     //pointer and array
     int arr[]={10,20,30};
     // in case array we can not assign address of all element together in the pointer
     // so just below line is wrong ,for that we need to assign just array
     //int *ptr=&arr;

     int *ptr=arr;



    


}