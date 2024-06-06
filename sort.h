#pragma once
#include <iostream>

using namespace std;

void print_sorted_array(int* array, int n){
    cout << "\nОтсортированный массив: [";
    for (int k = 0; k < n; k++) {
        cout << array[k];
        if (k < n - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

void print_iter(int* array, int n, int i) {
    cout << i + 1 << ". [";
    for (int k = 0; k < n; k++) {
        cout << array[k];
        if (k < n - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

void print_iter_rec(int* array, int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int* bubble_sort_original(int* array, int n){
    int counter_ob = 0; int counter_sr = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            counter_sr++;
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j+1]);
                counter_ob++;
            }
        }       
    }
    return array;
}

int* bubble_sort(int* array, int n) {
    fstream out;
    out.open("C:\\Users\lvovm\Desktop\sort.csv");
    int counter_sr = 0; int counter_ob = 0;
    for (int i = 0; i < n-1; ++i)
    {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; ++j)
        {
            counter_sr++;
            if (array[j] > array[j+1])
            {
                flag = true;
                swap(array[j], array[j + 1]);
                counter_ob++;
            }
        }
        if (!flag) break;
       
    }
    cout << n << ";" << counter_ob << ";" << counter_sr << "\n";
    return array;
    out.close();
}

int* sinking_sort(int* array, int n) {
    fstream out;
    out.open("C:\\Users\lvovm\Desktop\sort.csv");
    int counter_sr = 0; int counter_ob = 0;
    for (int i = 0; i < n-1 ; i++) {
        bool flag = false;
        for (int j = n-1; j >=i ; j--) {
            counter_sr++;
            if (array[j] < array[j - 1]) {
                swap(array[j], array[j - 1]);
                flag = true;
                counter_ob++;
            }
        }
        if (!flag) break;
    }
    cout << n << ";" << counter_ob << ";" << counter_sr << "\n";
    return array;

    out.close();
}

int* shaker_sort(int* array, int n) {
    fstream out;
    out.open("C:\\Users\lvovm\Desktop\sort.csv");

    bool flag = true;
    int k1 = 0;
    int k2 = n - 1;
    int counter_ob = 0; int counter_sr = 0;
    while (k1<k2 and flag) {
        
        flag = false;
        for (int i = k1; i < n - 1; i++) {
            counter_sr++;
            if (array[i] > array[i + 1]) { flag = true; swap(array[i], array[i + 1]); counter_ob++; };
        }
        
        if (!flag)  break;
        k2--;
        flag = false;
        for (int j = k2; j >= 0; j--) {
            counter_sr++;
            if (array[j] < array[j - 1]) { flag = true; swap(array[j], array[j - 1]); counter_ob++; };
        }
        if (!flag) break;
        k1++;
        
    }
    cout << n << ";" << counter_ob << ";" << counter_sr << "\n";
    return array;
    out.close();
}

int* insertion_sort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--) {
            swap(arr[j - 1], arr[j]);
        }
        print_iter(arr, n, i-1);
    }
    return arr;
}
int* insertion_max_sort(int* array, int n) {
    int i, key, j;
    for (i = n - 2; i >= 0; i--) {
        key = array[i];
        j = i + 1;

        while (j < n and array[j] < key) {
            array[j - 1] = array[j];
            j = j + 1;
        }
        array[j - 1] = key;
    }
    return array;
}



int* selection_sort(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] < arr[min]) min = k;
        }
        swap(arr[i], arr[min]);
        print_iter(arr, n, i);
    }
    return arr;
}

int* selection_max_sort(int* arr, int n) {
    for (int i = n-1; i >= 0; i--) {
        int max = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[max]) max = j;
        }
        swap(arr[i], arr[max]);
        print_iter(arr, n, n-i-1);
    }
    return arr;
}

int* comb_sort(int* arr, int n, double shrink) {
    int count_ob = 0; int count_sr = 0;
    int h = n / shrink;
    bool flag = true;
    while (h > 1 && flag) {
        flag = false;
        count_sr++;
        for (int i = 0; i < n - h; i++) {
            if (arr[i] > arr[i + h]) { swap(arr[i], arr[i + h]); flag = true; count_ob++; };
        }
        
        h /= shrink;
    }

    for (int i = 1; i < n; i++) {
        count_sr++;
        for (int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--) {
            swap(arr[j - 1], arr[j]);
            count_ob++;
        }
    }

    cout << n << ";" << count_ob+count_sr << endl;
    return arr;
}


int* shell_sort(int* arr, int n, double shrink) {
    int counter_ob = 0; int counter_sr = 0;
    for (int h = n / shrink; h > 0; h/=shrink) {
        for (int i = h; i < n; i++) {
            counter_sr++;
            for (int j = i - h; (j >= 0) && (arr[j] > arr[j + h]); j -= h) { swap(arr[j + h], arr[j]); counter_ob++; };
        }
    }
    cout << n << ";" << counter_ob + counter_sr << endl;
    return arr;
}




int* comb_sort_second(int* arr, int n) {
    int* H = new int[n];
    for (int k = 0; k < 11; k++) {
        H[k] = pow(2, k + 1) - 1;
    }
    int count_sr = 0; int count_ob = 0;
    int h = 2; int k = 10;
    bool flag = true;
    while (h > 1 && flag) {
        h = H[k];
        flag = false;
        for (int i = 0; i < n - h; i++) {
            count_sr++;
            if (arr[i] > arr[i + h]) { swap(arr[i], arr[i + h]); flag = true; count_ob++; };
        }
        k--;
    }

    for (int i = 1; i < n; i++) {
        count_sr++;
        for (int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--) {
            swap(arr[j - 1], arr[j]);
            count_ob++;
        }
    }

    cout << n << ";" << count_ob + count_sr << endl;

    return arr;
}


int* comb_sort_third(int* arr, int n) {
    int* H = new int[n];
    for (int k = 0; k < 11; k++) {
        H[k] = pow(4, k + 1) + 3 * pow(2, k) + 1;
    }
    int count_sr = 0; int count_ob = 0;
    int h = 2; int k = 10;
    bool flag = true;
    while (h > 1 && flag) {
        h = H[k];
        flag = false;
        for (int i = 0; i < n - h; i++) {
            count_sr++;
            if (arr[i] > arr[i + h]) { swap(arr[i], arr[i + h]); flag = true; count_ob++; };
        }
        k--;
    }

    for (int i = 1; i < n; i++) {
        count_sr++;
        for (int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--) {
            swap(arr[j - 1], arr[j]);
            count_ob++;
        }
    }

    cout << n << ";" << count_ob + count_sr << endl;

    return arr;
}


int* comb_sort_four(int* arr, int n) {
    int* H = new int[n];
    for (int k = 0; k < 11; k++) {
        H[k] = pow(2, k + 5) - 45;
    }
    int count_sr = 0; int count_ob = 0;
    int h = 2; int k = 10;
    bool flag = true;
    while (h > 1 && flag) {
        h = H[k];
        flag = false;
        for (int i = 0; i < n - h; i++) {
            count_sr++;
            if (arr[i] > arr[i + h]) { swap(arr[i], arr[i + h]); flag = true; count_ob++; };
        }
        k--;
    }

    for (int i = 1; i < n; i++) {
        count_sr++;
        for (int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--) {
            swap(arr[j - 1], arr[j]);
            count_ob++;
        }
    }

    cout << n << ";" << count_ob + count_sr << endl;

    return arr;
}

void quick_middle_sort(int* arr, int start, int end, int n, int& counter) {
    int left = start, right = end;
    int mid = (start+end)/ 2;
    int pivot = arr[mid];
    
    while (left <= right) {
        while (arr[left] < pivot) left++;
        while (arr[right] > pivot) right--;
        /*counter++;*/
        if (left <= right) {
            swap(arr[left], arr[right]); counter++;
           /* print_iter_rec(arr, n); 
            cout << " |" << arr[left] << " <-> " << arr[right] << " |" << pivot << "\n";*/
            left++; right--;
        }
    }
    if (right > start) quick_middle_sort(arr, start, right, n, counter);
    if (left < end) quick_middle_sort(arr, left, end, n, counter);
}


void quick_random_sort(int* arr, int start, int end, int n, int& counter) {
    int left = start, right = end;
    int mid = rand() % end;
    int pivot = arr[mid];

    while (left <= right) {
        while (arr[left] < pivot) left++;
        while (arr[right] > pivot) right--;
        /*counter++;*/
        if (left <= right) {
            swap(arr[left], arr[right]); counter++;
            /*print_iter_rec(arr, n);
            cout << " |" << arr[left] << " <-> " << arr[right] << " |" << pivot << "\n";*/
            left++; right--;
        }
    }
    if (right > start) quick_random_sort(arr, start, right, n, counter);
    if (left < end) quick_random_sort(arr, left, end, n, counter);
}

void heapify(int* arr, int n, int i)
{
    int largest = i;
    // Инициализируем наибольший элемент как корень
    int l = 2 * i + 1; // левый = 2*i + 1
    int r = 2 * i + 2; // правый = 2*i + 2

    // Если левый дочерний элемент больше корня
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // Если правый дочерний элемент больше, чем самый большой элемент на данный момент
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // Если самый большой элемент не корень
    if (largest != i)
    {
        swap(arr[i], arr[largest]); print_iter_rec(arr, n);

        // Рекурсивно преобразуем в двоичную кучу затронутое поддерево
        heapify(arr, n, largest);
    }
}

// Основная функция, выполняющая пирамидальную сортировку
void heap_sort(int* arr, int n)
{
    // Построение кучи (перегруппируем массив)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Один за другим извлекаем элементы из кучи
    for (int i = n - 1; i >= 0; i--)
    {
        // Перемещаем текущий корень в конец
        swap(arr[0], arr[i]);
        print_iter_rec(arr, n);
        cout << "\n";

        // вызываем процедуру heapify на уменьшенной куче
        heapify(arr, i, 0);
    }
}