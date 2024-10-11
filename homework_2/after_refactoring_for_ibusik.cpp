#include <iostream>
#include <cmath>

void fillArr (int* arr, int& sum) 
{
    for (int i = 0; i < 10; i++)
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
    int a[10], b[10], c[10];
    int sa{0}, sb{0}, sc{0};

    // First sequence
    std::cout << "Первая последовательнсть" << std::endl;
    fillArr(a, sa);

    std::cout << "Среднее первой последовательности = " << 1.0 * sa / 10 << std::endl;

    // Second sequence
    std::cout << "Вторая последовательность" << std::endl;
    fillArr(b, sb);

    std::cout << "Среднее второй последовательности = " << 1.0 * sb / 10 << std::endl;

    // Third sequencesa
    std::cout << "Третья последовательность" << std::endl;
    fillArr(c, sc);

    std::cout << "Среднее третьей последовательности = " << 1.0 * sc / 10 << std::endl;


    return 0;
}