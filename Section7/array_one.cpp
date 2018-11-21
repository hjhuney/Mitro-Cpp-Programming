#include <iostream>

using namespace std;

int main(){
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7; // set the 1st element in hi_temps to 100.7
    
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    
    cout << "\n===== EXERCISE #1 =====" << endl;
    
    int arr [10] {0};
    
    // assign 100 to first element and 1000 to last element of arr
    arr[0] = 100;
    arr[9] = 1000;
    
    cout << "First and last elements of array = (" << arr[0] << ", " << arr[9] << ")\n\n" << endl;
    
    return 0;
}
