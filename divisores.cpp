#include <iostream>
using namespace std;

int main(){
    int num, i, res;
    
    cout << "---DIVISORES DE UN NUMERO---"<< endl;
    cout <<"----SELECCIONE UN NUMERO-----"<< endl;
    cin >> num;
    
    cout << "SUS DIVISORES SON: "<< endl;
    
    for (i=1; i<=num; i= i + 1){
        res =num % i;
        if (res == 0){
            cout << i << " "<< endl;
            
        }
    }
  cout << endl;
  
  return 0;
}
