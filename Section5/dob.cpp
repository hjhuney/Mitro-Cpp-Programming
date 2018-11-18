#include <iostream>

using namespace std;

int main(){
    
    int m {};
    int d {};
    int y {};
    
    cout << "Enter your date of birth (mm dd yyyy):";
    
    cin >> m;
    cin >> d;
    cin >> y;
    
    cout << "Date of Birth:" << m << "/" << d << "/" << y << endl;
    return 0;
}
