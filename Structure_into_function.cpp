#include<iostream>
#include<conio.h>
using namespace std;

struct emp
{
    int empcode;
    float salary;
    char emp_name[20];
};
void enter_values(emp*);
void print_value(emp*);
main(){
    emp e1[4];
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter value";
        enter_values(e1);
        print_value(e1);

}
}
    
void enter_values(emp*p)
{
    cout<<"Enter id";
    for (int i = 0; i < 4; i++)
    {
        cin>>(*(p+i)).empcode;
        cin>>(*(p+i)).salary;
        cin>>(*(p+i)).emp_name;
    }
    

}
void print_value(emp*p)
{
    cout<<"Print values";
    for (int i = 0; i < 4; i++)
    {
        cout<<(p+i)->empcode;
        cout<<(p+i)->salary;
        cout<<(p+i)->emp_name;
    }

}

