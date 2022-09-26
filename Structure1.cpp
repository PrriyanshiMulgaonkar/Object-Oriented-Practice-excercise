#include<iostream>
#include<conio.h>
using namespace std;
struct emp
{
    int emp_no;
    float salary;
    char emp_name[20];
};

main()
{
    emp e1[20];
    for (int i = 0; i<4; i++)
    {
        cout<<"Enter emp no.: ";
        cin>>e1[i].emp_no;
        cout<<"Enter emp salary.: ";
        cin>>e1[i].salary;
        cout<<"Enter emp name.: ";
        cin>>e1[i].emp_name;

    }
    


    for (int i = 0; i<4; i++)
    {
        cout<<e1[i].emp_no;
        cout<<e1[i].salary;
        cout<<e1[i].emp_name;
    }
}
