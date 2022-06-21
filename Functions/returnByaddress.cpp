/*Return by Address
• A function can return address of memory
• It should not return address of local variables, which will be disposed after function ends
• It can return address of memory allocated in heap*/
#include<iostream>
using namespace std;
int * fun(int n)
{
int *p=new int[n];
for(int i=0;i<n;i++)
p[i]=i+1;
return p;
}
int main()
{
int *ptr=fun(5);
for(int i=0;i<5;i++)
cout<<i<<endl;