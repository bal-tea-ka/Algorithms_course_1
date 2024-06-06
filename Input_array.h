#pragma once
#include <iostream>

using namespace std;

void Input_array() {
	int array[1000];
	int count;
	cout << "Введите размерность массива: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "Введите " << i + 1 << "-ый элемент массива: ";
		cin >> array[i];
		system("cls");
	}

	cout << "Созданный массив: [";
	for (int i = 0; i < count; i++) {
		cout << array[i];
		if (i < count - 1) {
			cout << ", ";
		}
	}
	cout << "]\n";
}

void Input_dynamic_array() {
	int count;
	cout << "Введите размерность динамического массива: ";
	cin >> count;
	int* array = new int[count];
	system("cls");
	for (int i = 0; i < count; i++) {
		cout << "Введите " << i + 1 << "-ый элемент массива: ";
		cin >> array[i];
		system("cls");
	}

	cout << "Созданный массив: [";
	for (int i = 0; i < count; i++) {
		cout << array[i];
		if (i < count - 1) {
			cout << ", ";
		}
	}
	cout << "]\n";
}

int menu_Input_array() {
	system("cls");
	int i;
	cout << "Для ввода статического массива введите 1\nДля ввода динамического массива введите 2\n" <<
		"\nВведите номер команды: ";
	cin >> i;
	system("cls");
	switch (i) {
	case 1:
		Input_array();
		break;
	case 2:
		Input_dynamic_array();
		break;
	default:
		cout << "Ошибка, попробуйте снова!";
		system("pause");
		menu_Input_array();
	}
	return 0;
}

