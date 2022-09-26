#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void seta(int m)
    {
        a = m;
    }
    // Pure vitual function
    virtual void show() = 0;
};
class derived : public base
{
protected:
    int b;

public:
    void setb(int m)
    {
        b = m;
    }
    virtual void show() = 0;
};
class derived2 : public derived
{
protected:
    int c;

public:
    void setc(int m)
    {
        c = m;
    }
    void show()
    {
        cout << "Inside the derived class";
        cout << a << b << c;
    }
};
main()
{
    derived2 ob;
    ob.seta(10);
    ob.setb(20);
    ob.setc(30);
    ob.show();
    // base *ptr=new derived2();    
    // ptr->seta(10);
    // ptr->setb(20);
    // ptr->setc(30);
    // ptr->show();
}