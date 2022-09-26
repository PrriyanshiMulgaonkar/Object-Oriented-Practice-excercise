#include<iostream>
using namespace std;
class worker{
    int emp_no;char name;float salary;
    public:
    worker(int m, char n, float s)
    {
        emp_no=m;
        name=n;
        salary=s;

    }
    void get_w()
    {
        cout<<"Emp no is: "<<emp_no<<" The nane is: "<< name<< " The salary is: "<<salary<<endl;
    }
};
class officer{
    float hra; float da;
    public:
    officer(float x, float y)
    {
        float hra=x;
        float da=y;
    }
    void get_o()
    {
        cout<<"Hra of emp is: "<<hra<<" Da of emp is"<<da<<endl;
    }
};
class manager:public worker,public officer{
    float sal;
    float erl;
    public:
    manager(int m,char n,float s, float x, float y ,float ta): worker(m,n,s),officer(x,y){
        float gsla;
        gsla=s+x+n+ta;
        sal=ta;
        erl=gsla;
 }
 void get_m(){
     get_w();
     get_o();
     cout<<sal<<erl<<endl;
 }

};

main(){
    manager ob(101, 'D', 5000, 2.6, 1.05, 41);
    ob.get_m();

}