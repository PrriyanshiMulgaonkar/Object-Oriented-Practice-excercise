#include<iostream>
#include<conio.h>
using namespace std;
struct emp
{
    int emp_no;
    float salary;
    char emp_name;
};
main()
{
    emp e1;
    cout<<"Enter emp no.: ";
    cin>>e1.emp_no;
    cout<<"Enter emp salary.: ";
    cin>>e1.salary;
    cout<<"Enter emp name.: ";
    cin>>e1.emp_name;
    emp*q=&e1;
    cout<<q->emp_no;
    cout<<q->salary;
    cout<<q->emp_name;

}
     