#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int counter = 0;
void print() {
    cout << endl << " === " << counter++ << " === " << endl;
}
int random(int min, int max) {
    return min + rand() % (min - max + min + 1);
}

void insertionSort(int *arrayPtr, int length) // сортировка вставками
{
    int temp, // временная переменная для хранения значения элемента сортируемого массива
        item; // индекс предыдущего элемента
    for (int counter = 1; counter < length; counter++)
    {
        temp = arrayPtr[counter]; // инициализируем временную переменную текущим значением элемента массива
        item = counter-1; // запоминаем индекс предыдущего элемента массива
        while(item >= 0 && arrayPtr[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
        {
            arrayPtr[item + 1] = arrayPtr[item]; // перестановка элементов массива
            arrayPtr[item] = temp;
            item--;
        }
    }
}

int main() {
    int size_array = 30 ;
    // cin >> size_array;
    int k = 0;
    int *sorted_array = new int [size_array]; // Указатель на масст
    // Рандом
    print();
    for (int i = 0; i < size_array; i++)
    {
        sorted_array[i] = random(-10, 30);
        cout << setw(2) << sorted_array[i] << "  ";
    }
    for (int i = 0; i < size_array; i++)
    {
        if (sorted_array[i] > 0)
        {
            insertionSort(sorted_array, size_array);
        }
    }
    print();
    for (int i = 0; i < size_array; i++)  {
        cout << setw(2) << sorted_array[i] << "  ";
    }
    delete [] sorted_array;
    return 0;
}
