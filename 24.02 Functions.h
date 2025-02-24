#pragma once
#include <iostream>

using namespace std;

// 1. Функція знаходження мін/макс + їх індексів
void findMinMax(const int arr[], int size, int minMaxValues[]) 
{
    minMaxValues[0] = arr[0]; // Мін значення
    minMaxValues[1] = 0;      // Індекс мін
    minMaxValues[2] = arr[0]; // Макс значення
    minMaxValues[3] = 0;      // Індекс макс

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < minMaxValues[0]) 
        {
            minMaxValues[0] = arr[i];
            minMaxValues[1] = i;
        }
        if (arr[i] > minMaxValues[2]) 
        {
            minMaxValues[2] = arr[i];
            minMaxValues[3] = i;
        }
    }
}

// 2. Функція реверсу масиву
void reverseArray(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// 3. Функція для підрахунку кількості простих чисел у масиві
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(const int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (isPrime(arr[i])) 
            count++;
    }
    return count;
}
