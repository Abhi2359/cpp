#include<iostream>
using namespace std;

int main () { 
    int a[8]={28,23,5,3,34,56,45,21};
    int  i;
    int max=a[0];
    for ( i = 1; i < 8; i++)
    {
          if (a[i]>max)
          {
              max=a[i];

          }
          
    }
    cout<<"Maximum vlaue of elements of array is "<<max<<endl;
    
    return 0;
}