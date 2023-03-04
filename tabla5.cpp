#include <iostream>
using namespace std;

int main() {
    int num;
    
    
    cout << "-----TABLA DE MULTIPLICAR DEL NUMERO 5-----"<< endl;
    cout << "-------------------------------------------"<< endl;
    cout << "INGRESE NUMERO"<< endl;
    cout << "O " << endl;
    cout << "MOSTRAR TABLA COMPLETA: press 0"<< endl;
    cin >> num;
    

   // cout << "El resultado es: "<< num * 5 << endl;
    
    if(num == 0){
        int tabla;
        tabla = 5;
        cout << "TABLA DE MULTIPLICAR DE " << tabla << ":" << endl;
        for (int i = 1; i <= 15; i++) {
            cout << tabla << " x " << i << " = " << tabla*i <<endl;
    }
    }
    else {
        cout << "El resultado es: "<< num * 5 << endl;
    }
    
return 0;
}
