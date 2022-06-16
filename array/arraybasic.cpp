#include<iostream>
using namespace std;

int main () { 
   // int A[5]= {2,3,4,5,6};
    //for ( int i = 0; i <5; i++)
    //{
      //  cout<<A[i]<<endl;
    //}
    //  int A[]= {2,3,4,5,6};
    // for(int x:A)
    //      cout<<x<<endl;

    //  float A[]= {2.5f,3.3f,4,5,6};
    // for(int x:A)   //Truncate the float value
    //      cout<<x<<endl;

    //       int A[]= {2,3,4,5,6};
    // for(auto x:A)    // No need to see type of array
    //      cout<<x<<endl;
          char A[]={'A',66,67,'D'};
          for(auto x:A)
          cout<<x<<endl;
    return 0;
}