#include<iostream>
using namespace std;

int main () { 
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;
    cout<<"Enter Basic Salary"<<endl;
    cin>>basic;
    cout<<"Enter percent of Allowances"<<endl;
    cin>>percentAllow;
     cout<<"Enter percent of Deductions"<<endl;
    cin>>percentDeduct;

    netSalary= basic+(basic*percentAllow/100) -(basic*percentDeduct/100);
    cout<<"Net salary is:"<<netSalary;


    return 0;
}