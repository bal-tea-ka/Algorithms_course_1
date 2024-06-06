#include <iostream>
#include <fstream>
#include "sort.h"
#include "Input_random_array.h"
#include "Print_array.h"

using namespace std;



int main() {

	setlocale(LC_ALL, "RUS");
	system("cls");

	/*int n;
	cout << "Введите размерность массива: ";
	cin >> n;

	system("cls");*/
	/*int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "{" << i + 1 << "}-> ";
		cin >> arr[i];
		cout << "\n";
	}*/
	/*for (int i = 2; i < 10; i += 2) {
		int n = pow(2, i);
		int* arr = Input_random_array(n);
		
	}*/

	int n = 8;
	int arr[8] = {44, 55, 12, 42, 94,  18, 6, 67};
	system("cls");
	print_array(arr, n);
	int c;
	cout << "{1}-> Сортировка пузырьком\n{2}-> Сортировка всплытием\n{3}-> Оптимизированный пузырек\n{4}-> Шейкерная сортировка\n{5}-> Сортировка вставками" << 
		"\n{6}-> Сортировка выбором\n{7}-> Сортировка выбором максимума\n{8}-> Сортировка Добосевича\n{9}-> Сортировка Шелла\n{10}-> Оценка сложности" << 
		"\n{11}-> Сравнение шага расчестки\n{12}-> Сравнение Расчестка 2\n{13}-> Сравнение Шелл\n{14}-> Быстрая сортировка\n{15}-> Пирамидальная сортировка\n\nВведите номер команды : ";
	cin >> c;
	system("cls");
	if (c == 1) {
		print_array(arr, n);
		bubble_sort_original(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 2) {
		print_array(arr, n);
		sinking_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 3) {
		print_array(arr, n);
		bubble_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 4) {
		print_array(arr, n);
		shaker_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 5) {
		print_array(arr, n);
		insertion_max_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 6) {
		print_array(arr, n);
		selection_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 7) {
		print_array(arr, n);
		selection_max_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 8) {
		print_array(arr, n);
		comb_sort(arr, n, 1.2);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 9) {
		print_array(arr, n);
		shell_sort(arr, n, 2);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}
	if (c == 10) {
		cout << "bubble sort\n";
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[j] = j;
			}
			bubble_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			arr = Input_random_array(n);
			bubble_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = n - 1; j >= 0; j++) {
				arr[j] = j;
			}
			bubble_sort(arr, n);
		}
		cout << "sinking sort\n";
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[j] = j;
			}
			sinking_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			arr = Input_random_array(n);
			sinking_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[j] = n - j;
			}
			sinking_sort(arr, n);
		}
		cout << "shaker sort\n";
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[j] = j;
			}
			shaker_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			arr = Input_random_array(n);
			shaker_sort(arr, n);
		}
		for (int i = 3; i < 10; i++) {
			n = pow(2, i);
			int* arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[j] = n - j;
			}
			shaker_sort(arr, n);
		}
		
	}
	if (c == 11) {
		int n = 32128;
		int* arr = new int[n];
		for (int i = 0; i < 4; i++) {
			for (int g = 0; g < n; g++) {
				arr[g] = n - g;
			}
			if (i == 0) comb_sort(arr, n, 1.2);
			if (i == 1) comb_sort_second(arr, n);
			if (i == 2) comb_sort_third(arr, n);
			if (i == 3) comb_sort_four(arr, n);
		}
	}
	if (c == 12) {
		int n = 30100;
		int* temp = Input_random_dynamic_array(n);

		for (double s = 2; s > 1; s -= 0.05) {
			int* arr = new int[n];
			copy_n(temp, n, arr);
			cout << "shrink = " << s << " ";
			comb_sort(arr, n, s);
		}
		system("pause");
		main();
	}
	if (c == 13) {
		int n = 30100;
		int* temp = Input_random_dynamic_array(n);

		for (double s = 2; s > 1; s -= 0.05) {
			int* arr = new int[n]; 
			copy_n(temp, n, arr);
	
			cout << "shrink = " << s << " ";
			shell_sort(arr, n, s);
		}
		system("pause");
		main();
	}
	if (c == 14) {
		int n = 150;
		int* temp = Input_random_dynamic_array(n);
		int* arr = new int(n);
		int countermid = 0;
		int counterrand = 0;
		copy_n(arr, n, temp);
		quick_middle_sort(arr, 0, n - 1, n, countermid);
		copy_n(temp, n, arr);
		quick_random_sort(arr, 0, n - 1, n, counterrand);
		cout << counterrand << ' ' << countermid << "\n\n";
		system("pause");
		
		main();
	}
	if (c == 15) {
		print_array(arr, n);
		heap_sort(arr, n);
		print_sorted_array(arr, n);
		system("pause");
		main();
	}

	else {
		cout << "Ошибка, попробуйте снова! :((\n";
		system("pause");
		main();
	}
	
	return 0;
}