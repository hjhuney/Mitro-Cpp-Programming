#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    
    cout << "\nEnter the number of small rooms (less than 150 sq ft) you need cleaned: ";
    int small_rooms_needed {0};
    cin >> small_rooms_needed;
    
    cout << "Enter the number of large rooms (more than 150 sq ft) you need cleaned: ";
    int large_rooms_needed {0};
    cin >> large_rooms_needed;
        
    const double small_room_cost {32.50};
    const double large_room_cost {40.25};
    const double tax_rate {0.06};
    
    cout << "\nThe price per small room is $" << small_room_cost << endl;
    cout << "The price per large room is $" << large_room_cost << endl;
    
    double sr_cost {small_room_cost * small_rooms_needed};
    double lr_cost {large_room_cost * large_rooms_needed};
    double pretax_cost {sr_cost + lr_cost};
    cout << "\nTotal pre-tax cost is: $" << pretax_cost << endl;
    
    double total_tax {pretax_cost * tax_rate};
    cout << "Total tax is: $" << total_tax << endl;
    cout << "==================================" << endl;
    cout << "Total estaimted cost with tax: $" << total_tax + pretax_cost << endl;    
    
    cout << endl << endl;
    return 0;
}
