#include <iostream>

using namespace std;

int main(){
 
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickle_value {5};
    
    int change_amt {};
    
    cout << "Enter an amount in cents: ";
    cin >> change_amt;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = change_amt / dollar_value;
    balance = change_amt % dollar_value;
    
    quarters = balance / quarter_value;
    balance = balance % quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickle_value;
    balance %= nickle_value;
    
    pennies = balance;
    
    cout << "\nYou can provide the change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl << endl;
    

    return 0;
}
