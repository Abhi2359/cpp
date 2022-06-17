#include<iostream>
using namespace std;

int main () { 
    string str1="Hello";
    string str2="hello"; // compare ASCII value
    cout<<str1.compare(str2)<<endl;
      //if str1==str2 then output is zero
     //  if str2>str1 then output is -ve
      // if str2<str1 then output is +ve 

    return 0;
}