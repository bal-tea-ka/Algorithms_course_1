#pragma once
#include <iostream>
#include "Input_random_array.h"
using namespace std;


int search_barier(int* array, int n, int x) {
	if (array[n-1] == x) return n;
	int last = array[n-1];
	array[n-1] = x;
	int i = 0;
	while (array[i] != x) i++;
	array[n-1] = last;
	if (i < n-1) return i;
	return -1;
}