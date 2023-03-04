#include <iostream>
#include <iostream>
#include <string>

using namespace std;

string ararom(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romano[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string romano_num = "";

    int i = 0;
    while (num > 0) {
        while (num >= decimal[i]) {
            romano_num += romano[i];
            num -= decimal[i];
        }
        i++;
    }

    return romano_num;
}

int main() {
    int num;
    cout << "Ingrese un Numero Decimal: "<< endl;
    cin >> num;

    string romano_num = ararom(num);
    cout << "Numero Romano: " << romano_num << endl;

    return 0;
}

