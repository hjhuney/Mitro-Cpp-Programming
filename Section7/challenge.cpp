#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    cout << "===== Challenge #1 =====\n\n";

    vector <int> vec {10,20,30,40,50};
    
    vec.at(0) = 100;
    vec[4] = 1000;
    
    cout << "Vec 0 value = " << vec.at(0) << endl;
    cout << "Vec 4 value = " << vec[4] << endl; 
        
    cout << endl << endl;
    
    cout << "===== Challenge #2 =====\n\n";
    
    vector <int> vec1;
    vector <int> vec2;
    
    vec1.push_back(10);
    vec1.push_back(20);
    
    vec2.push_back(100);
    vec2.push_back(200);
    
    cout << "vec1 contains " << vec1.at(0) << " and " << vec1.at(1) << endl;
    cout << "vec2 has a size of " << vec2.size() << " and contains " << vec2.at(0) << " and " << vec2.at(1) << endl;
    
    vector <vector <int>> vec_2d;
    
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);
    
    cout << "\nvec_2d: " << endl;
    cout << vec_2d.at(0).at(0) << " " << vec_2d.at(0).at(1) << endl;
    cout << vec_2d.at(1).at(0) << " " << vec_2d.at(1).at(1) << endl;
    
    vec1.at(0) = 1000;
    
    cout << "\nvec_2d: " << endl;
    cout << vec_2d.at(0).at(0) << " " << vec_2d.at(0).at(1) << endl;
    cout << vec_2d.at(1).at(0) << " " << vec_2d.at(1).at(1) << endl;
    
    cout << "\nvec1: " << endl;
    cout << vec1.at(0) << endl;
    cout << vec1.at(1) << endl; 
    cout << "vec1 contains " << vec1.size() << " elements" << endl;
    
    
    cout << endl << endl;
    return 0;
}
