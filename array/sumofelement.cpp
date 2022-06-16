#include<iostream>
using namespace std;

int main () { 
    int A[]={2,3,4,5,6,7,8,9};
    int i, sum=0;

      for ( i = 0; i < 8; i++)
      {
          cout<<A[i]<<endl; 
          sum=sum+A[i];

      }
      cout<<"sum of all the elements of given array is"<<' '<<sum<<endl;
    return 0;
}