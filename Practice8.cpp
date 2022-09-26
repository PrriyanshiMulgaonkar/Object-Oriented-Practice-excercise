#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n);
main(){
    int result=0;
    int n,r;
    cout<<"Enter your value"<<endl;
    cin>>n;
    cout<<"Enter your value"<<endl;
    cin>>r;
    result= fact(n)/(fact(r)*fact(n-r));
    cout<<result;

}
int fact(int n){
    int m=1;
    for (int i = 1; i<n; i++)
    {
        m=m*i;
    }
    return(m);
}
