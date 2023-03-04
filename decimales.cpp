#include <iostream>
#include <string>

using namespace std;

string int_to_str(int num)
{
    string str = "";
    string units[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string tens[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string teens[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};

    int num_units = num % 10;
    int num_tens = (num / 10) % 10;
    int num_hundreds = (num / 100) % 10;
    int num_thousands = (num / 1000) % 10;

    if (num_thousands > 0)
    {
        str += units[num_thousands] + " mil ";
    }

    if (num_hundreds > 0)
    {
        str += units[num_hundreds] + " cientos ";
    }

    if (num_tens == 1 && num_units > 0)
    {
        str += teens[num_units];
    }
    else if (num_tens > 0 || num_units > 0)
    {
        if (num_tens > 0)
        {
            str += tens[num_tens] + " ";
        }
        if (num_units > 0)
        {
            str += units[num_units];
        }
    }

    return str;
}

string double_to_str(double num)
{
    int int_part = static_cast<int>(num);
    int decimal_part = static_cast<int>((num - int_part) * 100);

    string int_str = int_to_str(int_part);
    string decimal_str = int_to_str(decimal_part);

    return int_str + " punto " + decimal_str;
}

int main()
{
    double num;
    cout << "Ingrese numero"<< endl;
    cin >> num;
    string numStr = double_to_str(num);
    cout << num << " en letras es: " << numStr << endl;
    return 0;
}
