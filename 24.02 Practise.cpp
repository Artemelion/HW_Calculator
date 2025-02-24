#include "24.02 Functions.h"

int main() 
{
    setlocale(LC_ALL, "");

    const int SIZE = 7;
    int arr[SIZE] = { 12, 5, 8, 3, 17, 1, 10 };

    // 1. Пошук мін/макс та їх індекси
    int minMaxValues[4]; // Масив для збереження {minValue, minIndex, maxValue, maxIndex}
    findMinMax(arr, SIZE, minMaxValues);
    cout << "Мінімум: " << minMaxValues[0] << " (Індекс: " << minMaxValues[1] << ")" << endl;
    cout << "Максимум: " << minMaxValues[2] << " (Індекс: " << minMaxValues[3] << ")" << endl;

    // 2. Реверс масиву
    reverseArray(arr, SIZE);
    cout << "Масив після реверсу: ";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Підрахунок простих чисел
    int primeCount = countPrimes(arr, SIZE);
    cout << "Кількість простих чисел у масиві: " << primeCount << endl;

    return 0;
}
