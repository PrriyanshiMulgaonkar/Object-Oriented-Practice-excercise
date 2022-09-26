#include<iostream>
#include<conio.h>
using namespace std;
void area(int);
void area(int,int);
main(){
    int m,n;
    cout<<"Enter values:";
    cin>>m;
    cin>>n;
    area(m);
    area(m,n);
}
void area(int m){
    cout<<3.14*m*m;
}
void area(int m,int n){
    cout<<m*n;
}