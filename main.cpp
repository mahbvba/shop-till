#include <iostream>
#include <string>
#include <vector>
#include <unordered_map> 

using namespace std;

int main() { 
    unordered_map<string,float> prices;
    prices["0120001"] = 10.50;
    prices["0120002"] = 5.50;
    prices["0120003"] = 8.00;
    prices["0120004"] = 12.10;
    prices["0120005"] = 6.75;
    prices["0120006"] = 5.20;
    prices["0120007"] = 2.00;
    prices["0120008"] = 4.45;
    prices["0120009"] = 20.50;
    prices["0120010"] = 10.00;

    unordered_map<string,string> names;
    names["0120001"] = "Milk";
    names["0120002"] = "Bread";
    names["0120003"] = "Chocolate";
    names["0120004"] = "Towel";
    names["0120005"] = "Toothpaste";
    names["0120006"] = "Soap";
    names["0120007"] = "Pen";
    names["0120008"] = "Biscuits";
    names["0120009"] = "Lamp";
    names["0120010"] = "Battery";
    
    string token;
    string barcode;
    float cart_value=0;
    do {
        cout << "Enter command:";
        cin >> token;
        
        if(token.compare("quit") == 0){
            break;
        }
        if(token.compare("add") == 0){
            int quantity;
            cout << "Enter Barcode: \n";
            cin >> barcode;
            cout << "Enter quantity: \n";
            cin >> quantity;
            float price = prices[barcode];   
            string item_name = names[barcode];
            cart_value += quantity * price;
            cout << "Added ";
            cout << item_name;
            cout << "\n";
            cout << "Quantity ";
            cout << quantity;
            cout << "\n";
            cout << "Cart Value: ";
            cout << cart_value;
            cout << "\n";
            cout << "\n";
        }
        if (token.compare("help") == 0) {
            cout << "\nAvailable commands: \n";
            cout << "quit - Exits program. \n";
        }
    } while(true);
    return 0; 
} 
