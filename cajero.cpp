#include <iostream>
using namespace std;

int main(){
    
    const string pin= "5678";
    cout <<"BIENVENIDO AL CAJERO AUTOMATICO"<< endl;
    cout << "PARA INGRESAR INSERTE PIN" << endl;
    string clave =" ";
    cin >> clave;
    if (clave != pin){
        cout << "***CLAVE INCORRECTA***"<< endl;
        
        return 0;
    }
    cout << "CLAVE CORRECTA"<< endl;
    cout << "BIENVENIDO"<< endl;
    
    
    double fondos= 6700;
    string opcion= " ";
    while (opcion != "2"){
        cout << "FONDOS DISPONIBLES: "<< fondos<<endl;
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> opcion;
        if (opcion == "1"){
            
            double retiro;
            cout << "INGRESE CANTIDAD A RETIRAR"<< endl;
            cin >> retiro;
            
            if (retiro > fondos || retiro <= 0)
            {
                cout << "***NO TIENE LOS FONDOS SUFICIENTES PARA HACER ESA TRANSACCION***"<< endl;
            }
            else{
                fondos = fondos - retiro;
                cout << "RETIRO APROBADO"<< endl;
                cout <<"HA RETIRADO: "<< retiro << endl;
                
            }
            
        }
    }
    return 0;
}
