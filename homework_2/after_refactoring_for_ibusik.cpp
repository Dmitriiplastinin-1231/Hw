#include <iostream>
#include <string>

// hpp
void fillArr (int* arr, int& sum, const int size);
void printArr (const int* const arr, const int size);
float midNum (const int sumArr, const int arraySize);
int main();


// cpp
void fillArr (int* arr, int& sum, const int size) 
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        sum = sum + arr[i];
    }
}

void printArr (const int* const arr, const int size) 
{
    static char format = ' ';
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        std::cout << format;
    }
    std::cout << ' ' << std::endl;
}

float midNum (const int sumArr, const int arraySize) 
{
    return (1.0 * sumArr / arraySize);
}

void procSequence (const std::string text1, const std::string text2, const int arraySize) 
{
    int arr[arraySize];
    int sumArr{0};

    std::cout << text1 << " последоваетельность:" << std::endl;
    fillArr(arr, sumArr, arraySize);
    printArr(arr, arraySize);

    std::cout 
        << "Среднее " << text2 << " последовательности = " 
        << midNum(sumArr, arraySize) 
        << std::endl;
}


int main()
{
    // State
    const int arraySize = 10;

    procSequence("Первая", "первой", arraySize);
    procSequence("Вторая", "второй", arraySize);
    procSequence("Третья", "третьей", arraySize);


    return 0;
}