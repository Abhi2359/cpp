#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[]="235";
    char s2[]="54.78";
    long int x= strtol(s1,NULL,10); //converted into integer
    float y= strtof(s2,NULL);     // converted into float
    cout<<x<<endl<<y<<endl;
    return 0;
}