#include <iostream>
using namespace std;

int main () {
    
    int tabla;
    
    cout << "-----TABLAS DE MULTIPLICAR-----"<< endl;
    cout << "-------------------------------"<< endl;
    cout << "INGRESE TABLA QUE DESEA VER"<< endl;
    cin >> tabla;
    
    if (tabla >= 1 && tabla <= 10) {
        cout << "TABLA DE MULTIPLICAR DE " << tabla << ":" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << tabla << " x " << i << " = " << tabla*i <<endl;
        }
    } else {
        cout << "SELECCIONE UN NUMERO DEL 1 AL 10" << endl;
    }

    return 0;
    }

