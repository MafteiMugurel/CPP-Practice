// Globuri.cpp : Într-un brad sunt a globuri albe, de două ori mai multe globuri roșii, iar globuri verzi cu 3 mai puține ca numărul de globuri roșii. Câte globuri sunt în total ?


#include <iostream>
using namespace std;

int main()
{
	

	int globuriAlbe;
	cout << " Cate globuri albe sunt in pom? " << endl;
	cin >> globuriAlbe;

	int globuriRosii = 2 * globuriAlbe;
	cout << "Globuri rosii in pom : " << globuriRosii << endl;


	int globuriVerzi = globuriRosii / 3;
	cout << "Globuri verzi in pom : " << globuriVerzi << endl;

	int totalGloburi = globuriAlbe + globuriRosii + globuriVerzi;

	cout << "Numarul total de globuri din pom " << totalGloburi << endl;

	

	return 0;

}

