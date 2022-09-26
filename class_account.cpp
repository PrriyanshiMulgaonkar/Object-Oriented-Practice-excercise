#include<iostream>
#include<conio.h>
using namespace std;
class bank_ac
{
    int ac_no;
    float balance;
    public:
    void opening(int m, int n)
    {
        ac_no=m;
        balance=n;
    }
    void deposit(int m)
    {
        balance+=m;
    }
     void withdrawl(int m)
    {
        balance=balance-m;
        if (balance<5000)
        {
            balance+=m;
            cout<<"Balance should not be less than 5000"<<endl;
        }
         
    }
     void show_balance()
    {
        cout<<ac_no<<endl;
        cout<<balance<<endl;
    }

};
main(){
    bank_ac x,y,z;
    x.opening(101,10000);
    x.withdrawl(2000);
    x.show_balance();
    y.opening(102, 2000);
    y.deposit(1000);
    y.withdrawl(1000);
    y.show_balance();

}