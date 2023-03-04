#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2, hipo;
    
    cout << "INGRESE CATETO 1: "<< endl;
    cin >> num1;
    
    cout << "INGRESE CATETO 2: "<< endl;
    cin >> num2;
    
    float num_1 = (num1 * num1);
    float num_2 = (num2 * num2);
    
    hipo = sqrt(num_1 + num_2);
    
    cout <<"LA HIPOTENUSA ES: "<< hipo<< endl;
    
return 0;
}
