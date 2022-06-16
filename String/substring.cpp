#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[]= "Programming";
    char s2[]= "gram";
    if (strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2)<<endl;
    }
    else
    {
        cout<<"NOT FOUND";
    }
    
    
    return 0;
}