#include<iostream>
#include<conio.h>
using namespace std;
class myClass
{
private:
    int a,b;
public:
    void set_ab(int m, int n)
    {
        a=m;
        b=n;
    }
    void get_ab(){
        cout<<a<<endl<<b;
    }
};
main(){
    myClass ob;
    ob.set_ab(10,20);
    ob.get_ab();
}
