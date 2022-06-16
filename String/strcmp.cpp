#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[]="Hello";
    char s2[]="hellO";
    cout<<strcmp(s1,s2)<<endl;
    // if s1== s2 the gives 0 as output
    //if s1>s2 the gives +ve output
    //if s1<s2 then gives -ve output
    return 0;
}