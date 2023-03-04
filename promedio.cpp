#include <iostream>
using namespace std;

int main(){
    int contador = 0;
    int total = 0;
    int notas, num;
    float av;
    
    cout << "INGRESE NUMERO DE NOTAS"<< endl;
    cin >> notas;
    
    if (notas == 0){
        cout << "OPCION NO VALIDA\n";
        cout << "INGRESE NUMERO DE NOTAS\n";
        return 0;
    }
    
    while(contador < notas){
        cout << "INGRESE NOTA" << endl;
        cin >> num;
        total = total +  num;
        contador = contador + 1;
    }
    
    cout << "LA SUMA FINAL ES: " << total << endl;
    av =  (float) total/notas;
    
    cout << "EL PROMEDIO FINAL ES: "<< av << endl;
}
