#include<iostream>
using namespace std;

int main () { 
   char S[10]="Hello";
    cout<<S<<endl;
    char S[]={'H','e','l','l','o','\0'};
    cout<<S<<endl;
    char s[]={65,66,67,68,69,'\0'};
    cout<<s<<endl;  //ABCDE
    char *a ="Hello";
    cout<<a<<endl; 
    return 0;
}