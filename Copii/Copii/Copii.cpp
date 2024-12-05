// Copii.cpp : Într-o clasă sunt F fete și B băieți. Fiecare fată citește 3 pagini pe zi și fiecare băiat citește 2 pagini pe zi. Câte pagini vor citi copiii în n zile?
//

#include <iostream>
using namespace std;

int main()
{
	int fete;
	int baieti;
	cout << " cate fete sunt in clasa? " << endl;
	cin >> fete;

	cout << "cati baieti sunt in clasa?" << endl;
	cin >> baieti;

	int zile;
	cout << "cate zile au citit copii? " << endl;
	cin >> zile;

	int pagini = ((3 * fete + 2 * baieti) * zile);


	cout << "Numarul total de pagini citite in " << zile << " zile este: " << pagini << endl;





	return 0;

}


