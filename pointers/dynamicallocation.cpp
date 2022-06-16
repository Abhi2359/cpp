#include<iostream>
using namespace std;

int main () { 
    // int *p=new int [5];
    // p[0]=2;
    // p[2]=3;
    // cout<<p[2]<<endl;


    // delete []p;
    // p=nullptr;
     int *p =new int [20];  //create an array of size 20 in heap

    delete []p;   // To avoid memory leak
    p=new int[40];  // Changing the size of array in heap
    return 0;
}