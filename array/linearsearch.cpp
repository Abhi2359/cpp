#include<iostream>
using namespace std;

int main () { 
    int A[10],i,key;
    cout<<"Enter the elements"<<endl;
    for ( i = 0; i <10; i++)
    {
        cin>>A[i];
    }
     cout<<"Enter key"<<endl;
     cin>>key;
     for ( i = 0; i <10; i++)
     {
         if (key==A[i])
         {
             cout<<"Key is found at"<<' '<<i<<endl;
             return 0;
         }
         
     }
         
      cout<<"Key is not found"<<endl;

    
}