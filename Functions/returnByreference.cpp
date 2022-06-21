/*Return by Reference
• A function cal return reference 
• It should not return reference of its local variables
• It can return formal parameters if they are reference*/
#include<iostream>
int & fun(int &a)
{
cout<<a;
return a;
}
int main()
{
int x=10;
fun(x)=25;
cout<<x;
}