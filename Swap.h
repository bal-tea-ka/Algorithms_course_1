#pragma once
#include <iostream>

using namespace std;

void swap() {
	int array[1000];
	int count;
	std::cout << "������� ����������� �������: ";
	cin >> count;
	system("cls");
	if (count <= 1000) {
		for (int k = 0; k < count; k++) {
			cout << "������� " << k + 1 << "-�� ������� �������: ";
			cin >> array[k];
			system("cls");
		}
		int i, j;
		cout << "������� ������ ������� �������� ��� ������������: ";
		cin >> i;
		cout << "\n������� ������ ������� �������� ��� ������������: ";
		cin >> j;
		int el;
		el = array[i];
		array[i] = array[j];
		array[j] = el;
		system("cls");
		cout << "�������� ������: [";
		for (int d = 0; d < count; d++) {
			cout << array[d];
			if (d < count - 1) {
				cout << ", ";
			}
		}
		cout << "]\n";
	}
}