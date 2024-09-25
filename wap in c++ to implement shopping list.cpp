#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item {
    string name;
    int quantity;
    float price;
    Item(string itemName, int itemQuantity, float itemPrice) {
        name = itemName;
        quantity = itemQuantity;
        price = itemPrice;
    }
};
void displayList(const vector<Item>& shoppingList) {
    cout << "\nShopping List:\n";
    cout << "--------------------------------\n";
    cout << "No.\tItem\tQuantity\tPrice\n";
    cout << "--------------------------------\n";

    float totalCost = 0;
    for (size_t i = 0; i < shoppingList.size(); ++i) {
        cout << i + 1 << "\t" << shoppingList[i].name << "\t" 
             << shoppingList[i].quantity << "\t\t" 
             << shoppingList[i].price * shoppingList[i].quantity << "\n";
        totalCost += shoppingList[i].price * shoppingList[i].quantity;
    }

    cout << "--------------------------------\n";
    cout << "Total Cost: $" << totalCost << endl;
}

int main() {
    vector<Item> shoppingList;
    int choice;

    do {
        cout << "\n1. Add item\n2. Display shopping list\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int quantity;
            float price;

            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter item quantity: ";
            cin >> quantity;
            cout << "Enter item price: ";
            cin >> price;
            shoppingList.push_back(Item(name, quantity, price));

        } else if (choice == 2) {
            if (shoppingList.empty()) {
                cout << "Shopping list is empty.\n";
            } else {
                displayList(shoppingList);
            }
        }
    } while (choice != 3);

    return 0;
}

