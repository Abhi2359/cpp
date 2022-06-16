#include<iostream>
using namespace std;

int main () { 
   // int A[]={2,3,4,5,6,7,8};
  //  for(auto x:A)
  //  cout<<x<<endl; // x stores the vlaue of array element directly 



     // int A[]={2,3,4,5,6,7,8};
     // for(auto x:A)
     // cout<<++x<<endl; // Thi9s will only increase the output but do not change the value of element

     int A[]={2,3,4,5,6,7,8};
     for(auto &x:A)    // Use of '&' ensures that value of element itself gets increased

     cout<<++x<<endl;
     
    return 0;
}