#pragma once
#include <iostream>

using namespace std;

void swap() {
	int array[1000];
	int count;
	std::cout << "¬ведите размерность массива: ";
	cin >> count;
	system("cls");
	if (count <= 1000) {
		for (int k = 0; k < count; k++) {
			cout << "¬ведите " << k + 1 << "-ый элемент массива: ";
			cin >> array[k];
			system("cls");
		}
		int i, j;
		cout << "¬ведите индекс первого элемента дл€ перестановки: ";
		cin >> i;
		cout << "\n¬ведите индекс второго элемента дл€ перестановки: ";
		cin >> j;
		int el;
		el = array[i];
		array[i] = array[j];
		array[j] = el;
		system("cls");
		cout << "»тоговый массив: [";
		for (int d = 0; d < count; d++) {
			cout << array[d];
			if (d < count - 1) {
				cout << ", ";
			}
		}
		cout << "]\n";
	}
}