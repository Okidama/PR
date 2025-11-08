#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int num;
	cout << "Введите число: "; cin >> num;

	if (num < 0) {
		cout << "Ошибка! Число меньше 0";
		return 0;
	}
	else if (num > 100) {
		cout << "Ошибка! Число больше 100";
		return 0;
	}

	if (0 <= num and num <= 10) {
		cout << "Цифра в диапазоне: 0 - 10";
	}
	else if (11 <= num and num <= 20) {
		cout << "Цифра в диапазоне: 11 - 20";
	}
	else if (21 <= num and num <= 30) {
		cout << "Цифра в диапазоне: 21 - 30";
	}
	else if (31 <= num and num <= 40) {
		cout << "Цифра в диапазоне: 31 - 40";
	}
	else if (41 <= num and num <= 50) {
		cout << "Цифра в диапазоне: 41 - 50";
	}
	else if (51 <= num and num <= 60) {
		cout << "Цифра в диапазоне: 51 - 60";
	}
	else if (61 <= num and num <= 70) {
		cout << "Цифра в диапазоне: 61 - 70";
	}
	else if (71 <= num and num <= 80) {
		cout << "Цифра в диапазоне: 71 - 80";
	}
	else if (81 <= num and num <= 90) {
		cout << "Цифра в диапазоне: 81 - 90";
	}
	else if (91 <= num and num <= 100) {
		cout << "Цифра в диапазоне: 91 - 100";
	}
}
