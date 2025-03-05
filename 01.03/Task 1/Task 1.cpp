#include <iostream>
using namespace std;

int sec, mint, hour;
int nsec, nmint, nhour;
int msec, mmint, mhour;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите время в секундах: ";
	cin >> sec;
	sec %= 86400;
	mint = sec / 60;
	hour = mint / 60;
	nsec = sec % 60;
	nmint = mint % 60;
	nhour = hour % 24;
	cout << "\n\tВРЕМЯ СЕЙЧАС\n\n";
	cout << "Часы: " << nhour << " Минуты: " << nmint << " Секунды: " << nsec;

	cout << "\n\n\tДО ПОЛУНОЧИ ОСТАЛОСЬ\n";
	mhour = ((86400 - sec) % 86400) / 3600;
	mmint = (((86400 - sec) % 86400) % 3600) / 60;
	msec = ((86400 - sec) % 86400) % 60;
	cout << "\nЧасы: " << mhour << " Минуты: " << mmint << " Секунды: " << msec << endl;
}