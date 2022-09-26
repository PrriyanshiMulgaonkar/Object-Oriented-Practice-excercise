#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class myclass{
    int a;
    public:
    void seta(int m){
        a=m;
    }
    void geta()
    {
        cout<<a;
    }
};
main(){
    myclass ob,ob2;
    ob.seta(100);
    ofstream out("Hello World.txt", ios::out);
    out.write((char*)&ob,sizeof(myclass));
    out.close();
    ifstream in("Hello World.txt", ios::in);
    in.read((char*)&ob2, sizeof(myclass));
    ob2.geta();
}