#include<iostream>
using namespace std;

int main () { 
    int A[5] ={2,4,6,7,9};
    int  *p= A;
    int *q= &A[3];
    int d;
   // p=p+2;
   // cout<<p;
  // cout<<*(p+2);  //It will change the location and point to variable at that location
    
  //Accessing  array elements using pointers 
    for (int i = 0; i <5; i++)
    {
        cout<<*p<<endl;
        p++;


    }
    //Possible Arithmetic operation pointers
   //p++
   //p--
   //p+2
   //p-2
   // d=p-q or q-p
    return 0;
}