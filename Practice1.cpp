#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num = 0;
    cout<<"Enter your number" << endl;
    cin>>num;
    if (num>0){
        cout<<"Your absoulate value is "<<num;
    }
    else {
        cout<<"Your absoulate value is "<<-(num);

    }     
    return 0;
}