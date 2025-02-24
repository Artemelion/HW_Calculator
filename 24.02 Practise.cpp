#include "24.02 Functions.h"

int main() 
{
    setlocale(LC_ALL, "");

    const int SIZE = 7;
    int arr[SIZE] = { 12, 5, 8, 3, 17, 1, 10 };

    // 1. ����� ��/���� �� �� �������
    int minMaxValues[4]; // ����� ��� ���������� {minValue, minIndex, maxValue, maxIndex}
    findMinMax(arr, SIZE, minMaxValues);
    cout << "̳����: " << minMaxValues[0] << " (������: " << minMaxValues[1] << ")" << endl;
    cout << "��������: " << minMaxValues[2] << " (������: " << minMaxValues[3] << ")" << endl;

    // 2. ������ ������
    reverseArray(arr, SIZE);
    cout << "����� ���� �������: ";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. ϳ�������� ������� �����
    int primeCount = countPrimes(arr, SIZE);
    cout << "ʳ������ ������� ����� � �����: " << primeCount << endl;

    return 0;
}
