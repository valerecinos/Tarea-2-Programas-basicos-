#include <iostream>
using namespace std;

int main () {
    
    int fig;
    
    cout << "INGRESE FIGURA GEOMETRICA" << endl;
    cout << "1. TRIANGULO"<<endl;
    cout << "2. RECTANGULO"<<endl;
    cout << "3. CUADRADO"<< endl;
    cout << "4. CIRCULO"<< endl;
    
    cin >> fig;
    

    if (fig == 1){
         cout<<"      / \\ \n";
            cout<<"     /   \\ \n";
            cout<<"    /     \\ \n";
            cout<<"   /       \\ \n"   ;
            cout<<"  /_________\\ \n\n";
    }
            
            else if (fig == 2){
                cout<<"* * * * * * * * \n";
            cout<<"*             * \n";
            cout<<"*             * \n";
            cout<<"*             * \n";
            cout<<"* * * * * * * * \n\n";
            }
            
            else if (fig == 3){
                 cout<<"* * * * * * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"* * * * * * \n\n"; 
            }
            
            else if (fig == 4){
                cout <<"       ** \n";
                cout<< "     *     *\n";
                cout<< "    *       *\n";
                cout<< "    *       *\n";
                cout<<"     *     *\n";
                cout<< "       **\n";
                
            }
        
  //  }
return 0;
}
