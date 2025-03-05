#include <iostream>
using namespace std;

int sec,hour;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите время, прошедшее с начала рабочего дня, в секундах: ";
	cin >> sec;
	sec = 28800 - sec;
	hour = sec / 3600;
	cout << "Вам осталось работать: " << hour << " ч.";
}
