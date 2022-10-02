#include <iostream>

using namespace std;

int random(int min, int max) {
    return min + rand() % (min - max + min + 1);
}

int main() {
    const int size = 10;
    int arr[size][size];

    // заполнить матрицу случайными числами
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            arr[i][j] = random(0, 20);

    // вывести матрицу на экран
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "=====================" << endl;

    // упорядочить элементы матрицы по убыванию в строках которые не содержат нулевых элементов
    for (int i = 0; i < size; i++) {
        bool isZero = false;
        for (int j = 0; j < size; j++)
            if (arr[i][j] == 0) {
                isZero = true;
                break;
            }
        if (isZero)
            continue;
        for (int j = 0; j < size - 1; j++)
            for (int k = j + 1; k < size; k++)
                if (arr[i][j] < arr[i][k])
                    swap(arr[i][j], arr[i][k]);
    }
    // вывести матрицу на экран
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}


