#include<iostream>
#include<conio.h>
using namespace std;
int add_sum(int*, int*);
main(){
    int result=0;
    int n1,n2;
    cout<<"Enter your value"<<endl;
    cin>>n1;
    cout<<"Enter your value"<<endl;
    cin>>n2;
    result= add_sum(&n1, &n2);
    cout<<result;
}
int add_sum(int*p, int*q)
{
   int m=0;
    int a=*p;
    int b=*q;
    for (int i = a; i <=b; i++)
    {
        m= m+i;
    }
    return(m);
}