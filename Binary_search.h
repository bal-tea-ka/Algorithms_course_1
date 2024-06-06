#pragma once
#include <iostream>
#include <algorithm>
#include "sort.h"

using namespace std;



int index_binary_search(int* arr, int l, int r, int key) {
    int mid;
    int counter = 0;
    while (l <= r) {
        mid = (l + r) / 2; counter++;
        

        if (arr[mid] == key) return counter;
        if (arr[mid] > key) r = mid - 1;
        else l = mid + 1;
    }
    return counter;
}

int binary_search(int* array, int l, int r, int x) {
	int i = (l + r) / 2;

	if (r < l) { return -1; };
	if (array[i] == x) { return i; };
	if (array[i] > x) {return binary_search(array, l, i-1, x); };

	return binary_search(array, i+1, r, x);
}