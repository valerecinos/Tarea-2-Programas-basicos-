#include <iostream>
using namespace std;

int main() {
    float num;
    float prod;
    float res;
    
    cout << "INGRESE PRIMER NUMERO"<< endl;
    cin >> num;
    cout << "INGRESE SEGUNDO NUMERO"<< endl;
    cin >> prod;
    
    res= num * prod;
    
    cout << "MULTIPLICACION: "<< endl;
    cout << "  "<< num << endl;
    cout << "X " << prod << endl;
    cout << "-----------"<< endl;
    cout << res<< endl;
    
return 0;
}
