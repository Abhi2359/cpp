#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[20]="Good";
    char s2[20]="";
 //   strcpy(s2,s1);  //strcpy(destination,source)

  // cout<<s2<<endl;
    strncpy(s2,s1,2);  //strncppy( destination, source ,length)
    cout<<s2<<endl;

    return 0;
}