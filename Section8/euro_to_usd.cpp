#include <iostream>

using namespace std;

int main(){

    const double usd_per_euro {1.13};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in Euros: ";
    
    double euros {0.0};
    double us_dollars {0.0};
    
    cin >> euros;
    
    us_dollars = euros * usd_per_euro;
    
    cout << endl;    
    cout << euros << " euros is equal to " << us_dollars << endl;
    
    cout << endl;
    return 0;
}
