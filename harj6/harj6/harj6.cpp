#include <iostream>
using namespace std;

void main()
{
	int RAHAT;
	int HINTA;

	cout << "Paljonko sinulla on rahaa (euron tarkkuudella)? ";
	cin >> RAHAT;
	cout << "Paljonko lihapiirakka maksaa (euron tarkkuudella)? ";
	cin >> HINTA;
	if (RAHAT > HINTA)
		RAHAT = RAHAT - HINTA;
		cout << "Sinulle j�� lihapiirakan oston j�lkeen " <<RAHAT << " euroa.";
	else // t�m� ei linkity jostain syyst� aiempaan iffiin
		cout << "Suosittelen paastoamista...";

	cout << endl << endl;
}
