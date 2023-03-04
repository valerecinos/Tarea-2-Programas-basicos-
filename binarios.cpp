#include <iostream>
using namespace std;

int main() {
    int dec, binario = 0, i=1;
    
    cout << "INGRESE UN NUMERO"<< endl;
    cin >> dec;
    
    while(dec > 0){
        int r = dec % 2;
        binario += r * i;
        dec /= 2;
        i *= 10;
    }
    cout << "EL NUMERO BINARIO ES: " << binario << endl;
    return 0;
    }
