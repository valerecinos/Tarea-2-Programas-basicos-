#include <iostream>
using namespace std;

int main() {
    
    float quet, dol, eu, pesos, cambio;
    int opcion;
    
    cambio = 7.81;
    
    cout << "--MENU--"<< endl;
    cout << "1. DOLARES A QUETZALES" << endl;
    cout << "2. QUETZALES A DOLARES" << endl;
    cout << "3. EUROS A QUETZALES "<< endl;
    cout << "4. QUETZALES A EUROS "<< endl;
    cout << "5. PESOS MX A QUETZALES "<< endl;
    cout << "6. QUETZALES A PESOS MX "<< endl;
    cin >> opcion;
    
    if (opcion == 1){
        
        cout << "DOLARES A QUETZALES "<< endl;
        cout << "INGRESE DOLARES " << endl;
        cin >> dol;
        cout << "LA CANTIDAD EN QUETZALES ES: "<< dol*cambio<< endl;
    }
    else if (opcion == 2){
        cout <<"QUETZALES A DOLARES "<< endl;
        cout <<" INGRESE QUETZALES "<< endl;
        cin >> quet;
        cout << "LA CANTIDAD EN DOLARES ES DE " << quet / cambio << endl;
    }
    else if(opcion == 3){
        cambio = 8.32;
        cout << "EUROS A QUETZALES "<< endl;
        cout << "INGRESE EUROS " << endl;
        cin >> eu;
        cout << "LA CANTIDAD EN QUETZALES ES DE "<< eu * cambio << endl;
    }
        else if (opcion == 4){
            cambio = 8.32;
        cout << "QUETZALES A EUROS "<< endl;
        cout << "INGRESE QUETZALES "<< endl;
        cin >> quet;
        cout << "LA CANTIDAD EN EUROS ES DE " << quet / cambio << endl;
    }
    
    else if (opcion == 5){
        cambio = 0.44;
        cout << "PESOS MX A QUETZALES " << endl;
        cout << "INGRESE PESOS " << endl;
        cin >> pesos;
        cout << "LA CANTIDAD EN QUETZALES  ES DE " << pesos * cambio << endl;
    }
    else if (opcion == 6){
        cambio = 0.44;
        cout << "QUETZALES A PESOS " << endl;
        cout << "INGRESE QUETZALES " << endl;
        cin >> quet;
        cout<< "LA CANTIDAD EN PESOS  ES DE " << quet /  cambio << endl;
    }
}
    

