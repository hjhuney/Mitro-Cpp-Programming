#include <iostream>

using namespace std;

int main(){
    
    int orig_num {7};
    int num {0};
    
    
    //-- Multiply number by 2 and assign the result back to number
    num = orig_num * 2;

    //-- Add 9 to number and assign the result back to number
    num = num + 9;

    //-- Subtract 3 from number and assign the result back to number
    num = num - 3;

    //-- Divide number by 2 and assign the result back to number
    num = num / 2;

    //-- Subtract original_number from number and assign the result back to number
    num = num - orig_num;

    //-- Take the modulus 2 (%) of number and assign it back to number
    num = num % 2;
    
    // show result
    cout << "The new number is: " << num << endl;
    
    return 0;
}
