#include <iostream>
#include "Input_array.h"
#include "Input_random_array.h"
#include "Swap.h"

using namespace std;

int main1() {

	setlocale(LC_ALL, "RUS");

	cout << "��� ����� ������� � ���������� ������� 1\n��� ���������� ������� ������� 2\n��� �������� ������� ������������ ��������� ������� 3" << \
		"\n������� ����� �������: ";
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
		cout << "������!!!!!!";
	}
	return 0;
}