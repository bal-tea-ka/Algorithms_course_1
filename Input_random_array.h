#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int GetRandomNumber(int min, int max)
{
    int num = min + rand() % (max - min + 1);
    return num;
}

int* Input_random_array(int count) {
    int array[35000];
    
    srand(time(NULL));

    if (count <= 35000) {
        for (int i = 0; i < count - 1; i++) {
            array[i] = GetRandomNumber(-100, 100);
        }
    }
    return array;
}

int* Input_random_dynamic_array(int count) {

    srand(time(NULL));
    int* array = new int[count];
    for (int i = 0; i < count; i++) {
        array[i] = GetRandomNumber(-500, 500);
    }
    return array;
}

int* menu_Input_random_array() {
    system("cls");
    int s;
    cout << "Для создания рандомного статического массива введите 1\nДля создания рандомного динамического массива введите 2\n" <<
        "\nВведите номер команды: ";
    cin >> s;
    system("cls");
    switch (s) {
    case 1:
        return Input_random_array(s);
        break;
    case 2:
        return Input_random_dynamic_array(s);
        break;
    default:
        cout << "Ошибка, попробуйте снова!";
        system("pause");
        menu_Input_random_array();
        return 0;
    }
}