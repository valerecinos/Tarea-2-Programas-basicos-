#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){

int opcion;


	cout << "_____________________________"<< endl;
            cout << "-_-_-SELECCIONE PROGRAMA-_-_-"<< endl;
            cout << "1.  SUMA, RESTA, MULTIPLICACION Y DIVISION" << endl;
            cout << "2.  DETERMINAR SI UN NUMERO ES PAR O IMPAR" << endl;
            cout << "3.  CONVERSOR DE UNIDADES" << endl;
            cout << "4.  DETERMINAR SI ES PALINDROMO" << endl;
            cout << "5.  CONVERSION DE NUMEROS ARABIGOS A DECIMALES" << endl;
            cout << "6.  CONVERSION DE NUMEROS A LETRAS" << endl;
            cout << "7. CONVERSION DE NUMEROS CON DECIMALES A LETRAS" << endl;
            cout << "8.  TABLA DE MULTIPLICAR DEL NUMERO 5" << endl;
            cout << "9.  TABLAS DE MULTIPLICAR DEL 1 AL 10" << endl;
            cout << "10. MULTIPLICACION DE FORMA GRAFICA" << endl;
            cout << "11. CONVERSION DE NUMEROS DECIMALES A BINARIOS" << endl;
            cout << "12. CONVERSION DE DECIMALES A HEXADECIMALES" << endl;
            cout << "13. CREAR FIGURAS GEOMETRICAS" << endl;
            cout << "14. MOVER UN PUNTO EN TODA LA PANTALLA" << endl;
            cout << "15. CAJERO AUTOMATICO" << endl;
            cout << "16. CALCULAR HIPOTENUSA" << endl; 
            cout << "17. CALCULAR PROMEDIO DE NOTAS" << endl;
            cout << "18. CALCULAR DIVISORES DE UN NUMERO" << endl;
            cout << "19. CONVERSION DE MONEDA"<< endl;
            cout << "20. JUEGO SNAKE "<< endl;
            
            
            cin >> opcion;
            
    if (opcion == 1){
    	double num1, num2;
    char op;
    
    cout << "Ingrese Numero " << endl;
    cin >> num1;
    
    cout << "ingrese operador (+,-,*,/)" << endl;
    cin >> op;
    
    cout << "ingrese segundo Numero " << endl;
    cin >> num2;
    
    if (op == '+') {
        cout << num1 << "+" << num2<< "="<< num1 + num2 << endl;
    }
    else if (op == '-'){
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    }
    
    else if (op == '*'){
        cout << num1 << "*"<< num2 << num1 * num2 << endl;
    }
    else if (op = '/')
    cout << num1 << "/"<< num2 << num1 /num2 << endl;
    
    else {
        cout << "Ingrese un valor valido" << endl;
    }
	}
	else if(opcion == 2){
		int n;
	
	cout << "Ingrese Numero" << endl;
    cin >> n;
    
    if(n%2==0){
        cout << "El numero es par"<< endl;
    }
        else {
            cout << "El numero es impar"<< endl;
        }
	}
	
	else if(opcion ==3){
		int choice;
    double kilometros;
    double millas;
    double metros;
    double pulgadas;
    double libras;
    double kilos;
    
    cout << "-_-_-SELECCIONE OPCION-_-_-" << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Millas a Kilometros" << endl;
    cout << "3. Metros a Pulgadas" << endl;
    cout << "4. Pulgadas a Metros"<< endl;
    cout << "5. Libras a Kilos" << endl;
    cout << "6. Kilos a Libras" << endl;
    
    cin >> choice;
    
    if (choice ==1){
        
        cout << "Ingrese Kilometros: " << endl;
        cin >> kilometros;
        
        cout << "Millas: "<< kilometros / 1.609 << endl;
        
    }
    else if(choice == 2){
        cout << "Ingrese Millas" << endl;
        cin >> millas;
        
        cout << "Kilometros: "<< millas * 1.609<< endl;

    }
    else if(choice == 3){
        cout << "Ingrese Metros" << endl;
        cin >> metros;
        
        cout << "Pulgadas: "<< metros * 39.37 << endl;
    }
    else if (choice == 4){
        cout << "Ingrese Pulgadas" << endl;
        cin >> pulgadas;
        
        cout << "Metros: "<< pulgadas / 39.37 << endl;
    }
    else if (choice == 5) {
        cout << "Ingrese Libras" << endl;
        cin >> libras;
        
        cout << "Kilos: " << libras / 2.205<< endl;
    }
    else if (choice == 6) {
        cout << "Ingrese Kilos" << endl;
        cin >> kilos;
        
        cout << "Libras: "<< kilos *2.205 << endl;
    }
    
    
    else {
        cout << "---Ingrese una opcion valida---" << endl;
    }
	}
	else if(opcion == 4){
		#include <cstdlib>
		system("palindrome.exe");
	}
	else if(opcion ==5){
		#include <cstdlib>
		system("romanos.exe");
	}
	
	else if(opcion == 6){
		system("numerosaletras.exe");
}

    else if(opcion==7){
	system("decimales.exe");
}

else if(opcion == 8){
	system("tabla5.exe");
}

else if(opcion==9){
	system("tablas10.exe");
}

else if(opcion==10){
	system("multgraf.exe");
}

else if (opcion==11){
	system("binarios.exe");
}

else if (opcion==12){
	system("hexadecimales.exe");
}

else if (opcion==13){
	system("figuras.exe");
}

else if(opcion==14){
	system("punto.exe");
}

else if(opcion==15){
	system("cajero.exe");
}

else if(opcion==16){
	system("hipotenusa.exe");
}

else if(opcion== 17){
	system("promedio.exe");
}

else if(opcion ==18){
	system("divisores.exe");
}	

else if (opcion == 19){
	system("moneda.exe");
}

else if (opcion == 20){
	system("snake.exe");
}

	else{
		cout << "***Ingrese una opcion valida***" << endl;
	}
return 0;
}
