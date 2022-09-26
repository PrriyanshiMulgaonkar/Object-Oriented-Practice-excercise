#include<iostream>
#include<conio.h>
using namespace std;
int multiply(int*, int*);
main(){
    int result=0;
    int n1,n2;
    cout<<"Enter your value"<<endl;
    cin>>n1;
    cout<<"Enter your value"<<endl;
    cin>>n2;
    result= multiply(&n1, &n2);
    cout<<result;
}
int multiply(int*p, int*q)
{
   int m=1;
    int a=*p;
    int b=*q;
    for (int i = a; i <=b; i++)
    {
        m= m*i;
    }
    return(m);
}