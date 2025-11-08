#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int choice;
	cout << "[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна\n";
	cout << "Введите значение: "; cin >> choice;

	if (choice == 1) {
		cout << "Сейчас лето";
	}
	else if (choice == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.";
	}
	else if (choice == 3) {
		cout << "Сейчас зима";
	}
	else if (choice == 4) {
		cout << "Сейчас весна";
	}
	else {
		cout << "Такого времени года нет";
	}
}