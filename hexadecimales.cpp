#include <iostream>
using namespace std;

int main() {
    int dec, r, i = 0;
    char hex[100];

    cout << "INGRESE UN NUMERO ";
    cin >> dec;

    while (dec != 0) {
        r = dec % 16;
        if (r < 10) {
            hex[i] = r + 48;
        } else {
            hex[i] = r + 55;
        }
        i++;
        dec /= 16;
    }

    cout << "NUMERO HEXADECIMAL: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }

    return 0;
}

