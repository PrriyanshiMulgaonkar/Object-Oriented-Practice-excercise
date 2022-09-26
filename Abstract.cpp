#include <iostream>
using namespace std;
class base{
    int a;
    public:
    void seta(int m)
    {
        a=m;
    }
    // Pure vitual function
    virtual void show()=0;
};
class derived:public base{
    int b;
    public:
     void setb(int m)
    {
        b=m;
    }
    void show(){
        cout<<"Inside the derived class";
    
    }
};
main(){
    derived d;
    d.show();
}
