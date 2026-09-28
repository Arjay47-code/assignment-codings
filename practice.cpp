#include <iostream>
using namespace std;

int main() {
    int choice, item, quantity;
    double price = 0, total;
    string itemName;

    cout << "==============================" << endl;
    cout << "      CAFE ORDERING SYSTEM" << endl;
    cout << "==============================" << endl;

    cout << "\nMENU" << endl;
    cout << "1. Drinks" << endl;
    cout << "2. Snacks" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        // DRINKS
        case 1:
            cout << "\n--- DRINKS ---" << endl;
            cout << "1. Iced Coffee - P50" << endl;
            cout << "2. Milk Tea    - P60" << endl;
            cout << "3. Soft Drink  - P40" << endl;
            cout << "Enter your item: ";
            cin >> item;
        

        switch (item){
        
                case 1:
                itemName = "Iced coffee";
                price = 40;
                break;

                case 2:
                itemName = "Milk Tea";
                price = 60;
                break;

                case 3:
                itemName = "Soft Drink";
                price = 40;
                break;

                default:
                cout<<"invalid drink choice"<<endl;
                return 0;
        }
        break;

     case 2:

                cout << "\n--- SNACKS ---" << endl;
                cout << "1. Burger  - P70" << endl;
                cout << "2. Fries   - P60" << endl;
                cout << "3. Sandwich    - P40" << endl;
                cout << "Enter your item: ";
                cin >> item;
    switch (item){

                case 1:
                itemName = "Burger";
                price = 70;
                break;

                case 2:
                itemName = "Fries";
                price = 60;
                break;

                case 3:
                itemName = "Sandwich";
                price = 40;
                break;

                default:
                cout<<"invalid Snacks...."<<endl;
                return 0;
        }
        break;
    default:
    cout<<"Invalid Selection!"<<endl;
    return 0;
    }
cout <<" Enter quantity: ";
cin>> quantity;

total= price * quantity;

cout<< "\n=================================="<<endl;
cout<< "  \tORDER SUMMARY "<<endl;
cout<< "\n=================================="<<endl;
cout<< "Quantity :"<< quantity <<endl;
cout<< "Price: P"<< price <<endl;
cout<< "Total: P"<< total <<endl;
cout<< "Item: "<< itemName  <<endl;
cout<< "\n=================================="<<endl;
cout<< " THANK YOUUU COME AGAIN!!"<<endl;



}
//sel tapos na po