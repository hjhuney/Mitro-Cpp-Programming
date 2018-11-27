#include <iostream>

using namespace std;

int main(){

    // initialize 4 ints to 0
    int total {};
    int num1 {};
    int num2 {};
    int num3 {};
    
    const int count {3};
    
    cout << "enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    // cast the total to a double
    average = static_cast<double>(total) / count;
    
    // old c-style cast
    // average = (double)total/count; 
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the number is " << average << endl;
    
    
    cout << endl;
    return 0;
}
