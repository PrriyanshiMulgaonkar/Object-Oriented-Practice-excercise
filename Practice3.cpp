#include<iostream>
#include<conio.h>
using namespace std;
main(){
    int a;
    cout<<"Enter your value"<<endl;
    cin>>a;
    int b;
    cout<<"Enter your value"<<endl;
    cin>>b;

    int*p=&a;
    int*q=&b;
    cout<<"The summation are: "<<*p+*q<<endl;
    }