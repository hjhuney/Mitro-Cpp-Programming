#include <iostream>

using namespace std;

int main(){

    /****************************
     *  Character type
     * *************************/
     
     char middle_initial {'R'}; // notice single quotes around char
     cout << "My middle initial is " << middle_initial << endl;
     
    /****************************
     *  Integer types
     * *************************/
     
     unsigned short int exam_score {55}; 
     cout << "My exam score was " << exam_score << endl;
     
     int countries_represented {65};
     cout << "there were " << countries_represented << " countries represented in my meeting" << endl;
     
     long people_in_florida {20'610'000};
     cout << "There are about " << people_in_florida << " people in Florida" << endl;
     
     long long distance_to_alpha_centauri {9'461'000'000'000};
     cout << "the distance to Alpha Centuauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /****************************
     *  Floating point types
     * *************************/
     
     float car_payment {401.23};
     cout << "my car payment is " << car_payment << endl;
     
     double pi {3.14159};
     cout << "Pi is " << pi << endl;
     
     long double large_amount {2.7e120};
     cout << large_amount << " is a very big number" << endl;
     
    /****************************
     *  Boolean type
     * *************************/
     
     bool gameOver {false};
     cout << "The value of gameOver is " << gameOver << endl;
     
    /****************************
     *  Overflow example
     * *************************/
     
//     short value1 {30000};
//     short value2 {1000};
//     short product {value1 * value2};
//     
//     cout << "the sum of " << value1 << " and " << value2 << " is " << product << endl;    
    
    return 0;
}
