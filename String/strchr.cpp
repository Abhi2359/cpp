#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[]="Programming";
    cout<<strchr(s1,'g')<<endl; //gramming // Starts from leftmost side
    cout<<strrchr(s1,'g' )  //g // Starts from rightmost side
      
    return 0;
}