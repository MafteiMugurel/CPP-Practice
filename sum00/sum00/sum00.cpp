// Să se scrie un program care citeşte de la tastatura două numere naturale şi determină suma lor.
//

#include <iostream>

using namespace std;


int main() {
    // Declararea variabilelor pentru cele două numere
    unsigned int num1, num2;

    // Citirea primului număr
    cout << "Introduceti primul numar: ";
    cin >> num1;

    // Citirea celui de-al doilea număr
    cout << "Introduceti al doilea numar: ";
    cin >> num2;

    // Calcularea sumei celor două numere
    unsigned int suma = num1 + num2;

    // Afișarea rezultatului
    cout << "Suma celor doua numere este: " << suma << endl;

    return 0; // Programul s-a terminat cu succes
}

