#include<iostream>
#include<conio.h>
using namespace std;
void  enter_array(int*);
void print_array(int*);
main(){
    int emp[4];
    cout<<"Enter array"<<endl;
    enter_array(emp);
    cout<<"Print"<<endl;
    print_array(emp);
}
void enter_array(int*p){
    for (int i = 0; i < 4; i++)
    {
       cin>>*(p+i);
    }
    
}
void print_array(int*p){
    for (int i = 0; i < 4; i++)
    {
       cout<<*(p+i);
    }
    
}