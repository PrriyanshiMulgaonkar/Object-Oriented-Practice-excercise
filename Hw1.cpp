#include<iostream>
#include<conio.h>
using namespace std;
struct shop
{
    int item_code;
    char item_name;
    float quantity_hand;
    int ROL;
    int vendor_code;
};
void enter_details(shop*);
void print_details(shop*);
void print_all_details(shop*);

main(){
    shop s1[10];
    for (int i = 0; i < 10; i++){
        cout<<"Enter value"<<endl;
        enter_details(s1);
        print_details(s1);
        print_all_details(s1);
    }
}
void enter_details(shop*p){
     cout<<"Enter details"<<endl;
     for (int i = 0; i < 10; i++)
     {
         cin>>(*(p+i)).item_code;
         cin>>(*(p+i)).item_name;
         cin>>(*(p+i)).quantity_hand;
         cin>>(*(p+i)).ROL;
         cin>>(*(p+i)).vendor_code;

     }
}
void print_details(shop*p){
    cout<<"Printing the values"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<(p+i)->item_code;
        cout<<(p+i)->item_name;
        cout<<(p+i)->quantity_hand;
        cout<<(p+i)->ROL;
        cout<<(p+i)->vendor_code;

    }
    
}

void print_all_details(shop*p){
    cout<<"Printing values of quantity on hand & ROl"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<(p+i)->quantity_hand;
        cout<<(p+i)->ROL;
    }
    
}



