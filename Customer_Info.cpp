#include <iostream>
#include <cstring>
using namespace std;
class customer_info
{
    char id[9];
    string customer;
    char ph_no[10];

public:
    void name(string cust)
    {
        customer = cust;
    }
    void enroll_id(char *p)
    {
        strcpy(id, p);
    }

    void contact_detail(char *p)
    {
        strcpy(ph_no, p);
    }
    void get_detail()
    {
        {
            cout << "Your details get recorded as - \n";
            cout << "Customer Name: " << customer << endl;
            cout << "Your Enroll Id: " << id << endl;
            cout << "Contact number: " << ph_no << endl;
        }
    }
};
/*
class Food_detail
{
    string nashta[5];
    string dopahar[15];
    int i;


public:
    void breakfast()
    {
        cout << "How many items do you want to order";
        cin >> i;
        int m = i;
        while (m > 0)
        {
            cout << "Enter items for breakfast: ";
            cin >> nashta[5];
            m--;
        }
    }
    void lunch()
    {
        cout << "How many items do you want to order";
        cin >> i;
        int j = 0;
        cout << "Enter items for breakfast: ";
        while (i > 0)
        {
            cout << j << ".";
            cin >> dopahar[j];
            i--;
            j++;
        }
    }
    void get_food_item(int l)
    {
        if (l == 1)
        {
            cout << "You will get following as your breakfast: "<<endl;
            for (int k = 0; k <= i; k++)
            {
                cout << k << "." << nashta[k];
            }
        }
        else if (l == 2)
        {
            {
            cout << "You will get following as your lunch: ";
            for (int k = 0; k <= i; k++)
            {
                cout << k << "." << dopahar[k];
            }
            }
        }
    }
};
*/
main()
{
    string naam;
    char ph[10];
    char enroll[9];
    customer_info user1;
    cout << "Enter your name" << endl;
    cin >> naam;
    cout << "Enter your enroll id" << endl;
    cin >> enroll;
    cout << "Enter your contact number" << endl;
    cin >> ph;
    user1.name(naam);
    user1.enroll_id(enroll);
    user1.contact_detail(ph);
    /*
    Food_detail user1_food;
    // user1_food.breakfast();
    user1_food.lunch();
    user1_food.get_food_item(2);
    // user1_food.get_food_item(1);
    */
   int choice;
   cout<<"Which menu do you want to know"<<"\n 1.Breakfast \n 2.Lunch \n 3.Dinner"<<endl;
   cin>>choice;
   if (choice==1)
   {
       cout<<"Menu for breakfast"<<endl;
       cout<<"1. Tea"<<endl;
       cout<<"2. Sandwich"<<endl;
       cout<<"3. Coffee"<<endl;
   }
   
}