#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class stringg
{
    char text[20];

public:
friend stringg operator+(char*,string);
    void setstring(char *p)
    {
        strcpy(text, p);
    }
    void print()
    {
        cout << text;
    }
    stringg operator+(char*p){
        stringg both;
        strcpy(both.text,this->text);
        strcat(both.text,p);
        return both;
    }
    stringg operator=(stringg s)
    {
        strcpy(this->text,s.text);
        return (*this);

    }
    stringg operator=(char*p){
        strcpy(this->text,p);
        return *this;
    }

        
};
main()
{
    stringg s1,s2;
    s1.setstring("  Hello");
    s1.print();
    s2=s1+" World";
    s2.print();
    s1=s2;
    // s1.print(); 

}