#include <iostream>
#include "Input_array.h"
#include "Input_random_array.h"
#include "Swap.h"

using namespace std;

int main1() {

	setlocale(LC_ALL, "RUS");

	cout << "Для ввода массива с клавиатуры введите 1\nДля рандомного задания введите 2\nДля проверки функции перестановки элементов введите 3" << \
		"\nВведите номер команды: ";
	int c;
	cin >> c;
	switch (c) {
	case 1:
		menu_Input_array();
		break;
	case 2:
		menu_Input_random_array();
		break;
	case 3:
		swap();
		break;
	default:
		cout << "Ошибка!!!!!!";
	}
	return 0;
}