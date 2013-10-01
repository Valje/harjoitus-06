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
		cout << "Sinulle jää lihapiirakan oston jälkeen " <<RAHAT << " euroa.";
	else // tämä ei linkity jostain syystä aiempaan iffiin
		cout << "Suosittelen paastoamista...";

	cout << endl << endl;
}
