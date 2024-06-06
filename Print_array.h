#pragma once
#include <iostream>

using namespace std;

void print_array(int* array, int n) {
	cout << "Массив: [";
	for (int k = 0; k < n; k++) {
		cout << array[k];
		if (k < n - 1) {
			cout << ", ";
		}
	}
	cout << "]\n\n";
}

