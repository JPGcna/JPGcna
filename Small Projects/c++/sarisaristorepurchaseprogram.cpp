#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string itemCategory[]={"Food", "Drinks", "Utilities"};
    string foodItem[]={"item1", "item2", "item3"};
    string drinkItem[]={"item1", "item2", "item3"};
    string utilitiesItem[]={"item1", "item2", "item3"};
    int category, item, amount, payment, price = 0, change = 0;
    char response;
    
    cout<<"Welcome to my Sari-Sari Store\n";
    cout<<endl;
    
    do {
        
    for (int i = 0; i < 3; i++){
        cout<<(i + 1)<<". "<<itemCategory[i]<<endl;
    }
    cout<<endl;
        
    cout<<"Enter a number to pick an item category: ";
    cin>>category;
    
    switch (category) {
     
    case 1:   
    cout<<endl;
    
    for (int i = 0; i < 3; i++){
        cout<<(i + 1)<<". "<<foodItem[i]<<endl;
    }
    
    cout<<endl;
    
    cout<<"Enter a number to pick an item: ";
    cin>>item;
    
    switch (item) {
                case 1:
                    cout<<endl;
                    price = 1;
                    cout<<"The price of "<<foodItem[0]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<foodItem[0]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<foodItem[0]<<" is "<<price<<".";
                    break;
                
                case 2:
                    cout<<endl;
                    price = 2;
                    cout<<"The price of "<<foodItem[1]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<foodItem[1]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<foodItem[1]<<" is "<<price<<".";
                    break;
                
                case 3:
                    cout<<endl;
                    price = 3;
                    cout<<"The price of "<<foodItem[2]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<foodItem[2]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<foodItem[2]<<" is "<<price<<".";
                    break;
                    
                default:
                    cout<<endl;
                    cout<<"Invalid, please try again. \n";
                    cout<<endl;
    }
    
    break;
    
        case 2:
        cout<<endl;
    
        for (int i = 0; i < 3; i++){
            cout<<(i + 1)<<". "<<drinkItem[i]<<endl;
        }
    
        cout<<endl;
    
        cout<<"Enter a number to pick an item: ";
        cin>>item;
        
        switch (item) {
                case 1:
                    cout<<endl;
                    price = 4;
                    cout<<"The price of "<<drinkItem[0]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<drinkItem[0]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<drinkItem[0]<<" is "<<price<<".";
                    break;

                case 2:
                    cout<<endl;
                    price = 5;
                    cout<<"The price of "<<drinkItem[1]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<drinkItem[1]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<drinkItem[1]<<" is "<<price<<".";
                    break;

                case 3:
                    cout<<endl;
                    price = 6;
                    cout<<"The price of "<<drinkItem[2]<<" is "<<price<<".\n\n";
                    cout<<"How many amount of "<<drinkItem[2]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<drinkItem[2]<<" is "<<price<<".";
                    break;

                default:
                    cout<<endl;
                    cout<<"Invalid, please try again.\n";
                    cout<<endl;
        }
        
        break;
    
            case 3:
            cout<<endl;
    
            for (int i = 0; i < 3; i++){
                cout<<(i + 1)<<". "<<utilitiesItem[i]<<endl;
            }
    
            cout<<endl;
                
            cout<<"Enter a number to pick an item: ";
            cin>>item;
            
            switch (item) {
                case 1:
                    cout<<endl;
                    price = 7;
                    cout<<"The price of "<<utilitiesItem[0]<<" is ₱"<<price<<".\n\n";
                    cout<<"How many amount of "<<utilitiesItem[0]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<utilitiesItem[0]<<" is ₱"<<price<<".";
                    break;
                
                case 2:
                    cout<<endl;
                    price = 8;
                    cout<<"The price of "<<utilitiesItem[1]<<" is ₱"<<price<<".\n\n";
                    cout<<"How many amount of "<<utilitiesItem[1]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<utilitiesItem[1]<<" is ₱"<<price<<".";
                    break;

                case 3:
                    cout<<endl;
                    price = 9;
                    cout<<"The price of "<<utilitiesItem[2]<<" is ₱"<<price<<".\n\n";
                    cout<<"How many amount of "<<utilitiesItem[2]<<": ";
                    cin>>amount;
                    cout<<endl;
                    price *= amount;
                    cout<<"The updated price of "<<utilitiesItem[2]<<" is ₱"<<price<<".";
                    break;

                default:
                    cout<<endl;
                    cout<<"Invalid, please try again.\n";
                    cout<<endl;
            }
            
            break;
            
            default:
                cout<<endl;
                cout<<"Invalid, please try again.\n";
                cout<<endl;
    }
        
    cout<<endl;
    cout<<endl;

    cout<<"Your current list:\n"<<endl;
    cout<<left<<setw(15)<<"ITEM"
        <<left<<setw(0)<<"AMOUNT"
        <<right<<setw(15)<<"Price"<<endl;
    
    cout<<setfill('-')<<setw(40)<<"-"<<endl;
    cout<<setfill(' ');

    if (itemCategory[category - 1] == "Food")  {
    cout<<left<<setw(15)<<foodItem[item]
        <<right<<setw(3)<<amount
        <<right<<setw(16)<<"₱"<<price<<endl;
    }
        else if (itemCategory[category - 1] == "Drinks") {
        cout<<left<<setw(15)<<drinkItem[item]
            <<right<<setw(3)<<amount
            <<right<<setw(16)<<"₱"<<price<<endl;
        }
            else {
            cout<<left<<setw(15)<<utilitiesItem[item]
                <<right<<setw(3)<<amount
                <<right<<setw(16)<<"₱"<<price<<endl;

            }
            
    cout<<endl;
    
    cout<<"Would you like another item? (y/n): ";
    cin>>response;

    if (response == 'y') {
        cout<<endl;
    }
        else 
        break;
    
    } while (response != 'n');

    cout<<endl;

    cout<<"Your total price is ₱"<<price<<"\n"<<endl;

    do {
    cout<<"Please enter your payment: ";
    cin>>payment;

    if (payment == 0) {
        cout<<endl;
        cout<<"Purchase Cancelled.\n"<<endl;
        break;
    }
        else if (payment >= price) {
            cout<<endl;
            change = payment - price;
            cout<<"Purchase successful, your change is ₱"<<change<<"\n"<<endl;
            break;
        }
    
            else if (price > payment) {
                cout<<endl;
                cout<<"Insufficient Funds, Please try again.\n"<<endl;
            }
    
    } while (price > payment);
    
    cout<<"Thank you, please come again.";
    
    return 0;
}