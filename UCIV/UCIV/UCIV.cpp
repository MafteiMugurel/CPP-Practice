// UCIV.cpp : Calcula?i ultima cifra a sumei a doua numere naturale.
//


#include <iostream>

using namespace std;

int main()
{
	int y;
	int z;


    cout << "Primul numar";
    cin >> y;

    cout << "al doilea numar";
    cin >> z;

    int suma = y + z;

    int ultimaCifra = suma % 10;

    cout << " ultima cifra a sumei " << ultimaCifra << endl;

  
    
    

    return 0;


}

