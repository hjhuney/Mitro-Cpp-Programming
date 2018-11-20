#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nEnter the number of rooms you need cleaned: ";
    
    int rooms_needed {0};
    cin >> rooms_needed;
    
    const double room_cost {32.50};
    const double tax_rate {0.06};
    
    cout << "\nThe price per room is $" << room_cost << endl;
    
    double pretax_cost {room_cost * rooms_needed};
    cout << "\nTotal pre-tax cost is: $" << pretax_cost << endl;
    
    double total_tax {pretax_cost * tax_rate};
    cout << "Total tax is: $" << total_tax << endl;
    cout << "====================" << endl;
    cout << "Total estaimted cost with tax: $" << total_tax + pretax_cost << endl;    
    
    cout << endl << endl;
    return 0;
}
