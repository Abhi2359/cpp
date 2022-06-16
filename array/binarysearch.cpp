#include<iostream>
using namespace std;

int main () { 
    int A[10]={1,2,3,4,5,6,7,8,9,10};  // elements in sorted order
    int l=0,h=9,key, mid;
    cout<<"Enter key"<<endl;
    cin>>key;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key==A[mid])
        {
            cout<<"Key is found at "<<mid<<endl;  
            return 0; 
         }
        else if (key<A[mid])
        {
            h=mid-1;
        }
        else
        {
          l=mid+1;
        }
        
    }
    cout<<"Not Found"<<endl;


    return 0;
}