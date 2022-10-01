#include <iostream>

using namespace std;

int random(int min, int max) {
    return min + rand() % (min - max + min + 1);
}

int main() {
    int *parr = nullptr;
    const int size = 10;
    int arr[size][size];
    // int &link_size = size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = random(-50, 50);
        }
        
    }
}

// Задача 2. Дана целочисленная квадратная матрица. Упорядочить по
// убыванию элементы в тех строках, которые не содержат ни одного нулевого
// элемента.