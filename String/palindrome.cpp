#include<iostream>
using namespace std;

int main () { 
      string str ="Today";
   string:: iterator itr;
   for ( itr =str.begin(); itr!=str.end(); itr++)
   {
    cout<<*itr<<endl; 
   }
     
     string::reverse_iterator it;
     for ( it = str.rbegin(); it!=str.rend(); it++)
     {
        cout<<*it<<endl;  //reverse the string
     }
    return 0;
}