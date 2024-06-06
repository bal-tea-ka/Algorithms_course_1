#include <iostream>
#include <algorithm>
#include "Input_random_array.h"
#include "Search.h"
#include "Search_barier.h"
#include "Binary_search.h"
#include "Print_array.h"
#include <fstream>
#include "sort.h"
using namespace std;

int main1() {

	setlocale(LC_ALL, "RUS");
	system("cls");
	
	/*ofstream file("C:/Users/lvovm/Desktop/table2.csv");
	for (int i = 2; i < 10; i++) {
		int num = pow(2, i);
		int* arr = Input_random_array(num);
		arr = bubbleSort(arr, num);

		file << num << "; " << search_barier(arr, num, -1000000) << "\n";
	}
	file.close();

	cout << "��������� ��������� :))\n";*/

	int n = 0;
	cout << "������� ����������� �������: ";
	cin >> n;
	system("cls");
	int* arr = Input_random_array(n);
	int x;
	cout << "\n������� ����������� ��� ������ �������: ";
	cin >> x;
	system("cls");
	cout << "�������� ������ ������ ��������:\n\n��� ��������� ������ ������� 1\n��� ������ � �������� ������� 2\n��� ��������� ������ ������� 3\n\n������� ����� �������: ";
	int i;
	cin >> i;
	system("cls");
	switch (i) {
	case 1:
		if (search_barier(arr, n, x) == -1) { cout << "������� � ������� ����������� :((\n"; }
		else { print_array(arr, n); cout << "������ ������� ������! :))\n\n������ �������� [" << x << "]: " << search(arr, n, x) << "\n\n"; };
		system("pause");
		main1();
	case 2:
		if (search_barier(arr, n, x) == -1) { cout << "������� � ������� ����������� :((\n"; }
		else { print_array(arr, n); cout << "������ ������� ������! :))\n\n������ �������� [" << x << "]: " << search_barier(arr, n, x) << "\n\n"; };
		system("pause");
		main1();
	case 3:
		arr = shaker_sort(arr, n);
		print_sorted_array(arr, n);
		if (binary_search(arr, 0, n, x) == -1) { cout << "\n������� � ������� ����������� :((\n"; }
		else { cout << "\n������ ������� ������!:))\n\n������ �������� [" << x << "]: " << binary_search(arr, 0, n, x) << "\n\n"; };
		system("pause");
		main1();
	default:
		cout << "������, ���������� �����!\n\n";
		system("pause");
		main1();
	}
	return 0;
}