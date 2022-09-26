#include<iostream>
using namespace std;
class inventory
{
    int item_code;
    string item_name;
    int quantity_on_hand;

    public:
    void item_detail(int code, string name, int QOH)
    {
        item_code = code;
        item_name = name;
        quantity_on_hand=QOH;

    }
    void get_details()
    {
        cout<<"code for the entered item is: "<<item_code<<endl;
        cout<<"Name for the entered item is: "<<item_name<<endl;
        cout<<"Quantity on hand is: "<<quantity_on_hand<<endl;

    }
};

main()
{
    inventory item;
    item.item_detail(234342, "Shampoo", 23);
    item.get_details();
}
