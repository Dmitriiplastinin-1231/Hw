#include <iostream>

// hpp
void fillArr (int*, int&);
int main();

// cpp
void fillArr (int* arr, int& sum, int size) 
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        std::cout << arr[i];
        std::cout << ' ';
        sum = sum + arr[i];
    }

    std::cout << ' ' << std::endl;
}

int main()
{
    // State
    const int arraySize = 10;

    int arrA[arraySize], arrB[arraySize], arrC[arraySize];
    int sumArrA{0}, sumArrB{0}, sumArrC{0};

    // First sequence
    std::cout << "Первая последовательнсть" << std::endl;
    fillArr(arrA, sumArrA, arraySize);

    std::cout << "Среднее первой последовательности = " << 1.0 * sumArrA / arraySize << std::endl;

    // Second sequence
    std::cout << "Вторая последовательность" << std::endl;
    fillArr(arrB, sumArrB, arraySize);

    std::cout << "Среднее второй последовательности = " << 1.0 * sumArrB / arraySize << std::endl;

    // Third sequencesa
    std::cout << "Третья последовательность" << std::endl;
    fillArr(arrC, sumArrC, arraySize);

    std::cout << "Среднее третьей последовательности = " << 1.0 * sumArrC / arraySize << std::endl;


    return 0;
}
