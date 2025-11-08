#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int num; cin >> num;

	for (int multiplier = 1; multiplier < 10; multiplier++) {
		cout << "Решите пример: " << num << " x " << multiplier << endl;
		int  answer;
		cout << "Ответ: "; cin >> answer;
		if (answer == num * multiplier) {
			cout << "Пример решен правильно!\n";
		}
		else {
			cout << "Ошибка, пример решен неверно!";
			return 0;
		}
	}
	cout << "Примеры решены, поздравляем!";
}