#include<iostream>
#include<conio.h>
using namespace std;
main(){
    int arr[4]={100,200,300,400};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    for (int i = 0; i < 4; i++)
{
    cout<<arr+i<<endl;
}
for (int i = 0; i < 4; i++)
{
    cout<<*(arr+i)<<endl;
}

}
