#pragma once
#include <iostream>

using namespace std;

void Input_array() {
	int array[1000];
	int count;
	cout << "������� ����������� �������: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "������� " << i + 1 << "-�� ������� �������: ";
		cin >> array[i];
		system("cls");
	}

	cout << "��������� ������: [";
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
	cout << "������� ����������� ������������� �������: ";
	cin >> count;
	int* array = new int[count];
	system("cls");
	for (int i = 0; i < count; i++) {
		cout << "������� " << i + 1 << "-�� ������� �������: ";
		cin >> array[i];
		system("cls");
	}

	cout << "��������� ������: [";
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
	cout << "��� ����� ������������ ������� ������� 1\n��� ����� ������������� ������� ������� 2\n" <<
		"\n������� ����� �������: ";
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
		cout << "������, ���������� �����!";
		system("pause");
		menu_Input_array();
	}
	return 0;
}

