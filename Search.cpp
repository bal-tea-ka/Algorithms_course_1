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

	cout << "Программа выполнена :))\n";*/

	int n = 0;
	cout << "Введите размерность массива: ";
	cin >> n;
	system("cls");
	int* arr = Input_random_array(n);
	int x;
	cout << "\nВведите необходимый для поиска элемент: ";
	cin >> x;
	system("cls");
	cout << "Выберете способ поиска элемента:\n\nДля линейного поиска введите 1\nДля поиска с барьером введите 2\nДля бинарного поиска введите 3\n\nВведите номер команды: ";
	int i;
	cin >> i;
	system("cls");
	switch (i) {
	case 1:
		if (search_barier(arr, n, x) == -1) { cout << "Элемент в массиве отсутствует :((\n"; }
		else { print_array(arr, n); cout << "Нужный элемент найден! :))\n\nИндекс элемента [" << x << "]: " << search(arr, n, x) << "\n\n"; };
		system("pause");
		main1();
	case 2:
		if (search_barier(arr, n, x) == -1) { cout << "Элемент в массиве отсутствует :((\n"; }
		else { print_array(arr, n); cout << "Нужный элемент найден! :))\n\nИндекс элемента [" << x << "]: " << search_barier(arr, n, x) << "\n\n"; };
		system("pause");
		main1();
	case 3:
		arr = shaker_sort(arr, n);
		print_sorted_array(arr, n);
		if (binary_search(arr, 0, n, x) == -1) { cout << "\nЭлемент в массиве отсутствует :((\n"; }
		else { cout << "\nНужный элемент найден!:))\n\nИндекс элемента [" << x << "]: " << binary_search(arr, 0, n, x) << "\n\n"; };
		system("pause");
		main1();
	default:
		cout << "Ошибка, попробуйте снова!\n\n";
		system("pause");
		main1();
	}
	return 0;
}